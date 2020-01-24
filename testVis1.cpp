

#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;

void incrementValue() {
	int x, wybor;
	cout << "Prosze podac wartosc" << endl;
	cin >> x;
	cout << "Wartosc przed inkrementacja: " << x << endl;
	cout << "Wartosc po inkrementacji: " << ++x << endl;
	getchar(); getchar();
	system("cls");

}

int main()
{
	incrementValue();
	return 0;
}

