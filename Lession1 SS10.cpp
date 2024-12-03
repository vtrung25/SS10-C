#include<stdio.h>
int main(){
	int arr[5]={3,1,7,5,4};
	int check;
	printf("Nhap 1 phan tu bat ki ");
	scanf("%d", &check);
	for(int i = 0; i<5; i++){
		if(arr[i] == check){
			printf("DUNG");
			break;
		}else{
			printf("SAI");
			break;
		}
	}
	return 0;
}