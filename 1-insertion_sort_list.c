#include "sort.h"

/**
 *insertion_sort_list - insertion sort using a doubly linked list
 *@list: is the doubly linked list
 *Return: return nothing (void)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *currN, *prevN;

	if (!list || !(*list) || (*list)->next == NULL)
	{
		return;
	}

	/* this currNode will start at sec pos */
	currN = (*list)->next;

	while (currN != NULL)
	{
		while (currN->prev != NULL && currN->prev->n > currN->n)
		{
			prevN = currN->prev;
			currN->prev = prevN->prev;
			if (currN->next != NULL)
			{
				currN->next->prev = prevN;
			}
			prevN->next = currN->next;
			currN->next = prevN;
			if (prevN->prev != NULL)
			{
				prevN->prev->next = currN;
			}
			prevN->prev = currN;
			if (!currN->prev)
			{
				*list = currN;
			}
			print_list(*list);
		}
		currN = currN->next;
	}
}
