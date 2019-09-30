#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	string title;
	cout << "Enter book title: ";
	getline(cin, title);
	
	string author;
	cout << "Enter name of author: ";
	getline(cin, author);

	int publish;
	cout << "Year book was published: ";
	cin >> publish;

	int pages;
	cout << "Total pages in the book: ";
	cin >> pages;

	if (publish > 2019)
	{
		cout << title << " is less than 10 years old.\n";
	}

	else
	{ 
		cout << title << " is at least 10 years old.\n";
	}

	if (pages < 100)	{
		cout << title << " is short\n";
	}

	else if (pages >= 100 && pages <= 300) {
		cout << title << " is an average book.\n";
	}
	
	else {
		cout << title << " is a long book" << endl;
	}


	return 0;
}

