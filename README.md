# SONG_HANGMAN_GAME

Classic classic game Hangman and uses songs for the phrases to be guessed. 
The first round of the game is guessing the song's first lyric. The player will 
choose from a menu of 5 songs. Based on the menu choice, a song lyric will be displayed
with all letters replaced with dashes. Any numbers or punctuation will remain. The player
will enter guesses as individual letters. If the player guesses a correct letter, then
the phrase will be redisplayed with the missing letter filled in. If the user guesses 
wrong, they will earn a strike. Strikes will be display in binary. 
If the player earns three strikes, then the game is over and the player has lost.

Rules of the Game:

1. A player's guess must replace both the uppercase and lowercase versons of the guessed lettter.
2. All phrases to be guessed will contain upper and lowercase letters and will be displayed with those letters.
3. When the user guesses an incorrect letter, the number of strikes will be displayed in binary. Guessing punctuation or
numbers counts as an incorrect letter/guess and earns the player a strike.
4. If the player wins Round 1 (song lyric), then the game asks if the player wants to play Round 2 (the song title).
5. If the player wins Round 2 (song title), then the game asks if the player want to play Round 3 (the song's artist).
6. The number of strikes should be reset after each round.
*****************************************
File included: 
Hangman_Songs.c, MyLib.c, MyLib.h, makefile, songlist.txt 
**************
Compilation instructions:
in Unix shell:

->make

Hangman_Songs.e

