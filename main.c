/*
** EPITECH PROJECT, 2019
** main.h
** File description:
** main.h
*/

#include "main.h"

void get_stat(pokemon_t *pokemon)
{
    DIR *folder = NULL;
    struct dirent *file = NULL;
    folder = opendir("pokecfg");
    if (folder == NULL)
        exit (84);
    while((file = readdir(folder)) != NULL)
        printf("%s\n", file->d_name);
}

int main(int ac, char **av)
{
    pokemon_t *pokemon = malloc(sizeof(pokemon_t));

    if (ac != 3)
        return (84);
    get_stat(pokemon);
}
