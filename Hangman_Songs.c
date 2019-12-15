

#include <stdio.h>
#include "MyLib.h"
#define MAX_INPUT 1000
#include <string.h>
#include <ctype.h>

int firstline(char firstlineoriginal[MAX_INPUT], char firstlineupper[MAX_INPUT], char firstlinedash[MAX_INPUT]);
int title(char titleoriginal[MAX_INPUT], char titleupper[MAX_INPUT], char titledash[MAX_INPUT]);
int artist(char artistoriginal[MAX_INPUT], char artistupper[MAX_INPUT], char artistdash[MAX_INPUT]);
int decimal;
int counter;
int counter1;
int counter2;
char verify;
char verify1;


typedef struct MUSIC
{
	char artist[MAX_INPUT];
	char title[MAX_INPUT];
	char firstline[MAX_INPUT];
	
} SONG;

enum SONGPICK
	{
		songpick1=1, songpick2, songpick3, songpick4, songpick5
	};

int main(void)
{
#include "songlist.txt"

SONG *song1ptr;
SONG *song2ptr;
SONG *song3ptr;
SONG *song4ptr;
SONG *song5ptr;

song1ptr = &song1;
song2ptr = &song2;
song3ptr = &song3;
song4ptr = &song4;
song5ptr = &song5;
	
	int songnum;

	printf("\n\n Welcome to 00000011 STRIKES - YOUR'RE OUT - the CSE version\n\n\n");
	printf("Pick a song\n\n\n");
	printf("0. Exit\n\n");
	printf("1. Song 1\n\n");
	printf("2. Song 2\n\n");
	printf("3. Song 3\n\n");
	printf("4. Song 4\n\n");
	printf("5. Song 5\n\n");
	printf("Song Choice ");
	scanf("%d", &songnum);
	getchar();
	printf("\n\n\n");
	
	char firstlineoriginal[MAX_INPUT];
	char firstlineupper[MAX_INPUT];
	char firstlinedash[MAX_INPUT];
	char titleoriginal[MAX_INPUT];
	char titleupper[MAX_INPUT];
	char titledash[MAX_INPUT];
	char artistoriginal[MAX_INPUT];
	char artistupper[MAX_INPUT];
	char artistdash[MAX_INPUT];
	
	
	switch (songnum)
	{
		case songpick1	: printf(" ");
						  
						  strcpy(firstlineoriginal, song1ptr->firstline);
						  strcpy(firstlineupper, song1ptr->firstline);
						  strcpy(firstlinedash, song1ptr->firstline);
						  
						  firstline(firstlineoriginal, firstlineupper, firstlinedash);
						 
						if((verify == 'y' || verify == 'Y'))	
						{	
							
							strcpy(titleoriginal, song1ptr->title);
							strcpy(titleupper, song1ptr->title);
							strcpy(titledash, song1ptr->title);
						 
							title(titleoriginal, titleupper, titledash);
						}	  
						
						if (verify == 'n' || verify == 'N')
						{
							return 0;
						}	
						
						if(decimal<3 && (verify1 == 'y' || verify1 == 'Y'))
						{	
						  decimal = 0;
						 
						  strcpy(artistoriginal, song1ptr->artist);
						  strcpy(artistupper, song1ptr->artist);
						  strcpy(artistdash, song1ptr->artist);
						 
						  artist(artistoriginal, artistupper, artistdash);
						}
					      break;
						  
		case songpick2	: printf(" ");
						  
						  strcpy(firstlineoriginal, song2ptr->firstline);
						  strcpy(firstlineupper, song2ptr->firstline);
						  strcpy(firstlinedash, song2ptr->firstline);
						  
						  firstline(firstlineoriginal, firstlineupper, firstlinedash);
						 
						if((verify == 'y' || verify == 'Y'))	
						{	
							
							strcpy(titleoriginal, song2ptr->title);
							strcpy(titleupper, song2ptr->title);
							strcpy(titledash, song2ptr->title);
						 
							title(titleoriginal, titleupper, titledash);
						}	  
						
						if (verify == 'n' || verify == 'N')
						{
							return 0;
						}	
						
						if(decimal<3 && (verify1 == 'y' || verify1 == 'Y'))
						{	
						  decimal = 0;
						  
						  strcpy(artistoriginal, song2ptr->artist);
						  strcpy(artistupper, song2ptr->artist);
						  strcpy(artistdash, song2ptr->artist);
						 
						  artist(artistoriginal, artistupper, artistdash);
						}
						  break;
						  
		case songpick3	: printf(" ");
						  
						  strcpy(firstlineoriginal, song3ptr->firstline);
						  strcpy(firstlineupper, song3ptr->firstline);
						  strcpy(firstlinedash, song3ptr->firstline);
						  
						  firstline(firstlineoriginal, firstlineupper, firstlinedash);
						 
						if((verify == 'y' || verify == 'Y'))	
						{	
							
							strcpy(titleoriginal, song3ptr->title);
							strcpy(titleupper, song3ptr->title);
							strcpy(titledash, song3ptr->title);
						 
							title(titleoriginal, titleupper, titledash);
						}	  
						
						if (verify == 'n' || verify == 'N')
						{
							return 0;
						}	
						
						if(decimal<3 && (verify1 == 'y' || verify1 == 'Y'))
						{	
						  decimal = 0;
						  
						  strcpy(artistoriginal, song3ptr->artist);
						  strcpy(artistupper, song3ptr->artist);
						  strcpy(artistdash, song3ptr->artist);
						 
						  artist(artistoriginal, artistupper, artistdash);
						}
						  break;
						  
		case songpick4	: printf(" ");
						  
						  strcpy(firstlineoriginal, song4ptr->firstline);
						  strcpy(firstlineupper, song4ptr->firstline);
						  strcpy(firstlinedash, song4ptr->firstline);
						  
						  firstline(firstlineoriginal, firstlineupper, firstlinedash);
						 
						if((verify == 'y' || verify == 'Y'))	
						{	
							
							strcpy(titleoriginal, song4ptr->title);
							strcpy(titleupper, song4ptr->title);
							strcpy(titledash, song4ptr->title);
						 
							title(titleoriginal, titleupper, titledash);
						}	  
						
						if (verify == 'n' || verify == 'N')
						{
							return 0;
						}	
						
						if(decimal<3 && (verify1 == 'y' || verify1 == 'Y'))
						{	
						  decimal = 0;
						  
						  strcpy(artistoriginal, song4ptr->artist);
						  strcpy(artistupper, song4ptr->artist);
						  strcpy(artistdash, song4ptr->artist);
						 
						  artist(artistoriginal, artistupper, artistdash);
						}
						  break;
						  
		case songpick5	: printf(" ");
						  
						  strcpy(firstlineoriginal, song5ptr->firstline);
						  strcpy(firstlineupper, song5ptr->firstline);
						  strcpy(firstlinedash, song5ptr->firstline);
						  
						  firstline(firstlineoriginal, firstlineupper, firstlinedash);
						 
						if((verify == 'y' || verify == 'Y'))	
						{	
							
							strcpy(titleoriginal, song5ptr->title);
							strcpy(titleupper, song5ptr->title);
							strcpy(titledash, song5ptr->title);
						 
							title(titleoriginal, titleupper, titledash);
						}	  
						
						if (verify == 'n' || verify == 'N')
						{
							return 0;
						}	
						
						if(decimal<3 && (verify1 == 'y' || verify1 == 'Y'))
						{	
						  decimal = 0;
						  
						  strcpy(artistoriginal, song5ptr->artist);
						  strcpy(artistupper, song5ptr->artist);
						  strcpy(artistdash, song5ptr->artist);
						 
						  artist(artistoriginal, artistupper, artistdash);
						}
						  break;
						  
		default			: printf("PROGRAM WILL EXIT, GAME OVER\n\n");

	}
}


