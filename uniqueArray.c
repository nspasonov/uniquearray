typedey struct
{
	uint8 line;
	uint8 column;
	uint8 count;
}POSITION;

uint8 uniqueArray (uint8* ptrArray, uint8 n, uint8 m, uint8 value);
uint8 uniqueArrayPointers (uint8* ptrArray, uint8 n, uint8 m, uint8 value);

uint8 uniqueArrayNormal (uint8* ptrArray, uint8 n, uint8 m, uint8 value)
{
	int i, j, count = 0;
	POSITION foundArray[n] = {0, 0, 0};//not understand what size of array should be
	
	//find the value
	for(i = 0, i < n, i++)
	{
		for (j = 0, j < m, j++)
		{
			if(ptrArray[i][j] == value)
			{
				foundArray[foundArray->count].line = i;
				foundArray[foundArray->count].coulmn = j;
				foundArray[foundArray->count].count++;
			}
		}
	}
	if(count > 0)
	{
		return foundArray;
	}
	else
	{
		return 0;
	}
}

uint8 uniqueArrayPointers (uint8* ptrArray, uint8 n, uint8 m, uint8 value)
{
	int i, j, count = 0;
	POSITION foundArrayPointers[n] = {0, 0, 0};//not understand what size of array should be
	
	//find the value
	for(i = 0, i < n, i++)
	{
		for (j = 0, j < m, j++)
		{
			if(*(*(ptrArray+i)+j) == value)
			{
				foundArray[foundArrayPointers->count].line = i;
				foundArray[foundArrayPointers->count].coulmn = j;
				foundArray[foundArrayPointers->count].count++;
			}
		}
	}
	if(count > 0)
	{
		return foundArray;
	}
	else
	{
		return 0;
	}
}