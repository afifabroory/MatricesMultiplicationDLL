#include "pch.h"

void WINAPI Matrices(long* A, long* B, long* C, long nSize)
{
	nSize = nSize + 1;
	for (int j = 0; j < nSize; ++j)
	{
		for (int k = 0; k < nSize; ++k)
		{
			for (int i = 0; i < nSize; ++i)
			{
				C[i + j * nSize] = C[i + j * nSize] + A[i + k * nSize] * B[k + j * nSize];
			}
		}
	}
}
