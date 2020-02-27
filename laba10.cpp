#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "books.h"


int main()
{

	struct books* p=NULL;
	struct books* start = NULL;
	char file[] = "input.txt";
	readFromFile(file, &p, &start);
	sortList(p);
	char answer=' ';
	while (answer != 'e')
	{
		printf("Do you want to add(a), print list(p), remove(r), write to file(w), delete a single element(d) or exit(e): \n");
		scanf("%c", &answer);

		if (answer == 'a')
		{
			addNewNode(&p);
			sortList(p);
		}
		else if (answer == 'r')
		{
			delSmall(&p);
		}
		else if (answer == 'w')
		{
			writeToFile(p);
		}
		else if (answer == 'p')
		{
			printList(p);
		}
		else if (answer == 'd')
		{
			deleteSingleElement(&p);
		}
		getchar();
	}

}