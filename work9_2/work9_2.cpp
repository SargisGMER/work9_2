#include "stdafx.h"
#include <iostream>
using namespace std;


void del( );
void undel( );
void remove( );
void save( );
int main()
{
	void(*arr[4])() = {del,undel,remove,save};
	char com[4][7] = { "del","undel","remove","save" };
	char quit1 = 'a';
	while (quit1 != 'q')
	{
		cout << "\n\n------------------" << endl;
		cout << "enter command name" << endl;
		cout << "------------------" << endl;
		char str[25];
		cin >> str;

		for (size_t i = 0; i < 4; i++)
		{

			if (strcmp(com[i], str) == 0)
			{
				arr[i]( );
				break;
			}

		}
		cout << "------------------" << endl;

		cout << "for quit enter (q) ";
		cin >> quit1;
	}
	
    return 0;
}

void del( ) {
	cout << "Command DEL" << endl;
}

void undel( ) {
	cout << "Command UNDEL" << endl;
}

void remove( ) {
	cout << "Command REMOVE" << endl;
}

void save( ) {
	cout << "Command SAVE" << endl;
}