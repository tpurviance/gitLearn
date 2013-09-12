#include <stdio.h>

int bss_var;        /* Uninitialized global variable */
int data_var = 1;   /* Initialized global variable */
int main(int argc, char **argv)
{
  void *stack_var;            /* Local variable on the stack */
  stack_var = (void *)main;   /* Don't let the compiler */
                              /* optimize it out */
  printf("Hello, World! Main is executing at %p\n", stack_var);
  printf("This address (%p) is in our stack frame\n", &stack_var);
  /* bss section contains uninitialized data */
  printf("This address (%p) is in our bss section\n", &bss_var);
  /* data section contains initializated data */
  printf("This address (%p) is in our data section\n", &data_var);

  printf("\n");
  printf("Hi this is Mark A. Yoder\n");
  // Add your name here.  Be sure it still compiles.
  printf("Hi this is David Savrda\n");
  printf("And Eric Ames!\n");
  printf("Hi this is James Savage\n");
  printf("Hi this is Will Elswick again!!!\n");
  printf("Hit this is Robert Fendricks\n");
  printf("Hey, this is Mike McDonald!!!\n");
  printf("Hello, this is Alex Alvarez\n");
  printf("woot woot, this is Chris Hopwood!\n");
  printf("Hey, this is David Cooper on beaglebone\n");
  printf("hello, this is yuxuan zeng\n");
  // added by FreeTymeKiyan 2013-09-09 begin
  printf("Hi this is Yang Liu!\n");
  // added by FreeTymeKiyan 2013-09-09 end
  printf("Greetings from Ian Kowalski\n");
  printf("manuel stephan greets everyone here, now from beagle\n");
  printf("Ben Paras checking in\n"); 
  printf("Taylor Purviance also present.\n"); 
  return 0;
}
