#include <studio.h>
#include <time.h>

long testTime(void) {
	return 0;
}
int main(int argc, char* argv[]) {

	int sum = 0;
	clock_t start, end;

	start = clock();
	//�Լ��ۼ�

	int factorial_iter(int n) {
		int i, fact = 1;
		for (i = n; i > 0; i--)
			fact = fact * i;
		return fact;
	}

	int Factorial_Recursion(int iInput) 
	{
		if (iInput == 1)
		{
			return 1;
		}

		return iInput * Factorial_Recursion(iInput - 1); 
	}


	end = clock();
	printf("�ɸ��ð� : %f |n"), (float)(end - start) / CLOCKS_PER_SEC);

	return 0;
}