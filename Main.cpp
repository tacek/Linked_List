#include"List.h"
void main()
{
	LinkedList B;

	///*for (int i = 0; i < 10; i++)
	//{
	//	B.Add(i);
	//}*/
	int x;
	int element;
	int position;
	
	while (true)
	{
		cout << "0.EXIT" << endl
			<< "1.Add" << endl
			<< "2.Extract" << endl
			<< "3.Insert" << endl
			<< "4.Print" << endl
			<< "5.Search" << endl
			<< "6.Stek Extract" << endl
			<< "7.Stek Push" << endl
			<< "8.Queue Push" << endl
			<< "9.Queue Extract" << endl;
		cin >> x;
		if (x == 0)
			break;
		switch (x)
		{
		case 1:
			cout << "cin>> Element" << endl;
			cin >> element;
			B.Add(element);
			break;
		case 2:
			cout << "cin>> Position" << endl;
			cin >> position;
			B.Extract(position);
			break;
		case 3:
			cout << "cin>> Element" << endl;
			cin >> element;
			cout << "cin>> Position" << endl;
			cin >> position;
			B.Insert(element, position);
			break;
		case 4:
			B.Print();
			break;
		case 5:
			cout << "cin>> Element" << endl;
			cin >> element;
			B.Search(element);
			break;
		case 6:
			B.Stek_Extract();
			break;
		case 7:
			cout << "cin>> Element" << endl;
			cin >> element;
			B.Stek_Push(element);
			break;
		case 8:
			cout << "cin>> Element" << endl;
			cin >> element;
			B.Queue_Push(element);
			break;

		case 9:
			cout << "cin>> Position" << endl;
			cin >> position;
			B.Extract(position);
			break;
		default:
			break;
		}
	}
	
}