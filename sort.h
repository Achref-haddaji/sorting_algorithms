#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void qsorting(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void quick_sort_hoare(int *array, size_t size);
void hoare_qsorting(int *array, int low, int high, size_t size);
int hoare_partition(int *array, int low, int high, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, int end, int i, size_t size);
void swap(int *a, int *b);
#endif
