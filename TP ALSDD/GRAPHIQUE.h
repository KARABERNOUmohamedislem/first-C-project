#ifndef GRAPHIQUE_H_INCLUDED
#define GRAPHIQUE_H_INCLUDED


/* PROTOTYPES DES MODULES : */

/** 1- Graphique d'entrer *****************************************************************************************/
void graphique_entrer();
/** 2- writeCh ****************************************************************************************************/
void writeCh(char ch[],int temps);
/** 3- Dessine menu ***********************************************************************************************/
void dessine_menu (int x , int y);
/** 4- cadre_aff **************************************************************************************************/
void cadre_aff ( int l , int L , int x , int y );
/** 5- dessine_fleche *********************************************************************************************/
void dessine_fleche (int x, int y );
/** 6- retour menu ************************************************************************************************/
void retourMenu();
/** 8 - Menu principal ********************************************************************************************/
int menu();
int menu_modif() ;
int menu_oui_non();
int menu_RECHERCHE();
int menu_suggestion();
/** 9- Guide du menu **********************************************************************************************/
//void guide_menu (int x , int y );
/** 10- L'entete **************************************************************************************************/
void entet();

#endif // GRAPHIQUE_H_INCLUDED
