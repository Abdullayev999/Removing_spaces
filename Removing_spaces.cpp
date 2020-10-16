#include <iostream>

using namespace std;

size_t slength(char arr[])
{
	size_t	counter = 0;

	while (arr[counter] != '\0')
	{
		counter++;
	}
	return counter;
}


char* removeSpace(char arr[])
{
	size_t size = slength(arr);
	int spaceStart = 0, spaceEnd = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] != ' ') {
			spaceStart = i;
			break;
		}
	}

	for (int i = size - 1; i > 0; i--)
	{
		if (arr[i] != ' ') {
			spaceEnd = i;
			break;
		}
	}

	int newSize = 0;
	for (int i = spaceStart; i <= spaceEnd; i++)
		newSize++;

	char* newArr = new char[newSize + 1];
	for (int i = spaceStart, b = 0; b < newSize; b++, i++)
		newArr[b] = arr[i];

	newArr[newSize] = '\0';
	return newArr;
}

int main()
{
	char name[] = "      Abdullayev Farid               ";

	char* result = removeSpace(name);
	cout << "|" << result << "|";

	delete[] result;
}