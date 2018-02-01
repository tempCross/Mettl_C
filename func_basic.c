#include <stdio.h>
#include <string.h>
// example input1: 3 input2{1,2,1} output 1

int majority (int input1, int input2[]);

int main (void){
	int input1 = 4;
	int input2[] = {1,3,3,0};
	majority(input1,input2);
	return 0;

}
int majority (int input1, int input2[]){

	int i, j, k, count = 0; 
	int none = -1;
	for(i = 0; i < input1; i++){
		count = 0;
		k = input2[i];
		for(j = 0; j <= input1; j++){
			if (input2[j] == k){
				count++;
			}
	        }
		if(count >= (input1/2))
			return k;
		else
			k = -1;	
	}
	return k;
}
