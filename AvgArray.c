#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a;//定义指针
	//分配动态数组
	a = (int *)malloc(8*sizeof(int));
	int i;
	for(i=0;i<8;++i){
		scanf("%d",a+i);
	} 
	double AvgArray(int *a,int n){
		double result=0.0;
		for(i=0;i<n;i++){
			result += a[i];
		}
		return result/n;
	}
	printf("%f\n",AvgArray(a,8));
}
