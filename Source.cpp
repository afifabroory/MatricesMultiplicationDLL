#include "CallDLLFromVBA.h"

int  main(void)
{
	long A[2][2] = { {10,20}, {20,30} };
	long B[2][2] = { {10, 20}, {20, 30} };
	long C[2][2] = { {0, 0}, {0, 0} };
	Matrices(A, B, C, 2);
	return 0;
}