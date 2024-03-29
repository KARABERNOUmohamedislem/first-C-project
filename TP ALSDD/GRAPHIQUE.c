#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "dos.h"
#include "conio.h"
#include "conio2.h"
#include <time.h>
#include "GRAPHIQUE.h"

/**  Graphique d'entrer ******************************************************************/
void graphique_entrer()
{
    int i , d=65 , c = 15;

    cadre_aff(120,30,d-33,c-5);
    textcolor(255);
    gotoxy(d+20,2+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+28,2+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+36,2+c);
    textcolor(17);
    printf("%c%c%c",219,219,219);
    gotoxy(d+20,3+c);
    textcolor(255);
    printf("%c",219);
    gotoxy(d+28,3+c);
    printf("%c",219);
    gotoxy(d+20,4+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+28,4+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+36,4+c);
    printf("%c%c%c",219,219,219);
    gotoxy(d+20,5+c);
    printf("%c",219);
    gotoxy(d+33,5+c);
    printf("%c",219);
    gotoxy(d+36,5+c);
    printf("%c%c%c",219,219,219);
    gotoxy(d+20,6+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+28,6+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+36,6+c);
    printf("%c%c%c",219,219,219);
    printf("\n");
    for (i=0 ; i<=100 ; i++)
    {
        if ( i<44 || i>60)
        {
            textcolor(17);
            gotoxy(d+i-24,10+c);
            printf("%c%c",219,219);
            //delay(10);
        }
        textcolor(31);
        gotoxy(d+21,10+c);
        printf("chargement: %d %c\r",i,37);
        //delay(5);
    }
    gotoxy(d-7,c+14);
    textattr(207);
    printf("Bienvenue dans notre programme !");
    gotoxy(d+8,c+20);
    textattr(15);
    system("pause");
}

/**  writeCh ****************************************************************************************************/

void writeCh(char ch[],int temps) // Ecrit une chaine de caractere avec un temps d'arret entre chaque caractere
{
    int i;
    for (i=0 ; i < strlen(ch); i++)
    {
        printf("%c",ch[i]);
//        delay(temps);
    }
}

/**  Dessine menu ************************************************************************************************/

