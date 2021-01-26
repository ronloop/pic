/* exe0403. A triangular number can also be generated by the formula
 * triangularNumber = n (n + 1) / 2
 * for any integer value of n. For example, the 10th triangular number
 * 55, can be generated by substituting 10 as the value for n in the
 * preceding formula. Write a program that generates a table of triangular
 * numbers using the preceding formula. Have the program generate every fifth
 * triangular number between 5 and 50 (that is, 5, 10, 15, 50).
 * by ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	printf("TABLE OF TRIANGULAR NUMBERS\n");
	printf(" n     triangular\n");
	printf("---    ----------\n");

	for (n = 5; n <= 50; n += 5) {
		triangularNumber = n * (n + 1) / 2;
		printf("%3i%9i\n", n, triangularNumber);
	}

	return 0;
}