#include<stdio.h>
#include<stdlib.h> 
int FindElem(int *a,int n,int key){
//	int i,n=-1;
//	for(i=0;i<n;i++){
//		if(a[i] == key){
//			n = i;
//			break;
//		}
//	}
//	return n;

//	int i;
//	for(i=0;i<n;){
//		if(a[i]==key) break;
//		else i++;
//	}
//	if(i<n) return i;
//	else return -1;
	
//	int i;
//	for(i=0;i<n;i++){
//		if(a[i]==key) break;
//	}
//	if(i<n) return i;
//	else return -1;

//	int i;
//	for(i=0;i<n;i++){
//		if(a[i]==key) break;
//	}
//	return i<n?i:-1;
	
	int i;
	for(i=0;i<n&&a[i]!=key;++i);
	return i==n?-1:i;
}
int main(void){
	int Data[8]={2,5,4,7,8,4,9,10};
	int key,R;
	printf("请输入一个数字key:");
	scanf("%d",&key);
	int FindElem(int *a,int n,int key);
	R = FindElem(Data,8,key);
	if(R>-1) printf("Yes!\n");
	else printf("No!\n");
	printf("%d\n",R);
	//free*Data;
	return 0;	
}
