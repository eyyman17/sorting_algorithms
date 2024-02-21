#include "sort.h"

/**
 * selection_sort - function that sorts an array
 * @size:  size of array
 * @array: list with numbers
 */


void selection_sort(int *array, size_t size)
{
	size_t iterator, index_val;
	int temp_val, swap_val, indicator = 0;

	if (array == NULL)
		return;
	for (iterator = 0; iterator < size; iterator++)
	{
		temp_val = iterator;
		indicator = 0;
		for (index_val = iterator + 1; index_val < size; index_val++)
		{
			if (array[temp_val] > array[index_val])
			{
				temp_val = index_val;
				indicator += 1;
			}
		}
		swap_val = array[iterator];
		array[iterator] = array[temp_val];
		array[temp_val] = swap_val;
		if (indicator != 0)
			print_array(array, size);
	}
}
