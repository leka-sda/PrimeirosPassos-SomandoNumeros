#include <stdio.h>

int main() {
  
  int num = 0;
  
      for (int i = 1; i <= 100; i++) {
          printf("%d\n", i);
          num +=i;
  }
  
    printf ("A soma dos números é: %d\n", num); 
  
}