#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

void setColor(int textColor, int bgColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor | (bgColor << 4));
}

int getComputerChoice() {
    // Generate a random number between 0 and 2
    return rand() % 3; // 0, 1, or 2
}

const char* choiceToString(int choice) {
    switch (choice) {
        case 0: return "Rock";
        case 1: return "Paper";
        case 2: return "Scissors";
        default: return "Unknown";
    }
}


int main() {
    int choice;
    system("cls");
    printf("⠀⠀⠀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⠀\n");
    printf("⠀⢀⣠⢋⡀⠔⠀⠉⠲⢤⢤⡀⠀⠀⠀⠀⠀⠀⠀⢀⠜⠁⠀⣸           $$$$$$$\\             $$\\     $$\\     $$\\                  $$$$$$\\\n");
    printf("⡞⠁⠈⠀⠀⠀⠀⢠⠤⠌⣇⢱⢸⠉⠉⢳⠀⠀⡠⠋⠀⠀⡔⡡⠔⠒⠲⡄       $$  __$$\\            $$ |    $$ |    $$ |                $$  __$$\\\n");
    printf("⡸⠒⠤⠀⠀⠀⠠⠴⢒⣂⢸⢸⠀⢧⠀⠀⡧⠊⠀⠀⢀⠞⠉⠀⠀⣀⠴⠃       $$ |  $$ | $$$$$$\\ $$$$$$\\ $$$$$$\\   $$ | $$$$$$\\        $$ /  \\__|\n");
    printf("⢧⡀⠀⠀⠀⠀⠀⠈⠉⢀⠞⠋⠀⠸⠀⠀⠀⠀⠀⠠⠃⠀⢀⣤⠮⠥⠤⢤       $$$$$$$  | \\____$$\\\\_$$  _|\\_$$  _|  $$ |$$  __$$\\       $$ |\n");
    printf("⠀⠙⢍⣁⣀⣀⣀⠤⠖⠁⠀⠀⠠⢇⢀⡴⠂⣠⠀⠀⠀⠠⠋⠀⢀⡠⠴⠚       $$  __$$<  $$$$$$$ | $$ |    $$ |    $$ |$$$$$$$$ |      $$ |\n");
    printf("⠀⠀⢀⡤⣄⡤⠴⠒⡲⠤⡀⠀⢰⡘⣌⠐⣊⠤⠀⠀⠀⢀⠴⠊⠁⠀⠀        $$ |  $$ |$$  __$$ | $$ |$$\\ $$ |$$\\ $$ |$$   ____|      $$ |  $$\\⠀\n");
    printf("⠀⢠⢋⡞⣁⡀⠀⠀⠘⢤⣘⡄⠀⠑⢌⣳⠤⠤⠤⠴⠚⠁⠀⠀⠀⠀⠀⠀       $$$$$$$  |\\$$$$$$$ | \\$$$$  |\\$$$$  |$$ |\\$$$$$$$\\       \\$$$$$$  |\n");
    printf("⠀⡇⡜⢐⠦⣈⡀⠀⠀⠀⠀⠈⠉⠉⠉⠒⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀        \\_______/  \\_______|  \\____/  \\____/ \\__| \\_______|       \\______/\n");
    printf("⠀⠉⢣⠈⠓⠀⠁⠀⠀⠐⠂⠠⢤⡤⠤⢄⡸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠳⣄⠀⠀⠀⠀⣀⡀⠀⠀⠉⠲⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠈⠙⠒⠤⠔⠒⠉⠑⠢⢄⡀⢨⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("\n");
    printf("Rock Paper Scissors Game made in C. Make your move wisely! \n");
    printf("1 for Rock\n");
    printf("2 for Paper\n");
    printf("3 for Scissors\n\n");

    
    scanf("%d", &choice);
    switch(choice)
    {
	case 1:
	printf("You chose Rock\n");
        printf("\n");
           setColor(9, 0);
           printf("⠀⠀⠀⠀⠀⠀⢠⣶⠟⠉⠁⠀⣠⠉⠉⠛⠳⣦⡄\n");
           printf("⠀⠀⠀⠀⠀⢰⡿⠁⠀⣀⣠⠞⠁⠀⠀⠀⠀⠀⠉⠻⣶⣤⣤⣤⡄⠀\n");
           printf("⠀⣠⡶⠟⠛⠛⠛⠛⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣧⡈⢿⡄⠀\n");
           printf("⢸⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⣤⣤⣶⠈⣿⡀⠘⣷⠀\n");
           printf("⠸⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⢀⣀⡀⠹⣧⠀⢻⡄\n");
           printf("⠀⣼⡿⠶⠦⠤⠤⠤⠀⠀⠀⠀⠀⠀⢠⣤⡶⠶⠞⠛⣿⡇⠀⣿⠀⢸⡧\n");
           printf("⢸⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⡶⠟⠃⢀⣿⢀⣾⠁⠀⠀\n");
           printf("⢸⣟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠁⠀⠀⢀⣿⡛⠛⠁⠀⠀\n");
           printf("⠈⠻⣶⣄⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡟⠁⠀⠀⠀⠀⠀\n");
           printf("⠀⠀⠀⢹⣯⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⠟⠋⠀⠀⠀⠀⠀\n");
           printf("⠀⠀⠀⠀⠙⠿⣶⣤⣤⣀⣀⣠⣤⣴⡶⠾⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀\n");
           printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
           setColor(7, 0);
	break;

	case 2:
	printf("You chose Paper\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀    ⠀⠀⠀⠀⠀⠀⠀          ⢀⣀⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀             ⢠⣾⠟⠉⠀⠈⠙⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀           ⣴⠟⠁⠀⠀⠀⠀⢀⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⣴⠶⠶⠶⣦⣄⠀  ⠀⠀⠀⠀⣠⣾⠋⠀⠀⠀⠀⠀⣰⠟⠁⠀⠀⣀⣀⣀⡀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠹⣧⠀⠀⠀⠀⢀⣴⠟⠁⠀⠀⠀⠀⢀⣼⠏⢀⣠⡶⠟⠋⠉⠉⠛⢷⣄⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⢻⡇⠀⠀⣠⡿⠃⠀⠀⠀⠀⠀⢠⣾⣧⠾⠛⠉⠀⠀⠀⠀⠀⠀⢈⣿⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⢻⣇⠀⠀⠀⠀⠘⣇⣴⡾⠋⠀⠀⠀⠀⠀⠀⣰⡿⠛⠁⠀⠀⠀⠀⠀ ⣀⣴⠟⠋⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠟⠁⠀⠀⠀⠀⠀    ⣸⠋⠀⠀⠀⠀⠀⠀⣀⣴⠿⠋⠁⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀    ⠀⡴⠁⠀⠀⠀⠀⠀⢀⣤⠾⠋⣀⣠⣤⣤⣤⣄⡀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⢀⣴⠿⠛⠛⠛⠉⠉⠁⠀⠀⠙⣿\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡇⠀⠀⠀⢀⣴⡄⠀⠀⡀⠀⠀⠀⠀⠀⠀  ⣰⠟⠁⠀⠀⠀⠀  ⠀⣀⣤⡾⠏\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⡿⠉⣷⠀⢀⣴⡿⠋⠀⢀⣴⠿⠁⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀  ⢀⣠⣴⠾⠛⠉⠁⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣷⠀⢻⣧⠈⠁⢀⣤⡾⠋⠁⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀   ⢀⣠⣴⠾⠛⠉⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠹⣇⠀⠹⣷⡀⠉⠁⣤⣴⠶⠛⠋⠀⠀⠀⠀⠀⠀⠀⣀⣴⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠹⣧⡀⠈⢿⣦⡀⠁⠀⠀⠀⠀⠀⠀⠀⣀⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣦⣄⣈⣻⡷⠶⣶⣶⡶⠶⠾⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	break;

	case 3:
	printf("You chose Scissors\n");
	break;

	default:
	break;
    }
    srand(time(NULL));
    int computerChoice = getComputerChoice();
    printf("Computer chooses: %s\n", choiceToString(computerChoice));

    if(computerChoice == 0)
    {
	printf("\n");
           setColor(13, 0);
           printf("⠀⠀⠀⠀⠀⠀⢠⣶⠟⠉⠁⠀⣠⠉⠉⠛⠳⣦⡄\n");
           printf("⠀⠀⠀⠀⠀⢰⡿⠁⠀⣀⣠⠞⠁⠀⠀⠀⠀⠀⠉⠻⣶⣤⣤⣤⡄⠀\n");
           printf("⠀⣠⡶⠟⠛⠛⠛⠛⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣧⡈⢿⡄⠀\n");
           printf("⢸⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⣤⣤⣶⠈⣿⡀⠘⣷⠀\n");
           printf("⠸⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⢀⣀⡀⠹⣧⠀⢻⡄\n");
           printf("⠀⣼⡿⠶⠦⠤⠤⠤⠀⠀⠀⠀⠀⠀⢠⣤⡶⠶⠞⠛⣿⡇⠀⣿⠀⢸⡧\n");
           printf("⢸⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⡶⠟⠃⢀⣿⢀⣾⠁⠀⠀\n");
           printf("⢸⣟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠁⠀⠀⢀⣿⡛⠛⠁⠀⠀\n");
           printf("⠈⠻⣶⣄⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡟⠁⠀⠀⠀⠀⠀\n");
           printf("⠀⠀⠀⢹⣯⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⠟⠋⠀⠀⠀⠀⠀\n");
           printf("⠀⠀⠀⠀⠙⠿⣶⣤⣤⣀⣀⣠⣤⣴⡶⠾⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀\n");
           printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
           setColor(7, 0);

    }
    if(computerChoice == 1)
    {
	printf("\n");
    printf("⠀⠀⠀     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀          ⢀⣀⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀             ⢠⣾⠟⠉⠀⠈⠙⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀           ⣴⠟⠁⠀⠀⠀⠀⢀⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⣴⠶⠶⠶⣦⣄⠀  ⠀⠀⠀⠀⣠⣾⠋⠀⠀⠀⠀⠀⣰⠟⠁⠀⠀⣀⣀⣀⡀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠹⣧⠀⠀⠀⠀⢀⣴⠟⠁⠀⠀⠀⠀⢀⣼⠏⢀⣠⡶⠟⠋⠉⠉⠛⢷⣄⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⢻⡇⠀⠀⣠⡿⠃⠀⠀⠀⠀⠀⢠⣾⣧⠾⠛⠉⠀⠀⠀⠀⠀⠀⢈⣿⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⢻⣇⠀⠀⠀⠀⠘⣇⣴⡾⠋⠀⠀⠀⠀⠀⠀⣰⡿⠛⠁⠀⠀⠀⠀⠀ ⣀⣴⠟⠋⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠟⠁⠀⠀⠀⠀⠀    ⣸⠋⠀⠀⠀⠀⠀⠀⣀⣴⠿⠋⠁⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀    ⠀⡴⠁⠀⠀⠀⠀⠀⢀⣤⠾⠋⣀⣠⣤⣤⣤⣄⡀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⢀⣴⠿⠛⠛⠛⠉⠉⠁⠀⠀⠙⣿\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡇⠀⠀⠀⢀⣴⡄⠀⠀⡀⠀⠀⠀⠀⠀⠀  ⣰⠟⠁⠀⠀⠀⠀  ⠀⣀⣤⡾⠏\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⡿⠉⣷⠀⢀⣴⡿⠋⠀⢀⣴⠿⠁⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀  ⢀⣠⣴⠾⠛⠉⠁⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣷⠀⢻⣧⠈⠁⢀⣤⡾⠋⠁⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀   ⢀⣠⣴⠾⠛⠉⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠹⣇⠀⠹⣷⡀⠉⠁⣤⣴⠶⠛⠋⠀⠀⠀⠀⠀⠀⠀⣀⣴⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠹⣧⡀⠈⢿⣦⡀⠁⠀⠀⠀⠀⠀⠀⠀⣀⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣦⣄⣈⣻⡷⠶⣶⣶⡶⠶⠾⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

    }

    if(computerChoice == 2)
    {
	printf("\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣠⣀⣀⣀⡀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⢀⣤⠶⠿⣶⣤⡶⠟⠛⠉⠉⠉⢉⡉⠙⠛⢷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⣰⡟⠁⢠⡾⠋⠁⠀⠀⠀⠀⠀⠀⠀⠹⣄⠀⠀⠙⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⣰⡏⠀⣰⡟⠀⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣦⣄⣸⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⢠⡟⠀⣰⡟⠀⣄⠈⠉⠛⠻⠆⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠛⠛⠳⠶⠶⠶⠶⣤⠶⠶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⢸⡇⢀⣿⠁⢠⠛⠿⢶⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠘⣷⣼⣇⠀⠘⢷⣄⡀⠈⠙⠿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠈⠉⢿⡆⠀⠀⠙⠻⠆⠀⠀⠀⠀⠀⠀⠀⠀⠘⠒⠒⠒⠶⢶⣶⣶⣤⣤⣤⣤⣤⣀⣀⣀⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠘⢿⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠷⣦⣀⠈⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠈⠻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣷⣄⠀⠀⠀⠀⠀⠀⠉⠛⠲⢶⣤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠶⣦⣤⣄⣠⣤⣤⠶⠟⠋⠉⠛⠳⢶⣤⣀⠀⠀⠀⠀⠀⢹⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠷⣦⣄⡀⣀⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

    }


    }
