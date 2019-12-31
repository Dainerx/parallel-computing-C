#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VAL 10
#define MIN_VAL 2

int **malloc_mat(int lines, int colums);
float **malloc_matf(int lines, int colums);

void free_mat(int **mat, int lines);

void fill_mat(int **mat, int lines, int columns);

void display_mat(int **mat, int lines, int colums);