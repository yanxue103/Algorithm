#include<stdio.h>
#include<stdlib.h> 
int DelKeyElem(int a[],int n,int key){
	int i,j;
	for(i=0;i<n&&a[i]!=key;++i);
	if(i<n){
		for(j=i;j<n-1;++j){
			a[j]=a[j+1];
		}
			n--;
	}
		return n;
}
int main(void){
	int Data[8]={2,5,7,8,4,9,10};
	int key,n,i;
	printf("请输入一个数字key:");
	scanf("%d",&key);
	int DelKeyElem(int *a,int n,int key);
	n = DelKeyElem(Data,7,key);
	for(i=0;i<n;i++){
		printf("%3d",Data[i]);
	}
	//free*Data;
	return 0;	
}
