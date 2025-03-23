#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int popularity;
	int size;
	int homeValue;
	
	printf("Enter popularity:  ");
	scanf("%d",&popularity);
	
	printf("Enter size:  ");
	scanf("%d",&size);
	
	homeValue=(popularity*popularity*popularity+size*size)*10000;
	
	printf("Home value is: %d",homeValue);
	
	return 0;
}
