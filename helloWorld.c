#include <stdio.h>
int multiplyByFactor(int number, int factor) {
   return number * factor;
}

int multiplyByTwo(int number) {
   return number * 2;
}

int main() {
   // printf() displays the string inside quotation
   printf("Salut, Imac!");

   int a = 42;
   int b = multiplyByFactor(a, 2);
   
   return 0;
}