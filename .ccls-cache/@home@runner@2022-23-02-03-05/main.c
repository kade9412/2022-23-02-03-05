#include <stdio.h>
#include<string.h>


int main() {

  char s1[] = "hello,World!";
  int len = strlen(s1) -1;

  while (len >= 0){
    printf("%c\n", s1[len]);
    len--;
  }
  return 0;
}