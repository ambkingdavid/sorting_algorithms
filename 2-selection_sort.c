#include "sort.h"

/**
 * selection_sort - a function that sort a list with the
 *                  selection algorith
 *
 * @array: the array to be sorted
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int lowest, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		lowest = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[lowest] > array[j])
			{
				lowest = j;
			}
		}
		temp = array[lowest];
		array[lowest] = array[i];
		array[i] = temp;
		

		print_array(array, size);
	}
}
