#include<stdio.h>
float avg(int *p,int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=*(p+i);
    }
    float a=(float)sum/n;
    return a;
}
int main(){
    int a[100],n,i;
    int *p=a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",p+i); 
    }
    printf("%f\n",avg(a,n)); 
    return 0;
}

