#include<stdio.h>
int main(){
	int a[3][3]={
		{1,2,3},
		{4,10,6},
		{7,8,9}	
	};
	int check=a[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(check<a[i][j]){
				check=a[i][j];
			}
		}
	}
	printf("%d",check);
	return 0;
}
