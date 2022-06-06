#include "pch.h"
#include <iostream>
using namespace std;
char array[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int enter;
char select;
int candidate = 1;

void body()
{
	
	cout << "TIC TAK TOE"<<endl ;
	cout << "-------------------" << endl;
	cout << "|     " << "|" << "     " << "|" << "     |"<<endl;
	cout << "|  " << array[0][0] << "  " << "|" << "  " << array[0][1] << "  " << "|" << "  " << array[0][2] << "  |"<<endl;
	cout << "|     " << "|" << "     " << "|" << "     |" << endl;
	cout << "|-----------------|" << endl;
	cout << "|     " << "|" << "     " << "|" << "     |" << endl;
	cout<< "|  " << array[1][0] << "  " << "|" << "  " << array[1][1] << "  " << "|" << "  " << array[1][2] << "  |" << endl;
	cout<< "|     " << "|" << "     " << "|" << "     |" << endl;
	cout << "|-----------------|" << endl;
	cout << "|     " << "|" << "     " << "|" << "     |" << endl;
	cout << "|  " << array[2][0] << "  " << "|" << "  " << array[2][1] << "  " << "|" << "  " << array[2][2] << "  |" << endl;
	cout << "|     " << "|" << "     " << "|" << "     |" << endl;
	cout << "-------------------" << endl;
}
bool win()
{
	if (array[0][0] == array[0][1] && array[0][1] == array[0][2])
	{
		return true;
	}
	else if (array[1][0] == array[1][1] && array[1][1] == array[1][2])
	{
		return true;
	}
	else if (array[2][0] == array[2][1] && array[2][1] == array[2][2])
	{
		return true;
	}
	else if (array[0][0] == array[1][0] && array[1][0] == array[2][0])
	{
		return true;
	}
	else if (array[0][1] == array[1][1] && array[1][1] == array[2][1])
	{
		return true;
	}
	else if (array[0][2] == array[1][2] && array[1][2] == array[2][2])
	{
		return true;
	}
	else if (array[0][0] == array[1][1] && array[1][1] == array[2][2])
	{
		return true;
	}
	else if (array[2][0] == array[1][1] && array[1][1] == array[0][2])
	{
		return true;
	}
	else if ()
	{
		return false;
	}
}
int comparison()
{
	if (enter == 1)
	{
		array[0][0] = select;
	}
	else if (enter == 2)
	{
		array[0][1] = select;
	}
	else if (enter == 3)
	{
		array[0][2] = select;
	}
	else if (enter == 4)
	{
		array[1][0] = select;
	}
	else if (enter == 5)
	{
		array[1][1] = select;
	}
	else if (enter == 6)
	{
		array[1][2] = select;
	}
	else if (enter == 7)
	{
		array[2][0] = select;
	}
	else if (enter == 8)
	{
		array[2][1] = select;
	}
	else if (enter == 9)
	{
		array[2][2] = select;
	}
}
int main()
{
	while (!win())
	{
		body();`	
		candidate = (candidate % 2) ? 1:2;
		if (candidate == 1)
		{
			select = 'X';
		}
		else if (candidate == 2)
		{
			select = 'O';
		}
		cin >> enter;
		comparison();
		win();
		candidate++;
	}
}