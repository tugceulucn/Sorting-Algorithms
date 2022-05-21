#include <iostream>

using namespace std;

void insertionSort(int A[], int n)
{
    int i, pivot, j;
    for (i = 1; i < n; i++)
    {
        pivot = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > pivot)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = pivot;
    }
}

/*
int	main()
{
	int A[] = {2,1,5,4,7,8,6,9,3};   
	int n = sizeof(A) / sizeof(int);
	insertionSort(A, n);
	
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	return (0);
}
*/
