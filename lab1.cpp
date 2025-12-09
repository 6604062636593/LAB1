#include<stdio.h>

int main(){
	float midterm,final,Quiz1,Quiz2,labb,sitt;
	float mid,fi,q1,q2,lab,sit;
	float sum;

	scanf("%f %f %f %f %f %f",&mid,&fi,&q1,&q2,&lab,&sit);
	midterm = (mid*30)/100;
	final = (fi*35)/120;
	Quiz1 = (q1*12)/60;
	Quiz2 = (q2*13)/60;
	labb = (lab*5)/16;
	sitt = (sit*5)/16;

	sum = midterm+final+Quiz1+Quiz2+labb+sitt;
	
	printf("%10s = %5.0f => %8.2f\n", "midterm", mid, midterm);
    printf("%10s = %5.0f => %8.2f\n", "final", fi, final);
    printf("%10s = %5.0f => %8.2f\n", "Quiz1", q1, Quiz1);

    printf("%10s = %5.0f => %8.2f\n", "Quiz2", q2, Quiz2);
    printf("%10s = %5.0f => %8.2f\n", "lab", lab, labb);
    printf("%10s = %5.0f => %8.2f\n", "sit", sit, sitt);
    
    printf("*****%.2f*****",sum);
}
	
