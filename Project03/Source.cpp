#include <iostream>
using namespace std;
int main()
{
	int i;
	int p1[5], p2[5], p3[5], p4[5];
	int totalpoint[5];
	int lendi, lendpoint;

	for (i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &p1[i], &p2[i], &p3[i], &p4[i]);
	}

	for (i = 0; i < 5; i++)
	{
		totalpoint[i] = p1[i] + p2[i] + p3[i] + p4[i];
	}

	lendpoint = totalpoint[0];
	for (i = 0; i < 5; i++)
	{
		if (lendpoint > totalpoint[i + 1] || lendpoint == totalpoint[i + 1])
		{
			lendi = lendi;
		}
		else if (lendpoint < totalpoint[i + 1])
		{
			lendpoint = totalpoint[i + 1];
			lendi = i + 1;
		}
	}

	printf("%d %d", lendi + 1, lendpoint);

}
