#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(int argc, char **argv) {
  static char input[2048];

  puts("Lispbaby Version 0.01");
  puts("Press Ctrl+c to exit\n");

  while(1) {
    char *input = readline("[LispBaby]$ ");
    add_history(input);

    printf("Output: %s\n", input);
    free(input);
  }

  return 0;
}
