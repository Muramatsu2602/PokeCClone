#ifndef _UTIL_H
#define _UTIL_H

#include "pokemon.h"
#define DEXFILE "data/pokemon.csv"
#define SAVEFILE "data/poketeam.dat"
#define MAXTEAMSIZE 6


//typedef struct _coord_t coord_t;
typedef struct _coord_t
{
    unsigned int x;
    unsigned int y;
}coord_t;

void addStringTerminator(char* myString);
pokemon_t* randPkmn(pokemon_t** pkdex, int totalPokemon);


#endif //_UTIL_H
