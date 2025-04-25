#include "logic.h"

void get_extreme_position(int** matrix, int n, int m, int& imin, int& jmin) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < matrix[imin][jmin]) {
				imin = i;
				jmin = j;
			}
		}
	}
}