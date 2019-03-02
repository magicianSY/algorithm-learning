#include <stdio.h>

void printN1 (int n){
	for (int i=0; i<n; i++)
		printf("%d\n",i);
	return;
}

void printN2 (int n) {
	if (n) {
		printN2(n-1);
		printf("%d",n);
	}
	return;
}
int main(void){
	int n;
	while (scanf("%d",&n)!=0) {
		//printN1(n);
		printN2(n);
	}
	
	return 0;
}
