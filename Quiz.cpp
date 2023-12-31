#include <iostream>
#include <string>
#include "Quiz.h"

//using namespace std;

int Deviner;
int Totale;

class Question {
private:
    string Texte_Question;   // Stocke le texte de la question.
    string Reponse_1;       // Stocke la première réponse.
    string Reponse_2;       // Stocke la deuxième réponse.
    string Reponse_3;       // Stocke la troisième réponse.
    string Reponse_4;       // Stocke la quatrième réponse.
    int Reponse_Correcte;   // Stocke l'index de la réponse correcte.
    int Score_Question;     // Stocke le score associé à la question.

public:
    void setValues(string, string, string, string, string, int, int);
    void askQuestion();
};


void Startup() {
	std::cout << " Lancer le jeu " << std::endl;
}
void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	Texte_Question = q;       // Définit le texte de la question en utilisant la valeur passée en paramètre.
	Reponse_1 = a1;           // Définit la première réponse en utilisant la valeur passée en paramètre.
	Reponse_2 = a2;           // Définit la deuxième réponse en utilisant la valeur passée en paramètre.
	Reponse_3 = a3;           // Définit la troisième réponse en utilisant la valeur passée en paramètre.
	Reponse_4 = a4;           // Définit la quatrième réponse en utilisant la valeur passée en paramètre.
	Reponse_Correcte = ca;    // Définit l'indice de la réponse correcte en utilisant la valeur passée en paramètre.
	Score_Question = pa;      // Définit le score associé à la question en utilisant la valeur passée en paramètre.
}


void Question::askQuestion() {
    cout << endl;
    std::cout << Texte_Question << std::endl;  // Affiche le texte de la question.
    std::cout << "1. " << Reponse_1 << std::endl;  // Affiche la première réponse possible.
    std::cout << "2. " << Reponse_2 << std::endl;  // Affiche la deuxième réponse possible.
    std::cout << "3. " << Reponse_3 << std::endl;  // Affiche la troisième réponse possible.
    std::cout << "4. " << Reponse_4 << std::endl;  // Affiche la quatrième réponse possible.
    cout << endl;

    std::cout << "Reponse: " << std::endl;
    std::cin >> Deviner;  // Attend la réponse de l'utilisateur et la stocke dans la variable Deviner.

    if (Deviner == Reponse_Correcte)  // Vérifie si la réponse de l'utilisateur correspond à la réponse correcte.
    {
        cout << endl;
        std::cout << "Tres bien ! Vous avez raison." << std::endl;  // Affiche un message si la réponse est correcte.
        Totale += Score_Question;  // Incrémente le score total de l'utilisateur.
        std::cout << "Score: " << Score_Question << " En dehors de " << Score_Question << " !" << std::endl;  // Affiche le score gagné pour cette question.
    }
    else
    {
        cout << endl;
        std::cout << "Oh, NON. Vous avez tort." << std::endl;  // Affiche un message si la réponse est incorrecte.
        std::cout << "Vous gagnez 0 !" << " En dehors de " << Score_Question << " !" << std::endl;  // Indique que l'utilisateur n'a pas gagné de points pour cette question.
        std::cout << "La bonne reponse est " << Reponse_Correcte << std::endl;  // Affiche la réponse correcte.
        cout << endl;
    }
}




// Fonction pour quitter le jeu
void ExitApp() {
	std::cout << "A la prochaine." << std::endl;
	Replay();
	exit(0);
}

