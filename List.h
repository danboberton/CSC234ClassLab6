#pragma once
#include <iostream>

// Specification file array-based list (�List.h�)


const  int  MAX_LENGTH = 50; 
class  List {
public: 	          // Public member functions
    typedef int   ItemType;
    List();           // constructor
    bool IsEmpty() const;
    bool IsFull()  const;
    int  Length()  const; // Returns length of list 
    void Insert(ItemType  item);
    void Delete(ItemType  item);
    bool IsPresent(ItemType  item)  const;
    void SelSort();
    void Reset();
    ItemType GetNextItem();

    friend std::ostream& operator << (std::ostream&, const List&);

protected:	      // Private data members
    int length; // Number of values currently stored
    ItemType data[MAX_LENGTH];
    int  currentPos;  // Used in iteration       
};
