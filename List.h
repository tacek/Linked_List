#pragma once
#include<iostream>
using namespace std;
//nullptr указывате на 0 указатель 
class LinkedList
{
	struct List
	{
		int Element;

		List *Pointer;
	};
	List *pHead;
	List *pCursor;
	int count = 0;
public:
	
	void Add(int element);
	void Print();
	void Insert(int element, int position);
	void Extract(int position);
	void Search(int element);
	void Stek_Extract();
	void Stek_Push(int element);
	void Queue_Push(int element);
	void Extract_Queue(int position);
	LinkedList();
	~LinkedList();


};



