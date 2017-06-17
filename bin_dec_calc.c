#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_to_binary(int);
void print_to_decimal(int);

int main(int argc, char **argv){
	if (argc < 2) return 0;
	int num = atoi(argv[1]);
	print_to_binary(num);
	print_to_decimal(num);
	return 0;
}

void print_to_binary(int num){
	int j, k;
	j = k = 0;

	for (int i = num; i > 0; i /= 2)
		++j;
	
	int v[j];	
	for (int i = num; i > 0; i /= 2){
		v[k] = i % 2;
		++k;
	}
	printf("Binary: ");	
	for (int i = j - 1; i >= 0; --i){
		printf("%d", v[i]);
	}
	printf("\n");
}

void print_to_decimal(int num){
	int i, result;
	i = result = 0;
	while (num){
		result += num % 10 * pow(2, i);
		num /= 10;
		i++;
	}
	printf("Decimal: %d\n", result);
}
