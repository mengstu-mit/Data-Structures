#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1=0,num2=1,sum=0,num,inc=0;
	printf("enter a number\n");
	scanf("%d",&num);
		printf("%d\n",num1);
			printf("%d\n",num2);
	for(;inc<num;inc++){
		sum=num1+num2;
		num1=num2;
		num2=sum;
			printf("%d\n",sum);
	}
	return 0;
}