int firstline(char firstlineoriginal[MAX_INPUT], char firstlineupper[MAX_INPUT], char firstlinedash[MAX_INPUT])
{
	printf("Round 1 - Here's the song lyric you need to guess\n\n\n\n");
	char letter;
	int length;
	length = strlen(firstlineoriginal);
	
	
	int run = 1;
						  
						  int i = 0;
						  
						  for (i = 0; firstlineupper[i]!='\0'; i++)
								{
									if(firstlineupper [i] >= 'a' && firstlineupper[i] <= 'z')
									{
										firstlineupper[i] = firstlineupper[i]-32;
									}	
								}  
								
						  for (i = 0; firstlinedash[i]!='\0'; i++)
								{
									if(firstlinedash [i] >= 'a' && firstlinedash[i] <= 'z' || firstlinedash [i] >= 'A' && firstlinedash[i] <= 'Z')
									{
										firstlinedash[i] = '-';
									}	
								}   
						  
								printf("%s", firstlinedash);	
								
						  while(run)
							{
								printf("\n\n");
								printf("Player : Guess a letter : ");
								scanf("%c", &letter);
								getchar();
								printf("\n\n");
								letter = toupper(letter);
								
								
								
								char *match;
								match = strpbrk(&letter, firstlineupper);
								
								if (counter == 15 && length == 34)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}	
								}	
								
								if (counter == 12 && length == 31)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
									
								}	
								
								if (counter == 15 && length == 25)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter == 13 && length == 27)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter == 14 && length == 37)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter == 18 && length == 52)
								{
									
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter == 13 && length == 38)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter == 11 && length == 28)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter == 14 && length == 29)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter == 15 && length == 27)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 2?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify);
									getchar();
									printf("\n");
									
									if (verify == 'y' || verify == 'Y')
									{
										return run = 0;
									}
									
									if (verify == 'n' || verify == 'N')
									{
										return run = 0;
									}
								}
								
								if(match)
								{
									char origletter = tolower(letter);

									
									for(i = 0; i<MAX_INPUT; i++)
									{
										if (firstlineoriginal[i] == letter || firstlineoriginal[i] == origletter)
										{
											if(firstlinedash[i] == '-')
											{
												firstlinedash[i] = firstlineoriginal[i];
												
											}
										}	
									}	
									counter++;
								}

								else if (decimal < 2 && counter )
									
									while (decimal < 3)
									{
										decimal++;
										printf("Strike ");
										ConvertDecimalToBinary(decimal);
										printf("\n\n");
										
										break;
									}
									
								
								else
								{
										decimal++;
										printf("Strike ");
										ConvertDecimalToBinary(decimal);
										printf("\n\n");
										ConvertDecimalToBinary(decimal);
										printf(" Strikes - YOU'RE OUT!!");
										printf("\n\n\n");
										printf("Game over");
										printf("\n\n\n");
										return run = 0;
								}	
								
								
								printf("%s", firstlinedash);
								//printf("%d" , counter);
							}
}

