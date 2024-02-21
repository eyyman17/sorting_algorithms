#include "sort.h"

/**
 * selection_sort_custom - function that sorts an array
 *@size_val:  size of array
 * @array_vals: list with numbers
 */


void selection_sort_custom(int *array_vals, size_t size_val)
{
	size_t iterator, index_val;
	int temp_val, swap_val, indicator = 0;

	if (array_vals == NULL)
		return;
	for (iterator = 0; iterator < size_val; iterator++)
	{
		temp_val = iterator;
		indicator = 0;
		for (index_val = iterator + 1; index_val < size_val; index_val++)
		{
			if (array_vals[temp_val] > array_vals[index_val])
			{
				temp_val = index_val;
				indicator += 1;
			}
		}
		swap_val = array_vals[iterator];
		array_vals[iterator] = array_vals[temp_val];
		array_vals[temp_val] = swap_val;
		if (indicator != 0)
			print_array(array_vals, size_val);
	}
}
