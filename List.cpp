#include "List.h"

void LinkedList::Add(int element)
{
	List *tmp = new List;
	tmp->Element = element;
	tmp->Pointer = nullptr;
	if (pCursor == nullptr)
	{
	  pCursor = pHead=tmp;
	}
	else 
	{
		pCursor->Pointer = tmp;//��������� �� ���
		pCursor = tmp;//��������� ���
	}
	count++;
}

void LinkedList::Print()
{
	List *tmp = new List;
	tmp = pHead;//��������� ��������� �� 0-� �������

	while (tmp)//�������� ������ ���� ��������� �� ����� 0
	{
		cout << tmp->Element <<" -> ";//������� ��������
		tmp = tmp->Pointer;//��������� �� �������� ���� �� ���������
	}
	cout << "NULL"<<endl;
}

void LinkedList::Insert(int element, int position)
{
	List *tmp = new List;//������ ��������� ���������
	tmp->Element = element;//�������� ��������
	if (position == 0)
	{
		tmp->Pointer = pHead;//�������� �� ������� ������
		pHead = tmp;//�������
	}
	else if(position<=count)
	{
		List *tmp1 = new List;
		tmp1 = pHead;
		for (int i = 0; i < position-1; i++)
		{
			tmp1 = tmp1->Pointer;//������ ������
		}
		tmp->Pointer = tmp1->Pointer;//�����������
		tmp1->Pointer = tmp;//�������� �� ����
	}
	count++;
}

void LinkedList::Extract(int position)
{

	if (position > 0)
	{
		List * prev = pHead;
		List * curr = pHead;
		for (int i = 0; i < position - 2; i++)
		{
			prev = prev->Pointer;
			curr = curr->Pointer;
		}
		curr = curr->Pointer;

		prev->Pointer = curr->Pointer;
		delete curr;
	}
	else
	{
		List *t = pHead;
		pHead = pHead->Pointer;
		delete t;
	}
	
	count--;
}

void LinkedList::Search(int element)
{
	List *tmp = pHead;
	
	while (tmp)
	{
		if (tmp->Element == element)
		{
			cout << "find " << tmp->Element << endl;
			break;
		}
		else
		tmp = tmp->Pointer;
		
	}

}

void LinkedList::Stek_Extract()
{
	List * tmp = pCursor;
	cout << tmp->Element<<endl;
	Extract(count);
		count--;

	
}

void LinkedList::Stek_Push(int element)
{
	Add(element);
}

void LinkedList::Queue_Push(int element)
{
	Add(element);
}

void LinkedList::Extract_Queue(int position)
{
	Extract(position);
}


LinkedList::LinkedList()
{
	pHead = pCursor = nullptr;
	count = 0;
}

LinkedList::~LinkedList()
{
	while (pHead)
	{
		List *tmp = pHead->Pointer;
		delete pHead;
		pHead = tmp;

	}
}
