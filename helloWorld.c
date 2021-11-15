#include <stdio.h>

int multiplyByTwo(int number) {
   return number * 2;
}

int main() {
   // printf() displays the string inside quotation
   printf("Salut, Imac!");

   int a = 42;
   int b = multiplyByTwo(a);
   
   return 0;
}