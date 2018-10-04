// Lesson 6 - Scope and Extent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

namespace some_namespace {
	char some_function() {
		int a = 400;
		return 'b';
	}
}

namespace some_other_namespace {
	int some_function() {
		char c = 'c';
		return 600;
	}
}

int global_variable = 50;

int main() {

	{
		int x = 100;
	}
	int x = 100;

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

	cout << "Output from some_namespace::some_function() " << some_namespace::some_function() << "\n";
	cout << "Output from some_other_namespace::some_function() " << some_other_namespace::some_function() << "\n";
	
	cin >> a;

	return 0;
}