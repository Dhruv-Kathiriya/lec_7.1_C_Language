#include<stdio.h>

main(){
	
	char i,j,k='A';
	
	for (i='A'; i<='E'; i++){
		for(j=i; j>='A'; j--){
			printf("%c ",k++);
		}
		printf("\n");
	}
}
