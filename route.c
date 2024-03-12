#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  const unsigned int ROWS = 2;
  const unsigned int COLUMNS = 4;
  unsigned int i = 0, j = 0;
  int *p = calloc(ROWS * COLUMNS, sizeof(int));
  if (!p) exit(1);

  int n = 1;
  for (i = 0; i < ROWS; ++i)
  {
    for (j = 0; j < COLUMNS; ++j)
    {
      *(p + i * COLUMNS + j) = n++;
    }
  }

  for (i = 0; i < ROWS; ++i)
  {
    for (j = 0; j < COLUMNS; ++j)
    {
      printf("%3d", *(p+i * COLUMNS + j));
    }
    printf("\n");
  }
  free(p);
  p = NULL;
  return 0;
}
