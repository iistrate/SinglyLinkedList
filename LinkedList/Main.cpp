#include <iostream>
#include "List.h"

int main() {
	List LinkedList;

	LinkedList.push(5);
	LinkedList.push(3);
	LinkedList.push(10);
	LinkedList.push(22);
	LinkedList.push(1);
	LinkedList.push(9);

	cout << "List size is: ";
	cout << LinkedList.getCount();
	cout << endl;

	cout << "List: ";
	LinkedList.print();
	cout << endl;

	cout << LinkedList.pop() << " removed. New list: ";
	LinkedList.print();
	cout << endl;

	cout << "List size is: ";
	cout << LinkedList.getCount();
	cout << endl;

	system("pause");
	return 0;
}