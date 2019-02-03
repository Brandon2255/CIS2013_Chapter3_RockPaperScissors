#include <iostream>
using namespace std;
int main() {

	char player1Answer;
	char player2Answer;
	char player1PlayAgain;
	char Player2PlayAgain;
	int player1Score = 0;
	int player2Score = 0;
	
	
	do {
	
	cout << "Player1 please enter R, P, or S. ";
	cin >> player1Answer;
	
	cout << "Player2 please enter R, P, or S. ";
	cin >> player2Answer;
	
	switch (player1Answer)
	{
	case 'R':
		if (player2Answer == 'R')
			cout << "You have tied\n";
		else if (player2Answer == 'P')
		{	cout << "Player2 won\n";
			player2Score++;
		}	
		else if (player2Answer == 'S')
		{	cout << "Player1 won\n";
			player1Score++;
		}
		break;
	case 'P':
		if (player2Answer == 'R')
		{	cout << "Player1 won.\n";
			player1Score++;
		}		
		else if (player2Answer == 'P')
			cout << "You have tied.\n";
		else if (player2Answer == 'S')
		{	cout << "Player2 won\n";
			player2Score++;
		}
		break;
	case 'S':
		if (player2Answer == 'R')
		{	cout << "Player2 won\n";
			player2Score++;
		}
		else if (player2Answer == 'P')
		{	cout << "Player1 won.\n";
			player1Score++;
		}	
		else if (player2Answer == 'S')
			cout << "You have tied.\n";
		break;
	}
	cout << "player 1 has " << player1Score << " points.\n";
	cout << "player 2 has " << player2Score << " points.\n";
	cout << "Would you like to play again? Y/N. ";
	cin >> player1PlayAgain;
	} while (player1PlayAgain == 'Y');
	
	return 0;
}