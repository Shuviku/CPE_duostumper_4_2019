/*
** EPITECH PROJECT, 2019
** main.h
** File description:
** main.h
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/types.h>

typedef struct pokemon {
  char *name;
  int attack;
  int def;
  int speed;
  int health;
}pokemon_t;
