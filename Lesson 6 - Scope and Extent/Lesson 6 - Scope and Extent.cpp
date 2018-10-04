// Lesson 6 - Scope and Extent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void some_function() {
	int a = 400;
	char letter = 'b';
}

int global_variable = 50;

int main() {

	cout << "global variable contains the value " << global_variable << "\n";

	int a = 100;
	int* b;

	{

		int a = 200;

		cout << "the value in a is " << a << "\n";

		int* local_ptr = new int(300);

		b = local_ptr;

	}

	cout << "the value in a is " << a << "\n";

	cout << "the value pointed to by 'b' is " << *b << "\n";
	delete b;
	b = NULL;

	std::cout << "output some data" << "\n";

	some_function();

	return 0;
}