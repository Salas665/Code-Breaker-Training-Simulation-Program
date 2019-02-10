#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	bool gameContinue = true;

	srand(time(0));
	int randomNumber = rand() % 9 + 1;
	cout << "Hello! Welcome to Code Breaker Training Simulation Program for CIA Recruits" << endl;
	cout << "Out of 10 words you will try to solve 3 words chosen randomly" << endl;
	cout << "These words are encrypted, it is your job to dechipher them." << endl;

	if (gameContinue == true)
	{
		int firstAnimal = rand() % 9 + 1;
		int secondAnimal = rand() % 9 + 1;
		int thirdAnimal = rand() % 9 + 1;

		// LEVEL ONE
		cout << "Welcome to level 1! The number of the deciphered word is: " << firstAnimal << endl;
		while (firstAnimal == 0)
		{
			string guessOne;
			//Scorpion
			string scorpion = "scorpion";
			//jumbled version of word
			string jumbleScorpion = scorpion;
			int length = jumbleScorpion.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleScorpion[index1];
				jumbleScorpion[index1] = jumbleScorpion[index2];
				jumbleScorpion[index2] = temp;

			}
			cout << jumbleScorpion << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "scorpion")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint:It has 2 strong tweezers and a dangerous stinger" << endl;
				firstAnimal = 0;
			}
		}
		while (firstAnimal == 1)
		{
			string guessOne;
			//Rabbit
			string rabbit = "rabbit";
			//jumbled version of word
			string jumbleRabbit = rabbit;
			int length = jumbleRabbit.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleRabbit[index1];
				jumbleRabbit[index1] = jumbleRabbit[index2];
				jumbleRabbit[index2] = temp;

			}
			cout << jumbleRabbit << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "rabbit")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint:Their enemy are wolves and this furry creature is fast." << endl;
				firstAnimal = 1;
			}
		}
		while (firstAnimal == 2)
		{
			string guessOne;
			//Rabbit
			string hippo = "hippo";
			//jumbled version of word
			string jumbleHippo = hippo;
			int length = jumbleHippo.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleHippo[index1];
				jumbleHippo[index1] = jumbleHippo[index2];
				jumbleHippo[index2] = temp;

			}
			cout << jumbleHippo << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "hippo")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: They are the deadlist animal in the world." << endl;
				firstAnimal = 2;
			}

		}
		while (firstAnimal == 3)
		{
			string guessOne;
			//Rabbit
			string eagle = "eagle";
			//jumbled version of word
			string jumbleEagle = eagle;
			int length = jumbleEagle.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleEagle[index1];
				jumbleEagle[index1] = jumbleEagle[index2];
				jumbleEagle[index2] = temp;

			}
			cout << jumbleEagle << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "eagle")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: This animal is America's national bird" << endl;
				firstAnimal = 3;
			}

		}
		while (firstAnimal == 4)
		{
			string guessOne;
			//Rabbit
			string walrus = "walrus";
			//jumbled version of word
			string jumbleWalrus = walrus;
			int length = jumbleWalrus.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleWalrus[index1];
				jumbleWalrus[index1] = jumbleWalrus[index2];
				jumbleWalrus[index2] = temp;

			}
			cout << jumbleWalrus << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "walrus")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: This animal is the largest flippered marine mammal." << endl;
				firstAnimal = 4;
			}

		}
		while (firstAnimal == 5)
		{
			string guessOne;
			//Rabbit
			string duck = "duck";
			//jumbled version of word
			string jumbleDuck = duck;
			int length = jumbleDuck.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleDuck[index1];
				jumbleDuck[index1] = jumbleDuck[index2];
				jumbleDuck[index2] = temp;

			}
			cout << jumbleDuck << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "duck")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: Quack." << endl;
				firstAnimal = 5;
			}
		}
		while (firstAnimal == 6)
		{
			string guessOne;
			//Rabbit
			string whale = "whale";
			//jumbled version of word
			string jumbleWhale = whale;
			int length = jumbleWhale.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleWhale[index1];
				jumbleWhale[index1] = jumbleWhale[index2];
				jumbleWhale[index2] = temp;

			}
			cout << jumbleWhale << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "whale")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: This animal is the largest mammal known to man." << endl;
				firstAnimal = 6;
			}
		}
		while (firstAnimal == 7)
		{
			string guessOne;
			//Rabbit
			string hamster = "hamster";
			//jumbled version of word
			string jumbleHamster = hamster;
			int length = jumbleHamster.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleHamster[index1];
				jumbleHamster[index1] = jumbleHamster[index2];
				jumbleHamster[index2] = temp;

			}
			cout << jumbleHamster << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "hamster")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: This animal is a popular small house pet" << endl;
				firstAnimal = 7;
			}
		}
		while (firstAnimal == 8)
		{
			string guessOne;
			//Rabbit
			string sheep = "sheep";
			//jumbled version of word
			string jumbleSheep = sheep;
			int length = jumbleSheep.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleSheep[index1];
				jumbleSheep[index1] = jumbleSheep[index2];
				jumbleSheep[index2] = temp;

			}
			cout << jumbleSheep << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "sheep")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: Baaaaaaaah!" << endl;
				firstAnimal = 8;
			}
		}
		while (firstAnimal == 9)
		{
			string guessOne;
			//Rabbit
			string tiger = "tiger";
			//jumbled version of word
			string jumbleTiger = tiger;
			int length = jumbleTiger.size();
			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumbleTiger[index1];
				jumbleTiger[index1] = jumbleTiger[index2];
				jumbleTiger[index2] = temp;

			}
			cout << jumbleTiger << endl;
			cout << "What is your Guess?" << endl;
			cin >> guessOne;
			if (guessOne == "tiger")
			{
				cout << "Congratulation! Level 1 Complete!" << endl;
				firstAnimal = 10;
			}
			else
			{
				cout << "Wrong guess\nHint: This animal is the largest of the cat species" << endl;
				firstAnimal = 9;
			}
		}
		system("pause");

		// LEVEL TWO
		if (firstAnimal == 10)
		{
			cout << "Welcome to level 2! The number of the deciphered word is: " << secondAnimal << endl;
			while (secondAnimal == 0)
			{
				string guessTwo;
				//Scorpion
				string scorpion = "scorpion";
				//jumbled version of word
				string jumbleScorpion = scorpion;
				int length = jumbleScorpion.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleScorpion[index1];
					jumbleScorpion[index1] = jumbleScorpion[index2];
					jumbleScorpion[index2] = temp;

				}
				cout << jumbleScorpion << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "scorpion")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint:It has 2 strong tweezers and a dangerous stinger" << endl;
					secondAnimal = 0;
				}
			}
			while (secondAnimal == 1)
			{
				string guessTwo;
				//Rabbit
				string rabbit = "rabbit";
				//jumbled version of word
				string jumbleRabbit = rabbit;
				int length = jumbleRabbit.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleRabbit[index1];
					jumbleRabbit[index1] = jumbleRabbit[index2];
					jumbleRabbit[index2] = temp;

				}
				cout << jumbleRabbit << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "rabbit")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint:Their enemy are wolves and this furry creature is fast." << endl;
					secondAnimal = 1;
				}
			}
			while (secondAnimal == 3)
			{
				string guessTwo;
				//Rabbit
				string eagle = "eagle";
				//jumbled version of word
				string jumbleEagle = eagle;
				int length = jumbleEagle.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleEagle[index1];
					jumbleEagle[index1] = jumbleEagle[index2];
					jumbleEagle[index2] = temp;

				}
				cout << jumbleEagle << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "eagle")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is America's national bird" << endl;
					secondAnimal = 3;
				}

			}
			while (secondAnimal == 4)
			{
				string guessTwo;
				//Rabbit
				string walrus = "walrus";
				//jumbled version of word
				string jumbleWalrus = walrus;
				int length = jumbleWalrus.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleWalrus[index1];
					jumbleWalrus[index1] = jumbleWalrus[index2];
					jumbleWalrus[index2] = temp;

				}
				cout << jumbleWalrus << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "walrus")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is the largest flippered marine mammal." << endl;
					secondAnimal = 4;
				}

			}
			while (secondAnimal == 5)
			{
				string guessTwo;
				//Rabbit
				string duck = "duck";
				//jumbled version of word
				string jumbleDuck = duck;
				int length = jumbleDuck.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleDuck[index1];
					jumbleDuck[index1] = jumbleDuck[index2];
					jumbleDuck[index2] = temp;

				}
				cout << jumbleDuck << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "duck")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint: Quack." << endl;
					secondAnimal = 5;
				}
			}
			while (secondAnimal == 6)
			{
				string guessTwo;
				//Rabbit
				string whale = "whale";
				//jumbled version of word
				string jumbleWhale = whale;
				int length = jumbleWhale.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleWhale[index1];
					jumbleWhale[index1] = jumbleWhale[index2];
					jumbleWhale[index2] = temp;

				}
				cout << jumbleWhale << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "whale")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is the largest mammal known to man." << endl;
					secondAnimal = 6;
				}
			}
			while (secondAnimal == 7)
			{
				string guessTwo;
				//Rabbit
				string hamster = "hamster";
				//jumbled version of word
				string jumbleHamster = hamster;
				int length = jumbleHamster.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleHamster[index1];
					jumbleHamster[index1] = jumbleHamster[index2];
					jumbleHamster[index2] = temp;

				}
				cout << jumbleHamster << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "hamster")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is a popular small house pet" << endl;
					secondAnimal = 7;
				}
			}
			while (secondAnimal == 8)
			{
				string guessTwo;
				//Rabbit
				string sheep = "sheep";
				//jumbled version of word
				string jumbleSheep = sheep;
				int length = jumbleSheep.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleSheep[index1];
					jumbleSheep[index1] = jumbleSheep[index2];
					jumbleSheep[index2] = temp;

				}
				cout << jumbleSheep << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "sheep")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint: Baaaaaaaah!" << endl;
					secondAnimal = 8;
				}
			}
			while (secondAnimal == 9)
			{
				string guessTwo;
				//Rabbit
				string tiger = "tiger";
				//jumbled version of word
				string jumbleTiger = tiger;
				int length = jumbleTiger.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleTiger[index1];
					jumbleTiger[index1] = jumbleTiger[index2];
					jumbleTiger[index2] = temp;

				}
				cout << jumbleTiger << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessTwo;
				if (guessTwo == "tiger")
				{
					cout << "Congratulation! Level 2 Complete!" << endl;
					secondAnimal = 10;
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is the largest of the cat species" << endl;
					secondAnimal = 9;
				}
			}
			system("pause");
		}

		// LEVEL THREE
		if (secondAnimal == 10)
		{
			cout << "Welcome to Level 3! The number of the deciphered word is: " << thirdAnimal << endl;
			while (thirdAnimal == 0)
			{
				string guessThree;
				//Scorpion
				string scorpion = "scorpion";
				//jumbled version of word
				string jumbleScorpion = scorpion;
				int length = jumbleScorpion.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleScorpion[index1];
					jumbleScorpion[index1] = jumbleScorpion[index2];
					jumbleScorpion[index2] = temp;

				}
				cout << jumbleScorpion << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "scorpion")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint:It has 2 strong tweezers and a dangerous stinger" << endl;
					thirdAnimal = 0;
				}
			}
			while (thirdAnimal == 1)
			{
				string guessThree;
				//Rabbit
				string rabbit = "rabbit";
				//jumbled version of word
				string jumbleRabbit = rabbit;
				int length = jumbleRabbit.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleRabbit[index1];
					jumbleRabbit[index1] = jumbleRabbit[index2];
					jumbleRabbit[index2] = temp;

				}
				cout << jumbleRabbit << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "rabbit")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint:Their enemy are wolves and this furry creature is fast." << endl;
					thirdAnimal = 1;
				}
			}
			while (thirdAnimal == 3)
			{
				string guessThree;
				//Rabbit
				string eagle = "eagle";
				//jumbled version of word
				string jumbleEagle = eagle;
				int length = jumbleEagle.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleEagle[index1];
					jumbleEagle[index1] = jumbleEagle[index2];
					jumbleEagle[index2] = temp;

				}
				cout << jumbleEagle << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "eagle")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is America's national bird" << endl;
					thirdAnimal = 3;
				}
			}
			while (thirdAnimal == 4)
			{
				string guessThree;
				//Rabbit
				string walrus = "walrus";
				//jumbled version of word
				string jumbleWalrus = walrus;
				int length = jumbleWalrus.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleWalrus[index1];
					jumbleWalrus[index1] = jumbleWalrus[index2];
					jumbleWalrus[index2] = temp;

				}
				cout << jumbleWalrus << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "walrus")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is the largest flippered marine mammal." << endl;
					thirdAnimal = 4;
				}
			}
			while (thirdAnimal == 5)
			{
				string guessThree;
				//Rabbit
				string duck = "duck";
				//jumbled version of word
				string jumbleDuck = duck;
				int length = jumbleDuck.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleDuck[index1];
					jumbleDuck[index1] = jumbleDuck[index2];
					jumbleDuck[index2] = temp;

				}
				cout << jumbleDuck << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "duck")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint: Quack." << endl;
					thirdAnimal = 5;
				}
			}
			while (thirdAnimal == 6)
			{
				string guessThree;
				//Rabbit
				string whale = "whale";
				//jumbled version of word
				string jumbleWhale = whale;
				int length = jumbleWhale.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleWhale[index1];
					jumbleWhale[index1] = jumbleWhale[index2];
					jumbleWhale[index2] = temp;

				}
				cout << jumbleWhale << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "whale")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is the largest mammal known to man." << endl;
					thirdAnimal = 6;
				}
			}
			while (thirdAnimal == 7)
			{
				string guessThree;
				//Rabbit
				string hamster = "hamster";
				//jumbled version of word
				string jumbleHamster = hamster;
				int length = jumbleHamster.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleHamster[index1];
					jumbleHamster[index1] = jumbleHamster[index2];
					jumbleHamster[index2] = temp;

				}
				cout << jumbleHamster << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "hamster")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is a popular small house pet" << endl;
					thirdAnimal = 7;
				}
			}
			while (thirdAnimal == 8)
			{
				string guessThree;
				//Rabbit
				string sheep = "sheep";
				//jumbled version of word
				string jumbleSheep = sheep;
				int length = jumbleSheep.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleSheep[index1];
					jumbleSheep[index1] = jumbleSheep[index2];
					jumbleSheep[index2] = temp;

				}
				cout << jumbleSheep << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "sheep")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint: Baaaaaaaah!" << endl;
					thirdAnimal = 8;
				}
			}
			while (thirdAnimal == 9)
			{
				string guessThree;
				//Rabbit
				string tiger = "tiger";
				//jumbled version of word
				string jumbleTiger = tiger;
				int length = jumbleTiger.size();
				for (int i = 0; i < length; ++i)
				{
					int index1 = (rand() % length);
					int index2 = (rand() % length);
					char temp = jumbleTiger[index1];
					jumbleTiger[index1] = jumbleTiger[index2];
					jumbleTiger[index2] = temp;

				}
				cout << jumbleTiger << endl;
				cout << "What is your Guess?" << endl;
				cin >> guessThree;
				if (guessThree == "tiger")
				{
					cout << "Congratulation! Level 3 Complete!" << endl;
					gameContinue = false;
				}
				if (gameContinue == false)
				{
					cout << "You have completed the Code Breaker Training Simulation Program for CIA Recruits!\nCONGRATULATIONS" << endl;
					char playAgain;
					cout << "Want to play again? (y/n)" << endl;
					cin >> playAgain;
					if (playAgain == 'y' || playAgain == 'Y')
					{
						gameContinue = true;
						return main();
					}
					if (playAgain == 'n' || playAgain == 'N')
					{
						cout << "GoodBye!" << endl;
						system("pause");
						return 0;
					}
				}
				else
				{
					cout << "Wrong guess\nHint: This animal is the largest of the cat species" << endl;
					thirdAnimal = 9;
				}
			}
		}
	}
}