int title(char titleoriginal[MAX_INPUT], char titleupper[MAX_INPUT], char titledash[MAX_INPUT])
{
	printf("Round 2 - Here's the song title you need to guess\n\n\n\n");
	char letter;
	int length;
	length = strlen(titleoriginal);
	
	int run = 1;
						  
						  int i = 0;
						  
						  for (i = 0; titleupper[i]!='\0'; i++)
								{
									if(titleupper [i] >= 'a' && titleupper[i] <= 'z')
									{
										titleupper[i] = titleupper[i]-32;
									}	
								}  
								
						  for (i = 0; titledash[i]!='\0'; i++)
								{
									if(titledash [i] >= 'a' && titledash[i] <= 'z' || titledash [i] >= 'A' && titledash[i] <= 'Z')
									{
										titledash[i] = '-';
									}	
								}   
						  
								printf("%s", titledash);	
								
						  while(run)
							{
								printf("\n\n");
								printf("Player : Guess a letter : ");
								scanf("%c", &letter);
								getchar();
								printf("\n\n");
								letter = toupper(letter);
								
								
								
								char *match;
								match = strpbrk(&letter, titleupper);
								
								if (counter1 == 11  && length == 21 )
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}	
								}	
								
								if (counter1 == 5 && length == 5)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
									
								}	
								
								if (counter1 == 10 && length == 14)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter1 == 13 && length == 27)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter1 == 10 && length == 27)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter1 == 13 && length == 15 )
								{
									
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter1 == 1 && length == 3)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter1 == 7  && length == 6 )
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter1 == 13  && length == 20)
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}	
								
								if (counter1 == 10 && length == 11 )
								{
									printf("Congratulations! You guessed correctly - ready for Bonus Round 3?\n\n");
									printf("Do you want to play the next round? ");
									scanf("%c", &verify1);
									getchar();
									printf("\n");
									
									if (verify1 == 'y' || verify1 == 'Y')
									{
										return run = 0;
									}
									
									if (verify1 == 'n' || verify1 == 'N')
									{
										return run = 0;
									}
								}
								
								if(match)
								{
									char origletter = tolower(letter);
									
									
									
									for(i = 0; i<MAX_INPUT; i++)
									{
										if (titleoriginal[i] == letter || titleoriginal[i] == origletter)
										{
											if(titledash[i] == '-')
											{
												titledash[i] = titleoriginal[i];
											}
										}	
									}	
									
									counter1++;
								}
									
								
								else if (decimal < 2)
										while (decimal < 3)
										{
											decimal++;
											printf("Strike ");
											ConvertDecimalToBinary(decimal);
											printf("\n\n");
											
											break;
										}
										
									
								else
								{
										decimal++;
										printf("Strike ");
										ConvertDecimalToBinary(decimal);
										printf("\n\n");
										ConvertDecimalToBinary(decimal);
										printf(" Strikes - YOU'RE OUT!!");
										printf("\n\n\n");
										printf("Game over");
										printf("\n\n\n");
										return run = 0;
								}	
								
								printf("%s", titledash);
								//printf("%d" , counter1);
							}
}

