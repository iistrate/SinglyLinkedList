#ifndef LIST_H
#define LIST_H

#include <iostream>
using std::cout;
using std::endl;

class List {
private:
	class Node {
	private:
		Node* m_Next;
		int m_data;
	public:
		Node(void):m_data(0), m_Next(0) {}
		Node(int data):m_data(data), m_Next(0) {}

		Node* getNext(void) {
			return m_Next;
		}
		int getData(void) {
			return m_data;
		}

		void setNext(Node* node) {
			m_Next = node;
		}
		void setData(int data) {
			m_data = data;
		}
	};

	Node* m_Head;
	int m_count;

public:
	List(void):m_Head(0), m_count(0) {}

	//print list
	void print(void) {
		Node* navigator = m_Head;
		while (navigator != 0) {
			cout << navigator->getData() << " ";
			navigator = navigator->getNext();
		}
	}

	//remove from head and return data
	int pop(void) {
		Node* temp = m_Head;
		m_Head = m_Head->getNext();
		m_count--;
		return temp->getData();
	}

	//add at start of list
	void push(int data) {
		Node* node = new Node(data);
		Node* temp = m_Head;
		m_Head = node;
		m_Head->setNext(temp);
		m_count++;
	}

	//get count
	int getCount(void) {
		return m_count;
	}

};

#endif //list.h