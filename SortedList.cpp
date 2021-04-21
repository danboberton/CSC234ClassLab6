// SortedList

#include "SortedList.h"
#include "List.h"

void SortedList::Insert(ItemType item){
    List::Insert(item);
    List::SelSort();
}

void SortedList::Delete(ItemType item){
    List::Delete(item);
    List::SelSort();
}


