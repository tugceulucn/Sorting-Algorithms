#include <iostream>

using namespace std;

void	selectionSort(int A[], int n)
{
	int	pivot, j, min, temp;
	for (pivot = 0; pivot < n - 1; pivot++)
	{
		min = pivot;
		for (j = pivot + 1; j < n ; j++)
		{
			if (A[j] < A[min])
				min = j;
		}
		if (min != pivot)
		{
			temp = A[min];
			A[min] = A[pivot];
			A[pivot] = temp;
		}	
	}
}

/*
int	main()
{
	int A[] = {2, 1, 6, 9, 3, 8, 4, 8, 1, 34, 90, 78};
	int	n = sizeof(A) / sizeof(int);
	selectionSort(A, n);
	
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);	
	return (0);
}
*/
