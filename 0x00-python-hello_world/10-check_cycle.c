#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */

int check_cycle(listint_t *list)

{

	listint_t *rice, *beans;
	if (list == NULL || list->next == NULL)

		return (0);

	rice = list->next;
	beans = list->next->next;

	while (rice && beans && beans->next)

	{

		if (rice == beans)

			return (1);

		rice = rice->next;
		beans = beans->next->next;

	}



	return (0);

}
