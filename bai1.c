#include<stdio.h>
int main(){
	int n;
	do{
		printf("nhap so luong phan tu cua mang(0<n<=100):");
		scanf("%d",&n);
		if(n<=0 || n>100){
			printf("so phan tu phai nam trong khoan tu 0 den 100");
		}
	}while(n<=0 || n>100);
	int arr[n];
	printf("nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		printf("phan tu [%d]:",i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("phan tu lon nhat trong mang la:%d\n",max);
	return 0;
}