void QuestionPose1() {

    // Crée cinq objets de la classe 'Question' pour les cinq questions du quiz.
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;

    // Utilise la méthode 'setValues' pour initialiser les cinq questions avec leur texte, réponses et scores associés.
    q1.setValues("1.Quel est le premier satellite envoye dans l'espace ?", "Spoutnik 1", "Explorer 4", "la-lune", "La-Terre", 1, 10);
    q2.setValues("2.Quelle est la capital de l'australie ?", "Dublin", "Canberra", "Paris", "Sydney", 2, 10);
    q3.setValues("3.Qui a ecrit L'Odyssee", "Bart", "Emile Zola Right-left", "Homere", "Jean de la Fontaine", 3, 10);
    q4.setValues("4.Quel pays est celebre pour sa Grande Muraille ?", "France", "Maroc", "Chine", "Allemagne", 3, 10);
    q5.setValues("4.Qui a peint la Mona Lisa ?", "Vincent van Gogh", "Pablo Picasso", "Leonardo da Vinci", "Rembrandt", 3, 10);

    // Pose chacune des cinq questions en utilisant la méthode 'askQuestion'.
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();

    // Efface l'écran (utilisation de "system("cls")" pour effacer la console).
    system("cls");

    // Affiche le score total de l'utilisateur.
    std::cout << "Votre score Totale est de " << Totale << " points sur 150." << std::endl;

    // Vérifie si l'utilisateur a réussi (score total supérieur ou égal à 30) ou échoué le quiz.
    if (Totale >= 30)
    {
        cout << "Bien joue tu as passe le quiz!" << endl;
        cout << "Felicitation" << endl;
    }
    else
    {
        std::cout << "Desole vous avez rate le quiz!" << std::endl;
    }

    // Demande à l'utilisateur s'il souhaite rejouer ou quitter le jeu.
    std::cout << "Veut-tu rejoue (O/N) " << std::endl;
    string play_again;
    std::cout << "Ton choix: ";
    std::cin >> play_again;
    if (play_again == "O" || play_again == "o")
    {
        Theme(); // Redirige l'utilisateur vers la sélection de thème pour rejouer.
    }
    else
    {
        std::cout << "OK. Au revoir." << std::endl; // Quitte le jeu si l'utilisateur ne souhaite pas rejouer.
    }
}


//Question 2 
void QuestionPose2() {

	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;


	q6.setValues("1. Quelle est l'instruction en C pour afficher du texte a l'ecran?", "print(''Hello, World!'');", "echo ''Hello, World!'';", "printf(''Hello, World!'');","system.out.println(''Hello, World!'');", 3, 10);

	q7.setValues("2.Quelle est la declaration correcte d'une variable entière en C?", "integer x", "int x", "x = int", "float x", 2, 10);

	q8.setValues("3.Comment commentez-vous votre code en C?", "Utilisez // pour les commentaires en ligne, ou /* */", " le symbole '#'", "a syntaxe comment:", "la syntaxe '--'  ", 1, 10);

	q9.setValues("4.Quel operateur est utilise pour comparer l'egalite de deux valeurs en C ?", "=", "==", "===", " !=", 2, 10);

	q10.setValues("5.Quelle est la boucle la plus couramment utilisee pour repeter une partie de code un nombre specifie de fois ?", "if;", "swith;", "and;", "for", 4, 10);


	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();
	system("cls");

	cout << "Le total de ton score est de  " << Totale << " points sur 100." << endl;

	if (Totale >= 30)
	{
		cout << "Bien joue tu as passe le quiz!" << endl;
		cout << "Felicitation" << endl;
		
		

	}        //end of the game
	else
	{
		std::cout << "Desole vous avez rate le quiz!" << std::endl;
	}

	std::cout << "Veut-tu rejoue (O/N) " << std::endl;
	string play_again;
	std::cout << "Ton choix: ";
	std::cin >> play_again;
	if (play_again == "O" || play_again == "o")
	{
		Theme();

	}
	else
	{
		std::cout << "OK. Au revoir." << std::endl;
	}
}

