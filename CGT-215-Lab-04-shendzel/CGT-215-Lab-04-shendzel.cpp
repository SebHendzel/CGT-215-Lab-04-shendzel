// CGT-215-Lab-04-shendzel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
float A;
float B;
float C;

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
		factResult *= i; //I accidentally found out if you replace this with A it becomes exponential.
		if (i > A - 1) {
			cout << A << " = " << factResult << endl;
		}
		else {
			cout << i << " * ";
		}
	}



}
void Arithmetic() {
	cout << "Arithmetic chosen" << endl;
	cout << "Firstly, choose your starting number: ";
	cin >> A;
	cout << "Nextly, choose how many numbers will come after: ";
	cin >> B;
	cout << "lastly, choose the amount it will inrememnt by: ";
	cin >> C;

	long long ArtResult = 0;
	for (int i = 0; i <= B; ++i) {
		ArtResult += A;
		cout << A; //I thought I could use just use the + sign here but it caused the equation to go X + = Y so I couldnt do that.
		A += C;
		if (i == B) {
			cout << " = " << ArtResult << endl;
		}
		else {
			cout << " + ";
		}
	}
}
void Geometric() {
	cout << "Geometric chosen" << endl;
	cout << "Firstly, choose your parameter a, the constant: ";
	cin >> A;
	cout << "Nextly, choose parameter r: ";
	cin >> B;
	cout << "lastly, choose how many elements in the series there are: ";
	cin >> C;

	long long GeoResult = A;
	for (int i = 0; i < C; ++i) {
		cout << A;
		A = A * B;
		GeoResult += A;


		if (i == C - 1) {
			cout << " = " << GeoResult << endl;
		}
		else {
			cout << " + ";
		}
	}
	cout << GeoResult;
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