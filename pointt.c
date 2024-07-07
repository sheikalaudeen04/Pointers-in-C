#include<stdio.h>
int main(){
	int a[100],n,sum=0;
	printf("Enter n");
	scanf("%d",&n);
	int i,*ptr;
	ptr=a;
	for(i=0;i<n;i+=1)
		scanf("%d",ptr+i);
	for(i=0;i<n;i+=1)
		sum+=*(ptr+i);
	printf("%d",sum);
}

