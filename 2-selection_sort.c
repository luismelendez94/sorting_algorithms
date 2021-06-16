#include "sort.h"

/**
 * selection_sort - sorts array with the selection sort algorithm
 * @array: Pointer to an array of integer
 * @size: Size of the array
 *
 * Return: Nothing, void function
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, jdx, val, min_idx;

	if (size < 2)
		return;

	for (idx = 0; idx < (size - 1); idx++)
	{
		min_idx = idx;

		for (jdx = idx + 1; jdx < size; jdx++)
			if (array[min_idx] > array[jdx])
				min_idx = jdx;

		if (min_idx != idx)
		{
			val = array[idx];
			array[idx] = array[min_idx];
			array[min_idx] = val;
			print_array(array, size);
		}
	}
}
