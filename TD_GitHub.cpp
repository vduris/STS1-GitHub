//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
        bool resultat;

        if (age >= 18)
        {
                resultat = true;
        }
        else if(age<18)
        {
                resultat = false;
        }
        return resultat;
}

int exposant(int nbre, int exp)
{
        int resultat;

        resultat = pow(nbre, exp);

        return resultat;

}

float TVA(int prix)
{
        float resultat;

        resultat = prix * 1.196;

        return resultat;

}

int plusGrand(int a, int b, int c)
{
        int resultat=0;

        if (a > b && a > c)
        {
                resultat = a;
        }
        else if (b > c && b > a)
        {
                resultat = b;
        }
        else if (c > a && c > b)
        {
                resultat = c;
        }
        return resultat;
}
//Fonctions réalisées par l'étudiant 2 :










//Fonctions réalisées par l'étudiant 3 :
