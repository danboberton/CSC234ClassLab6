#include <iostream>
#include "List.h"
#include "SortedList.h"

using namespace std;

int main(int argc, char* argv[]) {
	List tempList;

	for(int i = 0; i < 10; i++)
		tempList.Insert(rand() % 100);

	tempList.Reset();
	std::cout << tempList;

	std::cout << std::endl;

	tempList.SelSort();

	tempList.Reset();
	for (int i = 0; i < 10; i++)
		std::cout << tempList.GetNextItem() << " ";
	std::cout << std::endl;
}