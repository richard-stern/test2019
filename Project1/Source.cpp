#include "Car.h"
#include <time.h>
#include <iostream>
#include "Settings.h"
using namespace std;

#define LIST_SIZE 10000

int main() 
{
	cout << "Think of a number between 0 and 10000" << endl;
	system("pause");

	int L = 0;
	int R = LIST_SIZE - 1;
	int M = (L + R) / 2;
	bool found = false;

	while (L <= R)
	{
		cout << "Is your number: " << M << endl;
		cout << "1: Correct" << endl;
		cout << "2: Higher" << endl;
		cout << "3: Lower" << endl;

		int input = 0;
		cin >> input;
		cin.clear();
		cin.ignore(99999, '\n');

		if (input == 1)
		{
			cout << "Yay I guessed your number, I win!" << endl;
			found = true;
			break;
		}
		else if (input == 2)
		{
			L = M + 1;
			M = (L + R) / 2;
		}
		else if (input == 3)
		{
			R = M - 1;
			M = (L + R) / 2;
		}
	}

	if (!found)
	{
		cout << "Hey you cheated!" << endl;
	}

	/*char myList[LIST_SIZE][100];
	for (int i = 0; i < LIST_SIZE; ++i)
	{
		sprintf(myList[i], "DATA %i", i);
	}

	char search[100] = "DATA 9815";

	int L = 0;
	int R = LIST_SIZE - 1;
	int M = (L + R) / 2;

	while (L <= R)
	{
		cout << "Testing number " << M << endl;
		int result = strcmp(search, myList[M]);
		if (result == 0)
		{
			cout << M << endl;
			break;
		}
		else if (result < 0)
		{
			R = M - 1;
			M = (L + R) / 2;
		}
		else
		{
			L = M + 1;
			M = (L + R) / 2;
		}
	}*/

	/*for (int i = 0; i < LIST_SIZE; ++i)
	{
		cout << "Testing number " << i << endl;
		if (strcmp(myList[i], search) == 0)
		{
			cout << i << endl;
			break;
		}
	}*/

	system("pause");
	return 0;
}


