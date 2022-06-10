#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("PID of example.c = %d\n", getpid());
  char *args[] = {"Hello", "C", "Programming", NULL};
  sleep(5);
  
  execv("./hello", args); //  important part!!!

  printf("Back to example.c");
  return 0;
}