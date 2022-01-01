// C program to illustrate
// write system Call
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int sz;

  // opening a file to write
  int fd = open("foo.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

  // error handling
  if (fd < 0)
  {
    perror("r1");
    exit(1);
  }

  // writing to the file
  sz = write(fd, "hello world1234\n", strlen("hello world1234\n"));

  printf("called write(% d, \"hello world1234\\n\", %ld)."
         " It returned %d\n",
         fd, strlen("hello world1234\n"), sz);

  close(fd);
}