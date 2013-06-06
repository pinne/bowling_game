CC=gcc
CFLAGS=-std=c99 -Wall

bowling_game: bowling_game.o bowling_game_test.o
	$(CC) bowling_game.o bowling_game_test.o -o bowling_game

clean:
	rm -rf *o bowling_game