int artist(char artistoriginal[MAX_INPUT], char artistupper[MAX_INPUT], char artistdash[MAX_INPUT])
{
	printf("Round 3 - Here's the artist you need to guess\n\n\n\n");
	char letter;
	int length;
	length = strlen(artistoriginal);
	
	int run = 1;
						  
						  int i = 0;
						  
						  for (i = 0; artistupper[i]!='\0'; i++)
								{
									if(artistupper [i] >= 'a' && artistupper[i] <= 'z')
									{
										artistupper[i] = artistupper[i]-32;
									}	
								}  
								
						  for (i = 0; artistdash[i]!='\0'; i++)
								{
									if(artistdash [i] >= 'a' && artistdash[i] <= 'z' || artistdash [i] >= 'A' && artistdash[i] <= 'Z')
									{
										artistdash[i] = '-';
									}	
								}   
						  
								printf("%s", artistdash);	
								
						  while(run)
							{
								printf("\n\n");
								printf("Player : Guess a letter : ");
								scanf("%c", &letter);
								getchar();
								printf("\n\n");
								letter = toupper(letter);
								
								
								
								char *match;
								match = strpbrk(&letter, artistupper);
								
								if (counter2 == 7   && length == 7 )
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 5 && length == 5)
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
									
								}	
								
								if (counter2 == 9 && length == 14)
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 9 && length == 15)
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 7 && length == 8)
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 3 && length == 3 )
								{
									
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 13 && length == 20)
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 9  && length == 13 )
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 8  && length == 9 )
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}	
								
								if (counter2 == 15  && length == 23 )
								{
									printf("Congratulations! You guessed correctly - YOU WON!!\n\n");
									
									return run = 0;	
								}
							
								if(match)
								{
									char origletter = tolower(letter);
									
									
									
									for(i = 0; i<MAX_INPUT; i++)
									{
										if (artistoriginal[i] == letter || artistoriginal[i] == origletter)
										{
											if(artistdash[i] == '-')
											{
												artistdash[i] = artistoriginal[i];
											}
										}	
									}	
								
								counter2++;
								}

								else if (decimal < 2)
									
									while (decimal < 3)
									{
										decimal++;
										printf("Strike ");
										ConvertDecimalToBinary(decimal);
										printf("\n\n");
										
										break;
									}
									
								
								else
								{
										decimal++;
										printf("Strike ");
										ConvertDecimalToBinary(decimal);
										printf("\n\n");
										ConvertDecimalToBinary(decimal);
										printf(" Strikes - YOU'RE OUT!!");
										printf("\n\n\n");
										printf("Game over");
										printf("\n\n\n");
										return run = 0;
								}	
								
								printf("%s", artistdash);
								//printf("%d" , counter2);
							}
}



