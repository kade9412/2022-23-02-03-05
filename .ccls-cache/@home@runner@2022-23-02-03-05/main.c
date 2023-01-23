#include <stdio.h>
#include <string.h>
int main() {
//TODO write a program that reverses a character array
char s1[] = "Hello, World";
size_t l1 = strlen(s1);
  while (l1 != -1) { // while the length of the remaining prints the last character in the array
    printf("%c",s1[l1]);
    l1--;
  }
}