void QuestionPose3() {


	Question q11;
	Question q12;
	Question q13;
	Question q14;
	Question q15;


	q11.setValues("11.Quelle entreprise a cree la celebre serie de jeux Pokemon?", "l'entreprise japonaise Game Freak", "la societe  Game World Adventures.", "l'entreprise  Monstres de Poche Inc", "Bandai Namco", 1, 10);
	q12.setValues("12.Quel jeu video populaire met en scene des animaux anthropomorphes vivant dans une ville et a ete developpe par Nintendo ?", "Super Mario World", "Zelda's Animal Town", "Animal Crossing", "Call Of Duty", 3, 10);
	q13.setValues("13. Quel jeu video permet aux joueurs de construire des mondes virtuels avec des blocs de differentes couleurs ?", "Minecraft", "Fortnite", "Grand Theft Auto V", "Valorant", 1, 10);
	q14.setValues("14.quel est le jeu de societe le plus ancien ?", "Monopoly", "Jurassic Park", "Senet", "Tetris", 3, 10);
	q15.setValues("15.Lequel de ces personnages n'est pas issu de l'univers de Mario ?", "Peach", "Bowser", "Tail", "Luigi", 2, 10);

	q11.askQuestion();
	q12.askQuestion();
	q13.askQuestion();
	q14.askQuestion();
	q15.askQuestion();

	system("cls");

	std::cout << "Ton score Totale est " << Totale << "point sur 150." << std::endl;

	if (Totale >= 30)
	{
		cout << "Bien joue tu as passe le quiz!" << endl;
		cout << "Felicitation" << endl;
	}        //end of the game
	else
	{
		std::cout << "Desole vous avez rate le quiz!" << std::endl;
	}

	std::cout << "Veut-tu rejoue (O/N) " << std::endl;
	string play_again;
	std::cout << "Ton choix: ";
	std::cin >> play_again;
	if (play_again == "O" || play_again == "o")
	{
		Theme();

	}
	else
	{
		std::cout << "OK. Au revoir." << std::endl;
	}
}

void Theme() {
	std::cout << "Choisissez un des themes qui sont presents ! \n" << std::endl;
	std::cout << "   [1] Culture general" << std::endl;
	std::cout << "   [2] Langage C " << std::endl;
	std::cout << "   [3] Jeux video \n" << std::endl;
	std::cout << "Choisie une option: ";

	int Menu = 3;
	std::cin >> Menu;

	// Appelle � la fonction 

	switch (Menu)
	{
	case 1:
		QuestionPose1();
		break;

	case 2:
		QuestionPose2();
		break;

	case 3:
		QuestionPose3();
		break;

	default :
		ExitApp();
		break;
	}
}

// Fonction qui sert à guider le joueur
void MainMenu() {
	system("color 5F");
	std::cout << "\t\t*************************************************************************************" << std::endl;
	std::cout << "\t\t*****                                                                           *****" << std::endl;
	std::cout << "\t\t*****                            BIENVENUE DANS LE QUIZ                         *****" << std::endl;
	std::cout << "\t\t*****                          CE QUIZ PRESENTE 3 THEMES                        *****" << std::endl;
	std::cout << "\t\t*****                                BON COURAGE                                *****" << std::endl;
	std::cout << "\t\t*****                                                                           *****" << std::endl;
	std::cout << "\t\t************************************************************************************* \n" << std::endl;


	string Name;
	std::cout << "Entre ton pseudo? " << std::endl;
	getline(cin, Name);

	std::cout << "   [1] Commencer le quiz" << std::endl;
	std::cout << "           ou " << std::endl;;
	std::cout << "   [2] Quitter le jeu \n" << std::endl;
	std::cout << "Choisit une option " << Name << " ?" << std::endl;


	int MenuChoice;
	std::cin >> MenuChoice;

	// Appelle à la fonction 

	switch (MenuChoice)
	{
	case 1:
		Theme();
		break;

	case 2:
		ExitApp();
		break;

	default:
		std::cout << "Au revoir !" << std::endl;
		break;
	}
}
// Declarez cette fonction au debut de votre code pour la rendre accessible aux autres fonctions.
void Replay() {
	char choix;

	printf("Veux tu rejouer? (O/N) : ");
	fflush(stdin);
	scanf_s(" %c", &choix);

	if (choix == 'O' || choix == 'o') {
		// Si le joueur veut rejouer, appelez la fonction Game pour demarrer une nouvelle partie.
		Theme();
	}
	else if (choix == 'N' || choix == 'n') {
		printf("Merci d'avoir joue ! Au revoir.\n");
		//ExitApp(); // Vous pouvez egalement ajouter un appel à la fonction ExitApp pour quitter l'application ici.
	}
	else {
		// Reponse non valide, redemandez.
		printf("Reponse incorrecte. Veuillez repondre par O(oui) ou N(non)\n");
		// Appel recursif pour redemander la reponse.
	}
}
