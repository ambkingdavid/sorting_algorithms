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
	int temp,  index, *min;
	int i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/*min = array + i;*/
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
			else
				index = index;
			/*min = (array[j] < *min) ? (array + j) : min;*/
		}

		/*if ((array + i) != min)
		{
			temp = *(array + i);
			*(array + i) = *min;
			*min = temp;
			print_array(array, size);
		}
		*/
		if (i != index)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
