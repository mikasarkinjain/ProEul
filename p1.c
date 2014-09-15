#include <stdio.h>
#include <stdlib.h>
int main(){
long sum = 0;
long i, j;
//following method requires fewer iterations (and fewer boolean statement evaluations)
for (i = 1; i < 200; i++) if ((i*5)%3 != 0) sum += i*5;
for (i = 1; i < 334; i++) sum += i*3;
printf("ans: %ld\n", sum);
return 0;
}
//ans: 233168 
