#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
 int n;
 printf("Enter a positive integer. n = ");
 for (scanf("%d",&n); n <= 0; scanf("%d",&n)) {
  while (fgetc(stdin) != '\n');
  printf("Enter a valid integer. n = ");
 }

 double sum = 0;

 for (int i = 1; i <= n; i++) {
  sum += sqrt(i*(n-i))/n;
 }

 // Note that we kept one n in the denominator of the sum to avoid
 // an integer overflow.
 sum *= 8/(double)n;

 printf("π ≈ %f\n",sum);

 return 0;
}

