#ifndef Double_NODE_
#define Double_NODE_

template<class ItemType>
class DoubleNode
{
 private:
  ItemType        item; // A data item
  DoubleNode<ItemType>* next; // Pointer to next node
  DoubleNode<ItemType>* previous; //Point to previous node //new
 public:
  /*Default constructor*/
  /*@pre none
    /*@post intializes default values to data member*/
  DoubleNode();
  /*Constructor to intialize item*/
  /*@param anItem passed by reference
    /*@pre none
    /*@post intializes the item*/
  DoubleNode(const ItemType& anItem);
  /*Constructor which intializes item, next, and previous*/
  /*@param anItem passed by reference
    /*@param nextNodePtr passed by reference
    /*@param previousNodePtr passed by reference
    /*@pre none
    /*@post intializes the all three data members*/
  DoubleNode(const ItemType& anItem, DoubleNode<ItemType>* nextNodePtr, DoubleNode<ItemType>* previousNodePtr);
  /*Sets item*/
  /*@param anItem passed by reference
    /*@pre none
    /*@post sets the next item*/
  void setItem(const ItemType& anItem);
  /*Sets next*/
  /*@param nextNodePtr passed by reference
    /*@pre none
    /*@post sets the next*/
  void setNext(DoubleNode<ItemType>* nextNodePtr);
  /*Sets previous*/
  /*@param previousNodePtr passed by reference
    /*@pre none
    /*@post sets the previous*/
  void setPrevious(DoubleNode<ItemType>* previousNodePtr); 
  /*Gets item*/
  /*@pre none
    /*@post returns the item*/
  ItemType getItem() const ;
  /*Gets next*/
  /*@pre none
    /*@post returns the next*/
  DoubleNode<ItemType>* getNext() const ;
  /*Gets previous*/
  /*@pre none
    /*@post returns the previous*/
  DoubleNode<ItemType>* getPrevious() const ; 
}; 

#include "DoubleNode.cpp"
#endif
