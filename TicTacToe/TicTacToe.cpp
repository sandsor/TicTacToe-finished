#include <iostream>
#include <string>
#include <vector>

char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void board();
int checkwin();
int main()
{
	int player = 1;
	int y;
	char symbol = 'x';
	
	/*int choice;
	if (player == 0) {
		player == 1;
	}

	else {
		player == 2;
	}*/
	
	do
	{
		board();

		if (player==3) {
			player--;
			player--;
		}
		int choice;
		
		symbol = (player == 1) ? 'X' : 'O'; // if player == 1 then use 'X' if not then player = 'O'

		std::cout << "please choose a number player " << player << " :";
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
			player--;
		}
		
		
		y = checkwin();
		player++;



	} while (y == -1);
	board();
	player--;
	if (y == 1) {
		std::cout << "Player " << player << " wins";
	}
	else {
		std::cout << "Game Draw";
	}
	
	
	return(0);
}

// when a player types a number and it gets printed to the board, checkwin() gets run and sends a value back into the main function using Y. if we do return(1) in checkwin() then y gets a
// value of 1. so using that i make it so that 1 is for when a player wins, -1 is for continue with the game and 0 is draw with no winner.


int checkwin() {
	
	if (number[1] == number[2] && number[2] == number[3]) {
		return 1;
	}
	else if (number[4] == number[5] && number[5] == number[6]) {
		return 1;
	}
	else if (number[7] == number[8] && number[8] == number[9]) {
		return 1;
	}
	else if (number[1] == number[4] && number[4] == number[7]) {
		return 1;
	}
	else if (number[2] == number[5] && number[5] == number[8]) {
		return 1;
	}
	else if (number[3] == number[6] && number[6] == number[9]) {
		return 1;
	}
	else if (number[7] == number[5] && number[5] == number[3]) {
		return 1;
	}
	else if (number[9] == number[5] && number[5] == number[1]) {
		return 1;
	}
	else if (number[1] != '1' && number[2] != '2' && number[3] != '3' && number[4] != '4' && number[5] != '5'
		&& number[6] != '6' && number[7] != '7' && number[8] != '8' && number[9] != '9') 
	{
		return 0;
	}
	else {
		return -1;
	}
}


void board() {



	system("cls");


	std::cout << "  |  " << number[1] << "  |  " << number[2] << "  |  " << number[3] << "  |\n\n";
	std::cout << "  |  " << number[4] << "  |  " << number[5] << "  |  " << number[6] << "  |\n\n";
	std::cout << "  |  " << number[7] << "  |  " << number[8] << "  |  " << number[9] << "  |\n\n";
 
}