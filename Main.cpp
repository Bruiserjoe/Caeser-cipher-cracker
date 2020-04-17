#include "Header.h"
//caeser cipher to crack: fvb hyl ylahyklk
std::string input;
char iarray[100];
char bruh[100];
bool correct = false;
int outputn = 1;
int cn = 0;
char ualph[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
char alph[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
//Manual checking of tests
// Go through every shift and find the most similar to our alphabet
void decode(char text[100]) {
	
	for (int i = 0; i < strlen(text); i++) {
		for (int j = 0; j < strlen(alph); j++) {
			if (text[i] == alph[j]) {
				cn = j + outputn;
				if (cn > 25) {
					cn = cn - 26;
				}
				bruh[i] = alph[cn];
				std::cout << bruh[i];
				
			}
			
		}
	}
	std::cout << std::endl;
}


int main() {
	std::cout << "Hello, input text you would like to decode: ";
	std::cin.getline(iarray, 100);
	//shitty ass solving script
	while (!correct) {
		if (outputn > 25) {
			outputn = 1;
		}
		decode(iarray);
		std::cout << "Is this correct?Y/N";
		std::cin >> input;
		if (input == "Y" || input == "y") {
			correct = true;
		}
		if (input == "N" || input == "n") {
			std::cout << "Trying again" << std::endl;
			outputn++;

		}
	}

	std::cin.get();
}