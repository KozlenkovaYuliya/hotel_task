// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

void work()
{
	cout << "Work. ";
}

void model()
{
	cout << "model. ";
}

int main()
{
	int input = 0;
	bool isThisTheEnd = false;

	do
	{
		cout << "Choose mode:" << endl
			<< "[1] - realtime work" << endl
			<< "[2] - run modelling" << endl
			<< "[0] - exit program" << endl;
		cin >> input;
		switch (input) 
		{
		case 1:
			work();
			break;
		case 2: 
			model();
			break;
		case 0:
			isThisTheEnd = true;
			break;
		default:
			cout << "Invalid input. ";
			break;
		}
	} while (!isThisTheEnd);
}