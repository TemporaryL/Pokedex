#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Pokemon {
	char pokemon_name[50];
	char pokemon_type[50];
	char ability[50];

	struct Pokemon *next;
	// next *Pokemon;
	} Pokemon;

Pokemon* headPokemon = NULL;

typedef struct Player {
	char player_name[50];

	// struct Player *next;
	// next *Player;
	} Player;

// Player* top = NULL;

typedef struct Pokedex {
	// struct headPokemon;
	// struct Player;
	// next *Player;
	} Pokedex;

struct Pokemon *NewPokemonNode(const char* pokemon_name, char* pokemon_type, char* ability){
	struct Pokemon *new_pokemon = NULL; // Establish that we want to use the Pokemon structure
	new_pokemon = malloc(sizeof(struct Pokemon)); // Allocate memory according to the size of the strings passed to the function
	if (new_pokemon != NULL){ // Proceed if the new_pokemon variable is not null
		strcpy(new_pokemon->pokemon_name, pokemon_name); // Using strcpy(dest, src), takes, the character array from the function argument to the member variable of the new_pokemon struct as a destination
		strcpy(new_pokemon->pokemon_type, pokemon_type); // As above, but with the pokemon type.
		strcpy(new_pokemon->ability, ability); // Again, as above, but with pokemon ability
		// printf("Created new pokemon at %p\n", new_pokemon); // Testing to see the memory addresses of each newly created pokemon node (Commented as this is unnecessary for a user to see)
		new_pokemon->next = NULL; // Ends the linked list, setting next to NULL
	}
	return new_pokemon; // Returns the new pokemon node
};
// Player *NewPlayerNode(const char* player_name){
// 	Player *new_player = NULL; //
// 	new_player = malloc(sizeof(struct Player));
// 	if (new_player != NULL){
// 		strcpy(new_player->player_name, player_name);
// 		printf("Created new player at %p\n", NewPlayerNode);
// 		new_player->next = NULL;
// 	}
// 	return new_player;
// };

void DisplayPlayerDetails(){
	printf("DisplayPlayerDetails function called\n");
};

void AddPokemonToList(Pokemon* list, Pokemon* toAppend) {
    Pokemon* current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = toAppend;
}

void ListPokemon(Pokemon* list) {
    Pokemon* current = list;
    while (current != NULL) {
        printf("%s, %s, %s\n", current->pokemon_name, current->pokemon_type, current->ability);
        current = current->next;
    }
}

// typedef struct Pokedex(player_name){
// 	struct Pokemon 
// };

// void DisplayPokemonDetails(pokedex, name){};
// void ListPlayers(pokedex){// for player in players, printf("%s: pokemons")};

// void AddPokemonToPlayer(pokedex, player_name, pokemon_name){};

int main(){
	// Add Pokemons with name, type, and ability
	headPokemon = NewPokemonNode("Bulbasaur","Grass","Vine Whip");
	AddPokemonToList(headPokemon, NewPokemonNode("Charmander","Fire","Ember"));
	AddPokemonToList(headPokemon, NewPokemonNode("Squirtle","Water","Water Gun"));
	AddPokemonToList(headPokemon, NewPokemonNode("Weedle","Bug","Poison Sting"));
	AddPokemonToList(headPokemon, NewPokemonNode("Pidgey","Normal","Wing Attack"));
	AddPokemonToList(headPokemon, NewPokemonNode("Jigglypuff","Normal","Body Slam"));
	AddPokemonToList(headPokemon, NewPokemonNode("Zubat","Poison","Poison Fang"));
	AddPokemonToList(headPokemon, NewPokemonNode("Oddish","Grass","Acid"));
	AddPokemonToList(headPokemon, NewPokemonNode("Diglett","Ground","Earth Power"));
	AddPokemonToList(headPokemon, NewPokemonNode("Mankey","Fighting","Close Combat"));
	AddPokemonToList(headPokemon, NewPokemonNode("Abra","Psychic","Dream Eater"));
	AddPokemonToList(headPokemon, NewPokemonNode("Pikachu","Electric","Thunder Shock"));
	while(1){
		// char command[3];
		char choice;
		printf("\nType '0' to quit\n");
		printf("1. Print all players\n");
		printf("2. Print all pokemon\n");
		printf("3. Add a pokemon\n");
		printf("4. Add a player\n");
		printf("5. Search for player\n");
		printf("Enter a command: \n");
		scanf("%d",&choice);
		switch(choice){
			case 0:
				printf("Quitting\n");
				exit(0);
				break;
			case 1:
				printf("Printing all players:\n");
				// ListPlayers(top);
				break;
			case 2:
				printf("Printing all pokemon:\n");
				ListPokemon(headPokemon); // Prints the entire linked list, starting with the first list node
				printf("\n");
				break;
			case 3:
				printf("Provide the details for a new pokemon (name, type, ability), using a comma separated list: ");
				printf("\n");
				break;
				// AddPokemonToList(headPokemon, NewPokemonNode("Pikachu","Electric","Thunder Shock"));
			case 4:
				printf("Name of the player to add: ");
				// NewPlayerNode(player);
				printf("\n");
				break;
			case 5:
				printf("Type the player to search: ");
				printf("\n");
				break;
		}
		// fgets(command, 3, stdin);
		// if (strcmp("q\n", command) == 0)
		// {
		// 	printf("Quitting");
		// 	break;
		// }
		// else if (strcmp("1\n", command) == 0){
		// 	printf("Printing all players:\n");
		// 	// ListPlayers(NewPlayerNode);
		// }
		// else if (strcmp("2\n", command) == 0){
		// 	printf("Printing all pokemon:\n");
		// 	ListPokemon(headPokemon);
		// }
		// else if (strcmp("3\n", command) == 0){
		// 	printf("Provide the details for a new pokemon (name, type, ability): ");
		// 	// getNewPokemon(pokemon_name, pokemon_type, ability);
		// }
		// else if (strcmp("4\n", command) == 0){
		// 	printf("Name of the player to add: ");
		//	char player;
		//	NewPlayerNode(player)
		// }
		// else if (strcmp("5\n", command) == 0){
		// 	printf("Type the player to search: ");
		// }
	}
	// DisplayPokemonDetails();
	// DisplayPlayerDetails();
	return 0;
};