#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	long long last_number = 0;
	long long current_number = 1;
	long long cntto = 0;
	long long old_current_number = 0;
	if(argc != 2)
	{
		printf("USAGE: %s <number to count to>", argv[0]);
		return 1;
	}
	cntto = 803912897329857493759834758908012830;/*atoi(argv[1]);*/
	int iteration = 0;
	for(iteration = 0; current_number <= cntto; ++iteration)
	{
		printf("%lli: %lli + %lli = %lli\n", iteration, last_number, current_number, last_number + current_number);
		old_current_number = current_number;
		current_number = last_number + current_number;
		last_number = old_current_number;
	}
	return 0;
}		
