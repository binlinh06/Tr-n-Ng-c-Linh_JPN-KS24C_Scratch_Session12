#include<stdio.h>
int tinhSum();
int main(){
	int sum;
    sum= tinhSum();
	printf("Tong 2 so la:%d\n",sum);
	return 0;
}
int tinhSum(){
	int num1,num2,sum;
	printf("Vui long nhap so thu 1:");
	scanf("%d",&num1);
	printf("Vui long nhap so thu 2:");
	scanf("%d",&num2);
	sum=num1+num2;
	return sum;
}
