// Intro to data structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include<list> 
#include<map> 
#include<queue> 
#include<stack> 
#include<string> 

//class LinkedList
//{
//	int memberVar; 
//
//public: 
//	LinkedList() {}; 
//
//	void insert(int element);
//
//	void merge(); //requires a particular algorithm (which is DIFFERENT if you use an ARRAY instead)
//
//
//};

void readLesMiserables(const std::string& filename)
{
	std::ifstream fin{ filename };

	if (!fin)
	{
		std::cout << "FNFE\n";
		return; 
	}


	//can we use a MAP to determine the most-frequently occurring word in Les Miserables 
	//and is that word Jean Valjean? 

	std::map<std::string, int> wordsMappedToTheirFrequencies; //NOT 1.23 MHz

	std::string currentWord; 
	while (getline(fin, currentWord, ' '))
	{
		//std::cout << currentWord << "\n";
		//wordsMappedToTheirFrequencies[currentWord] = 0;
		 wordsMappedToTheirFrequencies[currentWord]++;

	}

	fin.close(); 


	//print the contents of the map (which will be words and the number of times they 
	//appear in Les Miserables

	for (const auto& currentPair : wordsMappedToTheirFrequencies)
	{
		std::cout << currentPair.first << " appears this many times: " << currentPair.second << "\n";
	}
}

void demoDoublyLinkedList()
{
	std::list<std::string> listOfPeople =
	{
		"Alice",
		"Bob",
		"Carol"
	};

	std::cout << std::boolalpha; 
	std::cout << "Is the list empty at the moment?" << listOfPeople.empty() << "\n";

	//std::list<std::string>::iterator aliceLoc = std::find(listOfPeople.begin(), listOfPeople.end(), "Alice");
	auto aliceLoc = std::find(listOfPeople.begin(), listOfPeople.end(), "Alice");

	if (aliceLoc != listOfPeople.end()) //mandatory safety check 
	{
		listOfPeople.erase(aliceLoc);
	}

	/*print the list: */
	std::cout << "After erasing \"Alice\":\n";
	for (const std::string& person : listOfPeople)
	{
		std::cout << person << "\n";
	}

	//listOfPeople.merge()

}

void demoMap()
{
	std::map<std::string, std::string> englishToFrench =
	{
		{"I",			"Je"},
		{"to have",		"avoir"},
		{"hunger",		"faim"}, //faim
		{"woman",		"femme"} //fohm
	};

	std::cout << "Enter some word in English, we'll convert it to French:\n";

	std::string englishWordToTranslate; 
	std::getline(std::cin, englishWordToTranslate);

	auto locOfTranslatedWord = englishToFrench.find(englishWordToTranslate); 


	if (locOfTranslatedWord != englishToFrench.end()) //end is basically the memory loc
		//one step BEYOND the end of the container (this applies to vector, list, stack, and others)
	{
		std::cout << "The equivalent mot dans Francais est: "
			<< englishToFrench[englishWordToTranslate] << "\n";
	}

	else
	{
		std::cout << "The word " << englishWordToTranslate << " was NOT found in our dictionary (map)\n";

	}

}


void printQueue(std::queue<std::string> theQueue)
{
	while (!theQueue.empty())
	{
		std::cout << theQueue.front() << "\n";
		//theQueue.peek(); //peek not supported in C++ implementation of queue data structure 
		theQueue.pop(); //removes the front element 
		//pop is also called dequeue (dee-cue) 
		//theQueue.push(); //this is sometimes called "enqueue" 
	}
}

void demoQueue()
{
	std::queue<std::string> customersInLane1;
	customersInLane1.push("Bob");
	customersInLane1.push("Alice");
	customersInLane1.push("Carol");
	customersInLane1.push("Darth");

	customersInLane1.pop(); //this SHOULD remove bob, leaving the other 3

	//let's bear witness to a difference betwixt queue and deque (double-ended queue)
	//std::deque<std::string> someDoubleEndedGroceryLane; 
	//someDoubleEndedGroceryLane.

	//customersInLane1.remov
	//for(const std::string& currentName : customersInLane1) //won't work!
	printQueue(customersInLane1); 



}

int main()
{
	std::string lesMiserablesFilePath = "C:/Users/snorm/Downloads/LesMiserables.txt";
	readLesMiserables(lesMiserablesFilePath); 
	
	//demoDoublyLinkedList(); 


	//std::vector<int> nums; 
	
	//demoMap(); 
	//demoQueue(); 



}

