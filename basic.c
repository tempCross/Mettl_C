#include <stdio.h>
#include <string.h>

int main (void){

	int arr[] = {1,3,3,0};
	int size = 0;
	int i, j, k = 0;
	for (i=0; i < sizeof(arr)/sizeof(int); i++)
		size++;
	int count = 0;
	for (i = 0; i < size; i++){
		count = 0;
		k = arr[i];
		//printf("This is k %d\n",k);
		for (j = 0; j <= size; j++){
			if (arr[j] == k){
				count++;
				//printf("count is %d\n", count);
			}
		}
		if (count >= (size/2))
			printf("count = %d %d it's lit\n", count,k);
		else
			printf("-1\n");	
	}
	return 0;
}
