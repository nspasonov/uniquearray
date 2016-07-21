#include "uniqueArray.h"

uint8 createArray (uint8 n, uint8 m, uint8 value;)
{
	uint8 Array[n][m];
	int i,j,k,q = 0;
	POSITION referenceArray[n*m] = {0, 0, 0}
	
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			k++;
			Array[i][j] = k;
			if (k == value)
			{
				referenceArray[q].line = i;
				referenceArray[q].column = j;
				referenceArray[q].count = q;
				q++;
				printf("The reference value was found at line^ %d, column: %d\n",referenceArray[q].line, referenceArray[q].column);
			}
		}
		k = i + 2;
	}
	return Array;
}



void main()
{
	uint8 line, column, value;
	uint8 *ptrArray;
	line = 10,
	column = 10;
	value = 5;
	ptrArray = createArray(line, column, value);
	resultArrayNormal = uniqueArrayNormal(ptrArray, line, column, value);
	
	uniqueArrayPointers(ptrArray, line, column, value);
	
}