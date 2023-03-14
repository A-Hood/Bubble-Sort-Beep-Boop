#include <iostream>
#include <string>
#include "Header.h"

std::string str;
std::string choice;
int arrayLength;
int* ptrArray;
int numArray[];
int* ptrNumArray;
bool arrayComplete = false;
int numAdd;
int swaps;

int main()
{
	int size;
	swaps = 0;
	bool swapped = false;

	std::cout << "How big do you want your array to be?: ";
	std::cin >> size;


	ptrArray = SetArray(size); // SET ARRAY SIZE
	
	
	std::cout << "Before Sort!:\n\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << "\n\n" << ptrArray[i]; // OUTPUT BEFORE SORT
	}


	while (swapped == false) // CHECKS IF ARRAY IS SORTED
	{
		std::cout << "\n\nSwap Num " << swaps << " Initiated!\n\n";
		ptrArray = SwapArray(ptrArray, size); // SORTS ARRAY
		swapped = check(ptrArray, size); // | IF NOT SORTED / SETS FALSE | IF SORTED / SETS TRUE |
		swaps++;
	}

	std::cout << "\n-=- Finished Swap!: -=-\n\n";
	OutputArray(ptrArray, size);
	std::cout << "\n\n-=-=-=-=-=-=-=-=-=-=-=-\n\n";

	std::cin.get();
}

// ========================================================

int* SetArray(int &size)
{
	int* ptr = new int[size]; // SET ARRAY TO NEW SIZE

	for (int i = 0; i < size; i++)
	{
		std::cout << "\n";
		std::cout << i + 1 << ". Number: "; // ASKS FOR INPUT NUMBER
		std::cin >> ptr[i]; // SAVES TO ELEMENT OF ARRAY
	}

	return ptr; // RETURN ARRAY
}

// ========================================================

int* SwapArray(int* ptrArray, int size)
{
	int tempNum; // TEMP NUMBER

	for (int i = 0; i < size - 1; i++)
	{
		if (ptrArray[i] > ptrArray[i + 1])
		{
			tempNum = ptrArray[i + 1];
			ptrArray[i + 1] = ptrArray[i];
			ptrArray[i] = tempNum;
			tempNum = 0;
		}

		else if (i == size - 1)
		{
			return ptrArray;
		}
	}

	return ptrArray;
}

// ========================================================

void OutputArray(int* ptrArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "\n\n" << ptrArray[i];
	}
}
