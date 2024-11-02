#include <stdio.h>
#include <stdlib.h>

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
	break;

	case 2:
	printf("You chose Paper\n");
	break;

	case 3:
	printf("You chose Scissors\n");
	break;

	default:
	break;
    }
    return 0;
}
