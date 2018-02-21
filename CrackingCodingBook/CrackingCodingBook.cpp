// CrackingCodingBook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>

using std::string;
using std::list;
using std::cout;
using std::endl;

int main()
{

	int selection;
	list<string> strlist;

	strlist.push_back(string("Problem 1"));
	strlist.push_back(string("Problem 2"));
	strlist.push_back(string("Problem 3"));

	for (list<string>::iterator it = strlist.begin(); it != strlist.end(); ++it)
	{
		std::cout << (*it) << std::endl;
	}

	std::cin >> selection;
    return 0;
}