void dessine_menu (int x , int y) // Dessine le mot menu � partir du point M(x,y) de la console
{

 gotoxy(x,y);
 printf("%c%c%c%c%c   %c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c     %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+1);
 Sleep(50);
 printf("%c%c%c%c%c%c %c%c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c    %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+2);
 Sleep(50);
 printf("%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c        %c%c%c%c%c%c   %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+3);
 Sleep(50);
 printf("%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c  %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+3);
 Sleep(50);
 printf("%c%c%c  %c%c%c  %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+4);
 Sleep(50);
 printf("%c%c%c   %c   %c%c%c   %c%c%c        %c%c%c%c  %c%c%c%c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+5);
 Sleep(50);
 printf("%c%c%c       %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c    %c%c%c%c%c   %c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+6);
 Sleep(50);
 printf("%c%c%c       %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c     %c%c%c%c    %c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
}

/** cadre_aff ************************************************************************************************************************************/

void cadre_aff ( int l , int L , int x , int y ) // Dessine un cadre de longeur == L et de largeur == l � partir du point M(x,y) de la console
{
    int i ;

    gotoxy(x,y);
    printf("%c",201);
    gotoxy(x,y + L);
    printf("%c",200);
    gotoxy(x+l,y);
    printf("%c",187);
    gotoxy(x+l,y+L);
    printf("%c",188);
    for (i=1 ; i <= l-1 ; i++  )
    {
        gotoxy(x+i,y);
        printf("%c",205);
        gotoxy(x+i,y+L);
        printf("%c",205);
    }
    for (i=1 ; i <= L-1; i++ )
    {
        gotoxy(x,y+i);
        printf("%c",186);
        gotoxy(x+l,y+i);
        printf("%c",186);
    }

}

/** dessine_fleche *****************************************************************************************/
void dessine_fleche (int x, int y ) // Dessine une fleche � partir du point M(x,y) de la console

{
  int i ;
  gotoxy(x,y);
  printf("%c",218);
  gotoxy(x,y+5);
  printf("%c ",192);
  gotoxy(x+11,y);
  printf("%c",217);
  gotoxy(x+11,y+5);
  printf("%c",191);

  for ( i= 1 ; i <= 10 ; i++)
  {
      gotoxy(x+i,y);
      printf("%c",196);
      gotoxy(x+i,y+5);
      printf("%c",196);

      if ( i<=5)
      {
          gotoxy(x+11+i,y-3+i);
          printf("%c",92);
          gotoxy(x+11+i,y+8-i);
          printf("%c",47);
      }

      if ( i<= 4)
      {
          gotoxy(x,y+i);
          printf("|");
      }

      if ( i <= 2)
      {
          gotoxy(x+11,y-i);
          printf("|");
          gotoxy(x+11,y+5+i);
          printf("|");
      }
  }
}

/** retour menu ************************************************************************************************/

void retourMenu() // Affiche un message pour retourner au menu
{
    printf("APPUYEZ SUR N'IMPORTE QUELLE TOUCHE POUR RETOURNER AU MENU!\n");
    getch();
}


/** Menu principal **********************************************************************************************/

int menu() // Affiche le menu principal et donne le choix de l'utilisateur
{
        char *t [] = {  "1-  INCERER UN NOUVEAU UTILISATEUR                                    ",
                     "2-  SUPPRIMER UN UTILISATEUR                                          ",
                     "3-  MODIFIER UN UTILISATEUR                                           ",
                     "4-  AFFICHER LES CONTACTS SUIVIS PAR UN UTILISATEUR                   ",
                     "5-  FAIRE UNE RECHERCHE D'UTILISATEUR                                 ",
                     "6-  AFFICHER UNE LISTE DE SUGGESTION DE CONTACTS POUR UN UTILISATEUR  ",
                     "7-  RECUPERER LES DONNEES A PARTIR DU FICHIER                         ",
                     "8-  SAUVEGARDER VOTRE TRAVAIL DANS LE FICHIER                         ",
                     "9-  QUITTER                                                           "
                  };

    int n = 9 ; // TAILLE DU TABLEAU DE CHAINE
    int i , j , quite = 1, quite2 , y = 20  , x= 55 , y1= n+4 , x1 =  strlen(t[0])+6 , choix ;
    char c1,c2 ,c3 , c4 ;
    debut :
    entet();
    pied_de_page();
    textattr(15);
    dessine_menu(69,10);
    textattr(255);
    for (i=1 ; i<= x1 ; i++)
    {
        for ( j=1 ; j<= y1 ; j++)
        {
            gotoxy(x-4+i,y-3+j);
            printf("%c",219);
        }

    }
    printf("\n");
    textcolor(15);

    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 || c1 == 27 )
        {
            if ( c1 == 27 )
            {
                quite2 = 1 ;
                choix = 1 ;
                gotoxy(1,y);
                textattr(0);
                system("cls");
                textattr(204);
                for (i=1 ; i<= 46  ; i++)
                {
                    for ( j=1 ; j<= 4 ; j++)
                    {
                        gotoxy(x+13+i,y-3+j);
                        printf("%c",219);
                    }

                }
                textattr(207);
                gotoxy(x+15,y);
                printf("ETES VOUS SURE DE VOULOIR QUITTER ?!  (Y%cN) ",92);
                gotoxy(109,y);
                textattr(143);
                printf("O");
                while(quite2)
                {
                    c3 = getch();
                    if ( c3 == 13) quite2 = 0 ;
                    else if ( c3 == -32)
                    {
                        c4 = getch();
                        if (c4 == 77 && choix == 1 )
                        {
                            gotoxy(111,y);
                            textattr(143);
                            printf("N");
                            gotoxy(109,y);
                            textattr(207);
                            printf("O");
                            choix -- ;
                        }
                        if (c4 == 75 && choix == 0)
                        {
                            gotoxy(109,y);
                            textattr(143);
                            printf("O");
                            gotoxy(111,y);
                            textattr(207);
                            printf("N");
                            choix ++ ;
                        }
                    }

                }

                textattr(15);
                if ( choix == 1)
                {
                    i = -1 ;
                    quite = 0 ;
                }
                else  goto debut ;
            }
            else quite = 0 ;
        }

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(2);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(2);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(2);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(2);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    return i+1;
}

int menu_modif() // Affiche le menu principal et donne le choix de l'utilisateur
{
        char *t [] = {  "1-  LE NOM                      ",
                     "2-  LA VILLE                   ",
                     "3-  LES CENTRES D'INTERETS     ",
                     "4-  LES CONTACTS SUIVIS        ",
                     "5-  QUITTER                    "

                  };

    int n = 5 ; // TAILLE DU TABLEAU DE CHAINE
    int i , j , quite = 1, quite2 , y = wherey()  , x= wherex() , y1= n+4 , x1 =  strlen(t[0])+6 , choix ;
    char c1,c2 ,c3 , c4 ;
    debut :

    textattr(15);

    textattr(255);

    printf("\n");
    textcolor(15);

    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 || c1 == 27 )
        {
            if ( c1 == 27 )
            {
                quite2 = 1 ;
                choix = 1 ;
                gotoxy(1,y);
                textattr(0);
                system("cls");
                textattr(204);
                for (i=1 ; i<= 46  ; i++)
                {
                    for ( j=1 ; j<= 4 ; j++)
                    {
                        gotoxy(x+13+i,y-3+j);
                        printf("%c",219);
                    }

                }
                textattr(207);
                gotoxy(x+15,y);
                printf("ETES VOUS SURE DE VOULOIR QUITTER ?!  (Y%cN) ",92);
                gotoxy(109,y);
                textattr(143);
                printf("O");
                while(quite2)
                {
                    c3 = getch();
                    if ( c3 == 13) quite2 = 0 ;
                    else if ( c3 == -32)
                    {
                        c4 = getch();
                        if (c4 == 77 && choix == 1 )
                        {
                            gotoxy(111,y);
                            textattr(143);
                            printf("N");
                            gotoxy(109,y);
                            textattr(207);
                            printf("O");
                            choix -- ;
                        }
                        if (c4 == 75 && choix == 0)
                        {
                            gotoxy(109,y);
                            textattr(143);
                            printf("O");
                            gotoxy(111,y);
                            textattr(207);
                            printf("N");
                            choix ++ ;
                        }
                    }

                }

                textattr(15);
                if ( choix == 1)
                {
                    i = -1 ;
                    quite = 0 ;
                }
                else  goto debut ;
            }
            else quite = 0 ;
        }

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(2);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(2);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(2);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(2);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    return i+1;
}


int menu_oui_non() // Affiche le menu principal et donne le choix de l'utilisateur
{
        char *t [] = {  "1-  OUI ",
                     "2-  NON ",
        };

    int n = 2 ; // TAILLE DU TABLEAU DE CHAINE
    int i , j , quite = 1, quite2 , y = wherey()  , x= wherex()  , choix ;
    char c1,c2 ,c3 , c4 ;
    debut :

    textattr(15);

    textattr(255);

    printf("\n");
    textcolor(15);

    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 || c1 == 27 )
        {
            if ( c1 == 27 )
            {
                quite2 = 1 ;
                choix = 1 ;
                gotoxy(1,y);
                textattr(0);
                system("cls");
                textattr(204);
                for (i=1 ; i<= 46  ; i++)
                {
                    for ( j=1 ; j<= 4 ; j++)
                    {
                        gotoxy(x+13+i,y-3+j);
                        printf("%c",219);
                    }

                }
                textattr(207);
                gotoxy(x+15,y);
                printf("ETES VOUS SURE DE VOULOIR QUITTER ?!  (Y%cN) ",92);
                gotoxy(109,y);
                textattr(143);
                printf("O");
                while(quite2)
                {
                    c3 = getch();
                    if ( c3 == 13) quite2 = 0 ;
                    else if ( c3 == -32)
                    {
                        c4 = getch();
                        if (c4 == 77 && choix == 1 )
                        {
                            gotoxy(111,y);
                            textattr(143);
                            printf("N");
                            gotoxy(109,y);
                            textattr(207);
                            printf("O");
                            choix -- ;
                        }
                        if (c4 == 75 && choix == 0)
                        {
                            gotoxy(109,y);
                            textattr(143);
                            printf("O");
                            gotoxy(111,y);
                            textattr(207);
                            printf("N");
                            choix ++ ;
                        }
                    }

                }

                textattr(15);
                if ( choix == 1)
                {
                    i = -1 ;
                    quite = 0 ;
                }
                else  goto debut ;
            }
            else quite = 0 ;
        }

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(2);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(1);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(2);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(2);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    if (i>0){i=0;}else {i=1;}
    return i;
}

int menu_RECHERCHE() // Affiche le menu principal et donne le choix de l'utilisateur
{
        char *t [] = {  "1-  PAR NOM   ",
                     "2-  PAR VILLE ",
        };

    int n = 2 ; // TAILLE DU TABLEAU DE CHAINE
    int i , j , quite = 1, quite2 , y = wherey()  , x= wherex()  , choix ;
    char c1,c2 ,c3 , c4 ;
    debut :

    textattr(15);

    textattr(255);

    printf("\n");
    textcolor(15);

    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 || c1 == 27 )
        {
            if ( c1 == 27 )
            {
                quite2 = 1 ;
                choix = 1 ;
                gotoxy(1,y);
                textattr(0);
                system("cls");
                textattr(204);
                for (i=1 ; i<= 46  ; i++)
                {
                    for ( j=1 ; j<= 4 ; j++)
                    {
                        gotoxy(x+13+i,y-3+j);
                        printf("%c",219);
                    }

                }
                textattr(207);
                gotoxy(x+15,y);
                printf("ETES VOUS SURE DE VOULOIR QUITTER ?!  (Y%cN) ",92);
                gotoxy(109,y);
                textattr(143);
                printf("O");
                while(quite2)
                {
                    c3 = getch();
                    if ( c3 == 13) quite2 = 0 ;
                    else if ( c3 == -32)
                    {
                        c4 = getch();
                        if (c4 == 77 && choix == 1 )
                        {
                            gotoxy(111,y);
                            textattr(143);
                            printf("N");
                            gotoxy(109,y);
                            textattr(207);
                            printf("O");
                            choix -- ;
                        }
                        if (c4 == 75 && choix == 0)
                        {
                            gotoxy(109,y);
                            textattr(143);
                            printf("O");
                            gotoxy(111,y);
                            textattr(207);
                            printf("N");
                            choix ++ ;
                        }
                    }

                }

                textattr(15);
                if ( choix == 1)
                {
                    i = -1 ;
                    quite = 0 ;
                }
                else  goto debut ;
            }
            else quite = 0 ;
        }

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(2);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(1);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(2);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(2);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }

    return i+1;
}

int menu_suggestion() // Affiche le menu principal et donne le choix de l'utilisateur
{
        char *t [] = {  "1-  PAR INTERET EN COMMUN          ",
                     "2-  PAR CONTACTS SUIVIS EN COMMUN  ",
        };

    int n = 2 ; // TAILLE DU TABLEAU DE CHAINE
    int i , j , quite = 1, quite2 , y = wherey()  , x= wherex() , choix ;
    char c1,c2 ,c3 , c4 ;
    debut :

    textattr(15);

    textattr(255);

    printf("\n");
    textcolor(15);

    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 || c1 == 27 )
        {
            if ( c1 == 27 )
            {
                quite2 = 1 ;
                choix = 1 ;
                gotoxy(1,y);
                textattr(0);
                system("cls");
                textattr(204);
                for (i=1 ; i<= 46  ; i++)
                {
                    for ( j=1 ; j<= 4 ; j++)
                    {
                        gotoxy(x+13+i,y-3+j);
                        printf("%c",219);
                    }

                }
                textattr(207);
                gotoxy(x+15,y);
                printf("ETES VOUS SURE DE VOULOIR QUITTER ?!  (Y%cN) ",92);
                gotoxy(109,y);
                textattr(143);
                printf("O");
                while(quite2)
                {
                    c3 = getch();
                    if ( c3 == 13) quite2 = 0 ;
                    else if ( c3 == -32)
                    {
                        c4 = getch();
                        if (c4 == 77 && choix == 1 )
                        {
                            gotoxy(111,y);
                            textattr(143);
                            printf("N");
                            gotoxy(109,y);
                            textattr(207);
                            printf("O");
                            choix -- ;
                        }
                        if (c4 == 75 && choix == 0)
                        {
                            gotoxy(109,y);
                            textattr(143);
                            printf("O");
                            gotoxy(111,y);
                            textattr(207);
                            printf("N");
                            choix ++ ;
                        }
                    }

                }

                textattr(15);
                if ( choix == 1)
                {
                    i = -1 ;
                    quite = 0 ;
                }
                else  goto debut ;
            }
            else quite = 0 ;
        }

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(2);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(1);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(2);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(2);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }

    return i+1;
}


/** L'ENTETE *************************************************************************************************/
void entet ()
{
    int i ;
    gotoxy(69,1);
    printf("REPUBLIQUE ALGERIENNE DEMOCRATIQUE ET POPULAIRE ");
    gotoxy(74,3);
    printf("ECOLE SUPERIEURE D'INFORMATIQUE (ESI)\n");
    for (i=1 ; i <= 189 ; i++) {color(10,0); printf("_");color(15,0);}
    printf("\n") ;
}

/** PIED DE PAGE ************************************* *******************************************************/
void pied_de_page ()

{
    int i ;
    gotoxy(1,35);
    for (i=1 ; i <= 189 ; i++){ color(10,0); printf("_"); color(15,0);}
    gotoxy(89,37);
    printf("REALISE PAR:");
    gotoxy(75,39);
    printf("KARABERNOU Mohamed Islem   |   TOUAZI Riadh");
    gotoxy(82,41);
    printf("SECTION B   |   GROUPE 5");
    gotoxy(89,43);
    printf("ENCADRE PAR:");
    gotoxy(83,45);
    printf("     Dr.CHARABI LILA");
    gotoxy(80,47);
    printf("ANNEE UNIVERSITAIRE : 2018/2019\n");
    for (i=1 ; i <= 189 ; i++) {color(10,0); printf("_"); color(15,0);}

}


