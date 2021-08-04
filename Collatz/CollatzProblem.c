#include <stdio.h>
int main(){
	printf("Hello\n");
	int num;
	printf("\nEnter a number : ");
	scanf("%d",&num);
	printf("%d ",num);
	while (num!=1)
	{
		if(num%2!=0){
			num=num*3+1;
			printf("%d ",num);
		}
		else if(num%2==0){
			num =num/2;
			printf("%d ",num);
		}
	}
	printf("\n");
	return 0;
}