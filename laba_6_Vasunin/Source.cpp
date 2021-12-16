#include <iostream>
#include<fstream>

using namespace std;


void chislo() {

	FILE* chislo1 = fopen("1 chislo.txt", "wr");
	char Chislo1[20];
	char Chislo2[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> Chislo1[i];
		fprintf(chislo1, "%10.6f", Chislo1[i]);

	}

	FILE* chislo2 = fopen("2 chislo.txt", "wr");

	for (int i = 0; i < 20; i++)
	{
		cin >> Chislo2[i];
		fprintf(chislo2, "%10.6f", Chislo2[i]);

	}

}






FILE F;
int main() {

	chislo();
	//tatata


	FILE* F = fopen("3 chislo.txt", "wr");




	fclose(F);
	return 1;
}