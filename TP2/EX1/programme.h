#include<stdio.h>
#include<stdlib.h>

struct t_point
{
        int L;
        int l;
};
typedef struct t_point t_point;

//declaration de la nouvelle stricture de donnees
	void saisie(t_point *);  //saisir dans la nouvelle stricture de donnees;
	void affichage(t_point );  //afficher la  nouvelle stricture de donnees;
	char ** tab(t_point );  //reserver une zone memoire pour le nouveau tableau;
	void vider(t_point ,char** ); //vider la zone memoire a la fin de l'execution du code ;
	char **  tab_saisie(t_point ,char ** ); //le saisie dans le nouveau tableau;
	t_point get_point();  //retenir la position du point dont on veut :-) ;
	void flood_fill(char**  , t_point  , t_point  , char  , char  ); // la fonction la plus importante de l'exercice(txa rahha le but diallo nabek);
