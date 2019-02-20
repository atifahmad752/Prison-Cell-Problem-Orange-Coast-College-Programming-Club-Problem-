/*
Ahmad, Atif
OCC Programming Club
March 13, 2016

Project: Prison Cell Problem
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int numberOfCells;
	cout << "Input the number of cells: ";
	cin >> numberOfCells;
	vector <int> prisonCells(numberOfCells + 1, 0);
	int k = 1;

	while (k <= numberOfCells)
	{
		for (int i = 0; i <= prisonCells.size() - 1; i++)
		{
			if ((prisonCells.at(i) == 0) && (i != 0) && (i % k == 0))
				prisonCells.at(i) = 1;
			else if ((prisonCells.at(i) == 1) && (i != 0) && (i % k == 0))
				prisonCells.at(i) = 0;

		}

		k++;
	}

	int count = 0;

	for (int i = 0; i <= prisonCells.size() - 1; i++)
	{
		if (prisonCells.at(i) == 1)
			count++;
	}

	cout << count << endl;

	system("pause");
	return 0;
}