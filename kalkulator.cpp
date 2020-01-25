

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;


void addFunction() {                                                    //add function
	int a, b;
	cout << "Please type two numbers to add!" << endl;
	cout << "A and B" << endl;
	cin >> a>>b;
	if (!cin.fail()) {
		cout << "The result is: " << a + b << endl;
		getchar();
	}
	else {
		cout << "Wrong variable, please type it again!" << endl;
		exit(0);
	}
}
void subtractFunction() {                                           // subtract function
	int a, b, choice;
	cout << "Please type two numbers to subtract!" << endl;
	cout << "A and B" << endl;
	cin >> a >> b;
	if(!cin.fail()){
	cout << "Which operation would you like to make?" << endl;
	cout << "1. A-B" << endl;
	cout << "2. B-A" << endl;
	cin >> choice;
	switch (choice) {                                                                  //choice to choose which operation would you like to get from subtracting

	case 1:
		cout << "The result of operation is: " << a - b << endl;
		getchar();
		break;
	case 2:
		cout << "The result of operation is: " << b - a << endl;
		getchar();
	default:
		cout << "Wrong variable! Please try to type again!" << endl;
	}
	}
	else {
		cout << "Wrong variable, Please try to type again!" << endl;
		exit(0);
	}

}
void multiplyFunction() {                                          //multiply function
	int a, b;
	cout << "Please type two numbers to multiply!" << endl;
	cout << "A and B" << endl;
	cin >> a >> b;
	if (!cin.fail()) {
		cout << "The result is: " << a * b << endl;
		getchar();
	}
	else {
		cout << "Wrong variable, please to type again!" << endl;
		exit(0);
	}

}
void divideFunction() {                                               //divide function
	double a, b;
	int choice;
	cout << "Please type two numbers to divide!" << endl;
	cout << "A and B" << endl;
	cin >> a >> b;
	if (!cin.fail()) {
		cout << "Which operation would you like to make?" << endl;
		cout << "1. A/B" << endl;
		cout << "2. B/A" << endl;
		cin >> choice;
		switch (choice) {                                             //choice to choose which operation would you like to get from dividing

		case 1:
			cout << "The result of operation is: " << a / b << endl;
			getchar();
			break;
		case 2:
			cout << "The result of operation is: " << b / a << endl;
			getchar();
			break;
		default:
			cout << "Wrong variable! Please try to type again!" << endl;
		}
	}
	else {
		cout << "Wrong variable, Please try to type again!" << endl;
		exit(0);
	}

}



int main()
{
	int choice;
	while (choice = true) {
		cout << "Welcome in the Calculator! Please choose one of operations:" << endl;
		cout << "1. Add " << endl;
		cout << "2. Subtraction " << endl;
		cout << "3. Multiplication " << endl;
		cout << "4. Division " << endl;
		cout << "5. Exit" << endl;      
		cin >> choice;                                               //menu which you can choose, which operation would you like to make
		switch (choice) {
		case 1:
		     addFunction();
			break;
		case 2:
			subtractFunction();
			break;
		case 3:
			multiplyFunction();
			break;
		case 4:
			divideFunction();
			break;
		case 5:
			cout << "Leaving..." << endl;
				getchar();
			exit(0);
		default:
			getchar(); 
			system("cls");
			cout << "Wrong choice, please try again!" << endl;
			break;
		}
		getchar(); 
		system("cls");
		 

	}
	return 0;
}

