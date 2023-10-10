/**Program that checks all the words in file and compares it to a dictionary to see
if the spelling is right
/*Mohammad Aryan Khan
/*py9242yg
/*Instructor: Jie Meichsner
/*Due date:10/06/2023*/
#include"DoublyLinkedBag.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

// Assuming each word in the dictionary is of type string.
DoublyLinkedBag<string> dictionary;

void loadDictionary(const string &filename) {
  ifstream file(filename);
  string word;
  while (file>>word) {
    dictionary.add(word);
  }
}

bool isWordInDictionary(const string &word) {
  return dictionary.contains(word);
}

int main() {
  // Load the dictionary.
  loadDictionary("dictionary.txt");

  string inputFilename;
  cout<<"Enter the name of the file that contains words to check: ";
  cin>>inputFilename;

  ifstream inputFile(inputFilename);
  if (!inputFile.is_open()) {
    cout<<"Failed to open the input file."<<endl;
    return 1;
  }

  cout << "\nThe following words in the file \""<<inputFilename<<"\" are not spelled correctly:\n";

  string line, word;
  while (getline(inputFile, line)) {
    istringstream check(line);
    while (check>>word) {
      if (!isWordInDictionary(word)) {
	cout<<word<<endl;
      }
    }
  }

  cout<<"\nThanks for using the spell checker system."<<endl;
  return 0;
}

