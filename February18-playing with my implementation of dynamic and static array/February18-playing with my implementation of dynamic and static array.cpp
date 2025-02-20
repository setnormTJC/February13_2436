// February18-playing with my implementation of dynamic and static array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"C:/Users/Work/Downloads/MyArray.h"
#include"C:/Users/Work/Downloads/VectorPrime.h"
#include"C:/Users/Work/Downloads/VectorPrime.cpp" //included because cpp file is not in project directory? 

#include <iostream>
#include <vector>

void simpleDemoOfCustomStaticArray()
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
void demoLosingOneDalmation()
{
	MyArray<std::string, 14> fourteenDalmations =
	{
		"Puppy 1",
		"Puppy 2",
		"Puppy 3",
		"Puppy 4",
		"Puppy 5",
		"Puppy 6",
		"Puppy 7",
		"Puppy 8",
		"Puppy 9",
		"Puppy 10",
		"Puppy 11",
		"Puppy 12",
		"Puppy 13",
		"Puppy 15"
	};

	std::cout << "The initial state of the 14 dalmations: \n";
	fourteenDalmations.print();

	std::cout << "After inserting puppy 14 between 13 and 15:\n";
	fourteenDalmations.insertElementAt(13, "Puppy 14");
	fourteenDalmations.print();
}

int main()
{
	MySpace::DataStructs::CharVector cv1; 

	std::cout << "Initial contents of our dynamic array:\n";
	cv1.printMemberVars(); 

	cout << "\n\n\n";
	for (int i = 0; i < 11; ++i)
	{
		cv1.push((char)i + 102); //typecasting 
	}
	std::cout << "After pushing 10 more letters into that vector: \n";
	cv1.printMemberVars(); 


}

