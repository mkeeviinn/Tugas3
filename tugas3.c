#include <stdio.h>

int main(void) {
  int t, i, j,k, l;

  printf("Tinggi Bintang:7");
  scanf("%d, %t");

  l = (t + 1) / 2;

  for(i=1; i<=t; i++){
    k += (i > l) ? 2 : 0;

    for (j=1; (i<=l ? j<=i : j <= (i - k)); j++){
      printf("*");
    }
    printf("");
    printf("\n");
  }
  return 0;
}