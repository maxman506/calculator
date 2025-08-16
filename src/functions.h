#define	MAX	50

int addNumbers(int num) {
	int sum = 0;
	printf("\nEnter the numbers: \n");

	for (int i = 0; i < MAX; i++) {
		printf("id[%d]: ", i);
		scanf("%d", &num);
		sum += num;
		if (num == 0) break;
	}

	return sum;
}
