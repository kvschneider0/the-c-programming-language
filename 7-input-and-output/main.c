#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *line = NULL;
  size_t len = 0;
  ssize_t nread;

  while ((nread = getline(&line, &len, stdin)) != -1)
  {
    printf("%s", line);
  }

  free(line); // Don't forget to free the allocated memory
  return 0;
}