#include <iostream>

using namespace std;

void bubbleSort(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)       
	{
		for (int j = i + 1; j < n ; j++)   
		{
			if (A[j] < A[i])               
			{
				int c = A[i];              
				A[i] = A[j];
				A[j] = c;
			}
		}
	}
}

/*
int	main()
{
	int nums[] = {9, 8, 7, 6, 5, 4, 23, 12, 3, 2, 1};
	int n = sizeof(nums) / sizeof(int);
	bubbleSort(nums, n);
	
	for (int i =0 ; i<n; i++)
		cout << nums[i] << endl;
	
	return (0);
}
*/

