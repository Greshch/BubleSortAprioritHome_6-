// BubleSortAprioritHome_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const int sizeArray = 10;
    int arr[sizeArray] { 1, 9, 8, 6, 7, 2, 4, 5, 3 };
	// BEGIN of Draw array
	for (int i = 0; i < sizeArray; i++)
	{
		std::cout << arr[i] << " ";
	} std::cout << std::endl;
	// END of Draw array

	// BEGIN of BUBBLE SORT
	for (int i = 0; i < sizeArray - 1; i++)
	{
		bool more = false;
		for (int j = 0; j < sizeArray - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				more = true;
			}
		}
		if (false == more)
		{
			break;
		}
	}
	// END of SORT

	// BEGIN of Draw array
	for (int i = 0; i < sizeArray; i++)
	{
		std::cout << arr[i] << " ";
	} std::cout << std::endl;
	// END of Draw array
}
