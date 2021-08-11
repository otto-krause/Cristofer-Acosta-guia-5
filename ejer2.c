#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int num=0, prom=0, suma=0, mayor=0, total=0, prom1=0, I=0;
 for (I=0;I<15;I++) {
 printf(" El numero %d es: ",I+1);
 scanf("%d", &num);
 if (mayor<num)
 mayor=num;
 total=15*num;
 suma=suma+total;
 }
 prom=suma/15;
 prom1=prom/15;
 printf("El numero promedio es: \n%d\n", prom1);
 printf("El numero mas grande es: \n%d\n", mayor);
 }
