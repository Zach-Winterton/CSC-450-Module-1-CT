//============================================================================
// Name        : CSC.cpp
// Author      : Zach Winterton
// Date        : 12/13/2023
// Description : CSC 450 Module 1 CT Console Application. Simple console program to demonstrate an understanding of C++ programming concepts.
// The program asks the user to provide personal information such as first name, last name, address, city, and zipcode and then stores and displays the information back to the user.
//============================================================================

#include <iostream>
#include <string>

using namespace std;

// Function to get user input for personal information
void getUserInput(string& firstName, string & lastName, string& streetAddress, string& city, string& zipCode) {
	cout << "Please Enter Your First Name: ";
	getline(cin, firstName);

	cout << "Please Enter Your Last Name: ";
	getline(cin, lastName);

	cout << "Please Enter Your Street Address: ";
	getline(cin, streetAddress);

	cout << "Please Enter Your City's Name: ";
	getline(cin, city);

	cout << "Please Enter Your ZIP code: ";
	getline(cin, zipCode);
}

// Function to display the provided information
void displayPersonalInformation(const string& firstName, const string& lastName, const string& streetAddress, const string& city, const string& zipCode) {
	cout << "\nPersonal Information:\n";
	cout << "---------------------\n";
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Street Address: " << streetAddress << endl;
	cout << "City: " << city << endl;
	cout << "ZIP Code: " << zipCode << endl;
}

int main() {
	// Variables to store personal information
	string firstName, lastName, streetAddress, city, zipCode;

	// Get user's input for personal information
	getUserInput(firstName, lastName, streetAddress, city, zipCode);

	// Display the provided data
	displayPersonalInformation(firstName, lastName, streetAddress, city, zipCode);

	return 0;
}
