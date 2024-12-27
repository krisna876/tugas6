#include <stdio.h>

int main() 
{
	double savings = 1000000; // initial savings
	double interest_rate = 0.02; // 2% per month
	
	for (int i = 1; i <= 10; i++) {
		savings += savings * interest_rate;
		printf("Month %d: Rp %2.f\n", i, savings);
	}
	
	printf("Total savings after 10 month: Rp %.2f\n", savings);
	return 0;
}
