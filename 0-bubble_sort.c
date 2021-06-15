#include "sort.h"

/**
 *bubble_sort - function that sort an array as bubble style
 *@array: pointer to an array of integers
 *@size: size of the array
 *Return: will return nothing (void)
 */

void bubble_sort(int *array, size_t size)
{
	size_t iterPos, idx, temp;

	if (size < 2)
		return;

	for (iterPos = 0; iterPos < size - 1; iterPos++)
	{
		for (idx = 0; idx < size - iterPos - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				temp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
