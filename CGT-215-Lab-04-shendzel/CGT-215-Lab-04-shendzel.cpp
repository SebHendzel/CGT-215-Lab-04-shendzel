// CGT-215-Lab-04-shendzel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
float A;
float B;

void printMenu() {
	cout << "Please select which operation you want to perform" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
}
void factorial() {
	cout << "N!" << endl;
	cout << "Please enter value for N" << endl;
	cout << "N = ";
	cin >> A;
	
	if (A < 0) {
		cout << "Please enter a POSITIVE value this time" << endl;
		return factorial();
	}
	long long factResult = 1;
	for (int i = 1; i <= A; ++i) {
		factResult *= i;
		if (i > A - 1) {
			cout << A << " = " << factResult << endl;
		}
		else {
			cout << i << " * ";
		}
	}

	

}
void Arithmetic() {
	//yeahh idk
}
void Geometric() {
	//Ill return later
}
int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			Arithmetic();
		}
		else if (choice == 3) {
			Geometric();
		}

		cout << "Want to go again?  [Y/N]   :";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}