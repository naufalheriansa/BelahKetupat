#include <stdio.h>

int main(){
	int N, i, j;
	
	scanf("%d",&N);
	
	if(N<=0||(N%2==0)){
		printf("Masukan tidak valid");
	}else{
		for(i=1;i<=N;i++){
			if(i%2==1){
				for(j=N;j>=i+1;j-=2){
					printf(" ");
				}for(j=1;j<=i;j++){
					printf("*");
				}
			}else{
				printf("\n");
			}
		}
		
		for(i=N-1;i>=1;i--){
			if(i%2==1){
				for(j=i;j<N;j+=2){
					printf(" ");
				}for(j=1;j<=i;j++){
					printf("*");
				}
			}else{
				printf("\n");
			}
		}
	}
	printf("\n");
	
	return 0;
}
