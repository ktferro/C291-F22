#include <stdio.h>
int nth_ap(int a, int d, int n) {
   return (a + (n - 1) * d);
}
//main function
int main() {
   // starting number
   int a = 2;
   // Common difference
   int d = 1;
   // N th term to be find
   int n = 5;
   printf("The %dth term of AP :%d\n", n, nth_ap(a,d,n));
   return 0;
}
