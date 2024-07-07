#include<stdio.h>
int main(){
	/*int a[]={1,2,3};
	int *p;
	p=a;
	int i;
	for(i=0;i<3;i+=1)
	printf("%d",*(p+i));*/
	
/*	int a[10],n=5,i;
	int *p=a;
	for(i=0;i<n;i+=1)
	scanf("%d",p+i);
	for(i=0;i<n;i+=1)
	printf("%d",a[i]);*/
	
	int n=5,i;
	int *p;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i+=1)
	scanf("%d",(p+i));
	for(i=0;i<n;i+=1)
	printf("%d",*(p+i));
}
