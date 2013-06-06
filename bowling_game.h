#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

struct bowling_game;
struct bowling_game *bowling_game_create();
void bowling_game_init();
void bowling_game_roll(struct bowling_game*, int pins);
int  bowling_game_score(struct bowling_game*);
