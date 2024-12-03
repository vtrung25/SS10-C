#include<stdio.h>
int main(){
	int arr[5]={4,1,6,8,7};
	for(int i = 0; i<5;i++){
		for(int j = 0; j<5-i-1; j++){
			int temp;
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i = 0; i<5; i++){
	
	printf("%d\t", arr[i]);
}
}