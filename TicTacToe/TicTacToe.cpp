#include <iostream>
#include <string>
#include <vector>

char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void board();
void checkwin();
int main()
{
	int player;
	int y;
	char symbol = 'x';
	int choice;

	
	do
	{
		board();

		


		std::cout << "please choose a slot :";
		std::cin >> choice;

		if (choice == 1 && number[1] == '1') {
			number[1] = symbol;
		}
		else if (choice == 2 && number[2] == '2') {
			number[2] = symbol;
		}
		else if (choice == 3 && number[3] == '3') {
			number[3] = symbol;
		}
		else if (choice == 4 && number[4] == '4') {
			number[4] = symbol;
		}
		else if (choice == 5 && number[5] == '5') {
			number[5] = symbol;
		}
		else if (choice == 6 && number[6] == '6') {
			number[6] = symbol;
		}
		else if (choice == 7 && number[7] == '7') {
			number[7] = symbol;
		}
		else if (choice == 8 && number[8] == '8') {
			number[8] = symbol;
		}
		else if (choice == 9 && number[9] == '9') {
			number[9] = symbol;
		}
		else {
			std::cout << "invalid input";
		}
		y = -1;
		/*y = checkwin();*/

		/*player++;*/
	} while (y == -1);
	board();

	return 0;
}

void checkwin() {
	
	
	
	
	/*return 0;
	else
	return -1;*/
}


void board() {



	system("cls");


	std::cout << "  |  " << number[1] << "  |  " << number[2] << "  |  " << number[3] << "  |\n\n";
	std::cout << "  |  " << number[4] << "  |  " << number[5] << "  |  " << number[6] << "  |\n\n";
	std::cout << "  |  " << number[7] << "  |  " << number[8] << "  |  " << number[9] << "  |\n\n";
 
}