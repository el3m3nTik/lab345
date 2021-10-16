#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <ctype.h>

using std::cout;
using std::endl;

int main() {
	char sogl[] = { 'q', 'w', 'r', 't', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm' };
	char str[] = { "testovaya strochka chtobi proverit raboty" };
	int k, i, j;
	k = 0;
	for (i = 0; i < strlen(str); i++)
		for (j = 0; j < strlen(sogl); j++)
		{
			if (str[i] == sogl[j])
			{
				str[i] = (char)toupper(str[i]); 
			}
		}
	for (i = 0; i < strlen(str); i++) {
		cout << str[i];
	}

}