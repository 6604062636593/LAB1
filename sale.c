#include<stdio.h>

int main(){
	float p1,p2,p3,total;
	
	printf("Enter Price: ");
	scanf("%f",&p1);
	total = p1*0.95;
	printf("Total price: %.2f\n",total);
	
	printf("\nEnter Price: ");
	scanf("%f",&p2);
	total = (p1+p2)*0.85;
	printf("Total price: %.2f\n",total);
	
	printf("\nEnter Price: ");
	scanf("%f",&p3);
	total = (p1+p2+p3)*0.70;
	printf("Total price: %.2f\n",total);		
}
