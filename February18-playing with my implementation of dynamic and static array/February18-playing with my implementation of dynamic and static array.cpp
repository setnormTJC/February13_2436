// February18-playing with my implementation of dynamic and static array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"C:/Users/Work/Downloads/MyArray.h"
#include"C:/Users/Work/Downloads/VectorPrime.h"
#include"C:/Users/Work/Downloads/VectorPrime.cpp" //included because cpp file is not in project directory? 

#include <iostream>



int main()
{
		
	//my array number 1

	MyArray<std::string, 5> ma1 =
	{
		"Alice",
		"Carol",
		"Zebra", 
		"Bob", 
		"Darth"
	};
	try
	{
		ma1.insertElementAt(123, "asdfasdf");
	}

	catch (const std::exception& someException)
	{
		std::cout << someException.what() << "\n";
	}

	ma1.print(); 

	
}

