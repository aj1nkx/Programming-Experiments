/*finding and printing all prime numbers upto a certain number*/
#include<stdio.h>
#define PRIME1 2
#define PRIME2 3
#define NUMBER 10001 //we want prime numbers till NUMBER in this case
#define MAX 10002 //100 primes fit along with sr.no
#define STEP 2

int main(){
	unsigned long int prime_store[MAX],num_check;
	unsigned int i=0,ele_filled=1,count=1;
	prime_store[0]= 2;//we will remember no of elements for last element
	num_check=PRIME2;
	while(count<NUMBER){
		i=0;
		while(i<ele_filled){
			if((num_check%prime_store[i])==0)
				break;			//this is not a prime number
			++i;
		}
		if(i==ele_filled){
			/*fill the prime number*/
			prime_store[i]=num_check;
			++ele_filled;
			++count;	
		}
		num_check+=STEP;
	}
	printf("%ld\n",prime_store[NUMBER-1]);
	return 0;
}

/*time
real	0m0.511s
user	0m0.510s
sys	0m0.000s
*/
