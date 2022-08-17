#include <iostream>
#include <iomanip>

using namespace std;

void Introduction();

void GetUserInput(char &choice, const string &inputPrompt);

char FirstChoice();

int playerEnterRow();

int playerEnterColumn();


int main() {
    // Defining Variables
    bool isPlayerTurn = false;
    char userChoice;
    srand(time(0));
    int row;
    int column;
    string greeting;

    //Defining the game board
    char gameBoard[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            gameBoard[i][j] = 'e';
        }
    }

    // Randomly generated greeting
    int randNum = rand() % 3;
    if (randNum == 0) {
        greeting = "Hello there";
    } else if (randNum == 1) {
        greeting = "Greetings";
    } else {
        greeting = "Welcome";
    }
    for (int i = 0; i < greeting.size() + 4; ++i) {
        cout << "*";
    }
    cout << endl << "* " << greeting << " *" << endl;
    for (int i = 0; i < greeting.size() + 4; ++i) {
        cout << "*";
    }
    cout << endl;


    Introduction();
    userChoice = FirstChoice();

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }



    // First placement
    if (userChoice == 'Y' || userChoice == 'y') {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    goto Theend1;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend1;
                }
            }
        }
    }
    Theend1:

    cout << endl;
    cout << endl;
    cout << endl;

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;








    // Second Placement
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    isPlayerTurn = false;
                    goto Theend2;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend2;
                }
            }
        }
    }
    Theend2:



    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;








    // Third Placement
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    isPlayerTurn = false;
                    goto Theend3;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend3;
                }
            }
        }
    }
    Theend3:

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }


    cout << endl;
    cout << endl;
    cout << endl;











    // Fourth Placement
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    isPlayerTurn = false;
                    goto Theend4;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend4;
                }
            }
        }
    }
    Theend4:

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }


    cout << endl;
    cout << endl;
    cout << endl;








    // Fifth Placement
    // Begin Winner Checks Here
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    isPlayerTurn = false;
                    goto Theend5;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend5;
                }
            }
        }
    }
    Theend5:

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }

    if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    cout << endl;
    cout << endl;
    cout << endl;






    // Sixth Placement
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    isPlayerTurn = false;
                    goto Theend6;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend6;
                }
            }
        }
    }
    Theend6:

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }

    if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    cout << endl;
    cout << endl;
    cout << endl;






    // Seventh Placement
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    isPlayerTurn = false;
                    goto Theend7;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend7;
                }
            }
        }
    }
    Theend7:

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }


    if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;






    // Eighth Placement
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[row][column] == 'e') {
                    gameBoard[row][column] = 'X';
                    isPlayerTurn = false;
                    goto Theend8;
                }
            }
        }
    } else {
        cout << "It's the computer's turn" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend8;
                }
            }
        }
    }
    Theend8:

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }


    if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;






    // Ninth Placement
    if (isPlayerTurn == true) {
        row = playerEnterRow();
        column = playerEnterColumn();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == gameBoard[row][column]) {
                    gameBoard[i][j] = 'X';
                    isPlayerTurn = false;
                    goto Theend9;
                }
            }
        }
    } else {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (gameBoard[i][j] == 'e') {
                    gameBoard[i][j] = 'O';
                    isPlayerTurn = true;
                    goto Theend9;
                }
            }
        }
    }
    Theend9:

    // Display the board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            if (j < 2) {
                cout << setw(2) << gameBoard[i][j];
            } else {
                cout << setw(2) << gameBoard[i][j] << endl;
            }
        }
    }


    cout << endl;
    cout << endl;
    cout << endl;

    if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X') {
        cout << "Congratulations! You won! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }

    if (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O') {
        cout << "Sorry! You Lost! Thank you for playing!" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
        cin >> userChoice;
        if (userChoice == 'y' || userChoice == 'Y') {
            main();
        } else {
            return 0;
        }
    }


    cout << "All boxes are filled. The game is over." << endl;
    cout << "Would you like to play again?" << endl;
    cout << "Make a selection by inputting Y indicating Yes or N indicating No" << endl;
    cin >> userChoice;
    if (userChoice == 'y' || userChoice == 'Y') {
        main();
    } else {
        return 0;
    }
}


void Introduction() {
    string choice;
    cout << "It's time to play Tic-Tac-Toe!" << endl;
    cout << "You will be playing against a computer" << endl;
    cout << "You are assigned the X's and the computer will use the O's" << endl;
    cout << "Would you like to go first?" << endl;
}

char FirstChoice() {
    char choice;
    string prompt = "Make a selection by inputting Y indicating Yes or N indicating No";

    GetUserInput(choice, prompt);
    return choice;
}

void GetUserInput(char &choice, const string &inputPrompt) {
    bool isValidInput = false;

    while (!isValidInput) {
        cout << inputPrompt << endl;
        cin >> choice;
        switch (choice) {
            case 'Y':
            case 'y':
            case 'N':
            case 'n':
                isValidInput = true;
                break;
            default:
                isValidInput = false;
        }
    }
}

int playerEnterRow() {
    int choice;
    cout << "It's your turn!" << endl;
    cout << "Please pick the row in the array you want to place an X on (0, 1, or 2)" << endl;
    cin >> choice;
    return choice;
}

int playerEnterColumn() {
    int choice;
    cout << "Please pick the column in the array you want to place an X on (0, 1, or 2)" << endl;
    cin >> choice;
    return choice;
}