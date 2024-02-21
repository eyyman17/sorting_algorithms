#include "sort.h"
/**
 * insertion_sort_list - The algorithm for the insertion sort.
 * @list_ptr : Pointer to Pointer to head of doubly linked list.
 * Return: Void.
 */

void insertion_sort_list(listint_t **list_ptr)
{
	listint_t *previous, *temp_next, *temp_previous, *current, *previous_previous;

	if (list_ptr == NULL || *list_ptr == NULL)
		return;
	current = *list_ptr;
	while (current != NULL)
	{
		previous = (*current).prev;
		while (previous != NULL)
		{
			if ((*current).n < (*previous).n)
			{
				temp_next = (*current).next;
				temp_previous = (*current).prev;
				(*current).next = previous;
				previous_previous = (*previous).prev;
				if (previous_previous == NULL)
					*list_ptr = current;
				else
					(*previous_previous).next = current;
				(*current).prev = previous_previous;
				(*previous).prev = current;
				if (temp_next != NULL)
					(*temp_next).prev = temp_previous;
				(*temp_previous).next = temp_next;
				print_list(*list_ptr);
			}
			previous = (*previous).prev;
		}
		current = (*current).next;
	}
}

