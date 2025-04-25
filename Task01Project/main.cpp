#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int* array;

	int n;
	int m;
	cout << "Input sizes of matrix (NxM): ";
	cin >> n >> m;

	array = new int[n * m]{};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			array[i * m + j] = rand() % 100;
		}
	}

	cout << "Matrx:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << array[i * m + j] << " ";
		}
		cout << endl;
	}

	int imax = 0, jmax = 0;

	get_extrem_position(array, n, m, &imax, &jmax);

	cout << "Max value is " << array[imax * m + jmax] << endl;
	cout << "i = " << imax + 1 << ", j = " << jmax + 1 << endl;
	//...

	delete[] array;

	return 0;
}