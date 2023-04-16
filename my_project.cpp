#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class IUTiens{
    protected:
        string noms;
        string prenoms;
        long int dateNaissance;
    public:
        IUTiens()
        {
            noms="nothing";
            prenoms="nothing";
            dateNaissance=0;
        }

        IUTiens(string surname, string name, long int birthday)
        {
            noms=surname;
            prenoms=name;
            dateNaissance=birthday;
        }

        IUTiens(const IUTiens& object)
        {
            noms=object.noms;
            prenoms=object.prenoms;
            dateNaissance=object.dateNaissance;
        }

        ~IUTiens(){};

        void setnom()
        {
            cout<<"veuillez entrer le noms de la personne: ";
            cin>>noms;
        }

        void setprenoms()
        {
            cout<<"veuillez entrer le prenoms de la personne: ";
            cin>>prenoms;
        }

        void setnaissance(){
            cout<<"veuillez entrer son annee de naissance: ";
            cin>>dateNaissance;
        }

        string getnoms()
        {
            return noms;
        }

        string getprenoms()
        {
            return prenoms;
        }

        long int getnaissance()
        {
            return dateNaissance;
        }
};

class Enseignant: public IUTiens
{
    private:
        string grade;

    public:
        Enseignant()
        {
            grade="nothing";
        }

        Enseignant(string teacher)
        {
            grade=teacher;
        }

        Enseignant(const Enseignant& object)
        {
            grade=object.grade;
        }
        void setgrade()
        {
            cout<<"veuillez entrer le grade de l'enseignant: ";
            cin>>grade;
        }

        string getgrade()
        {
            return grade;
        }

        void setter(){
            setnom();
            setprenoms();
            setnaissance();
            setgrade();
        }

        void getter(string& n, string& p, long int& gn, string& gg)
        {
            n=getnoms();
            p=getprenoms();
            gn=getnaissance();
            gg=getgrade();
        }
};

class Administratif: public IUTiens
{
    private:
        string poste;

    public:
        Administratif()
        {
            poste="nothing";
        }

        Administratif(string position)
        {
            poste=position;
        }

        Administratif(const Administratif& object)
        {
            poste=object.poste;
        }
        ~Administratif(){};

        void setposte()
        {
            cout<<"veuillez entrer le poste du membre d'administration: ";
            cin>>poste;
        }

        string getposte()
        {
            return poste;
        }

        void setter(){
            setnom();
            setprenoms();
            setnaissance();
            setposte();
        }

        void getter(string& n, string& p, long int& gn, string& gg)
        {
            n=getnoms();
            p=getprenoms();
            gn=getnaissance();
            gg=getposte();
        }
};

class filiere
{
    private:
        string codFil;
        string libFil;
    public:
       filiere()
       {
            codFil="IG";
            libFil="Informatique de Gestion";
       }

       filiere(string cf)
       {
            codFil=cf;
                if(cf=="IG" or cf=="ig")
                {
                    libFil="Informatique de Gestion";
                }else{
                    if(codFil=="GE"){
                    libFil="Gestion des Entreprise";
                    }else{cout<<"vous avez entrer le mauvais code !"<<endl;}
                };
       }

       void setFil()
       {
        cout<<"veuillez entrer le code de votre filiere (IG/GE): ";
        cin>>codFil;
        if(codFil=="IG" or codFil=="ig")
                {
                    libFil="Informatique de Gestion";
                }else{
                    if(codFil=="GE"){
                    libFil="Gestion des Entreprise";
                    }else{cout<<"vous avez entrer le mauvais code !"<<endl;}
                };
       }

       string getFil1()
       {
        return codFil;
       }

       string getFil2()
       {
        return libFil;
       }
};

class Etudiant: public IUTiens, public filiere
{
    private:
       long int matricule;
    public:
        Etudiant()
        {
            matricule=0;
        }

        Etudiant(int matr)
        {
            matricule=matr;
        }

        Etudiant(const Etudiant& object)
        {
            matricule=object.matricule;
        }

        void setMat()
        {
            cout<<"veuillez entrer votre numero matricule: ";
            cin>>matricule;
        }

      long int getMat()
      {
        return matricule;
      }

       void setter(){
            setnom();
            setprenoms();
            setnaissance();
            setMat();
            setFil();
        }

        void getter(string& n, string& p, long int& gn, int& gg, string& Fil1, string& Fil2)
         {
            n=getnoms();
            p=getprenoms();
            gn=getnaissance();
            gg=getMat();
            Fil1=getFil1();
            Fil2=getFil2();
        }

};

int main(){
    cout<<"PROCEDONS A L'ENREGISTREMENT DE 10 ENSEIGNANTS"<<endl;
 //   Création de 10 enseigants
    string a,b,c;
    long int d;
    Enseignant enseignant0;
    enseignant0.setter();
    enseignant0.getter(a,b,d,c);
    cout<<"le premier enseignant s'appelle "<<a<<" "<<b<<" nee en "<<d<<" de grade "<<c<<endl;

    string a0,b0,c0;
    long int d0;
    Enseignant enseignant1;
    enseignant1.setter();
    enseignant1.getter(a0,b0,d0,c0);
    cout<<"le deuxième enseignant enregistré s'appelle "<<a0<<" "<<b0<<" nee en "<<d0<<" de grade "<<c0<<endl;
    
    string a1,b1,c1;
    long int d1;
    Enseignant enseignant2;
    enseignant2.setter();
    enseignant2.getter(a1,b1,d1,c1);
    cout<<"le troisième enseignant s'appelle "<<a1<<" "<<b1<<" nee en "<<d1<<" de grade "<<c1<<endl;

    string a2,b2,c2;
    long int d2;
    Enseignant enseignant3;
    enseignant3.setter();
    enseignant3.getter(a2,b2,d2,c2);
    cout<<"le quatrième enseignant s'appelle "<<a2<<" "<<b2<<" nee en "<<d2<<" de grade "<<c2<<endl;

    string a3,b3,c3;
    long int d3;
    Enseignant enseignant4;
    enseignant4.setter();
    enseignant4.getter(a3,b3,d3,c3);
    cout<<"le cinquième enseignant s'appelle "<<a3<<" "<<b3<<" nee en "<<d3<<" de grade "<<c3<<endl;

    string a4,b4,c4;
    long int d4;
    Enseignant enseignant5;
    enseignant5.setter();
    enseignant5.getter(a4,b4,d4,c4);
    cout<<"le sixième enseignant s'appelle "<<a4<<" "<<b4<<" nee en "<<d4<<" de grade "<<c4<<endl;

    string a5,b5,c5;
    long int d5;
    Enseignant enseignant6;
    enseignant6.setter();
    enseignant6.getter(a5,b5,d5,c5);
    cout<<"le septième enseignant s'appelle "<<a5<<" "<<b5<<" nee en "<<d5<<" de grade "<<c5<<endl;

    string a6,b6,c6;
    long int d6;
    Enseignant enseignant7;
    enseignant7.setter();
    enseignant7.getter(a6,b6,d6,c6);
    cout<<"le huitième enseignant s'appelle "<<a6<<" "<<b6<<" nee en "<<d6<<" de grade "<<c6<<endl;

    string a7,b7,c7;
    long int d7;
    Enseignant enseignant8;
    enseignant8.setter();
    enseignant8.getter(a7,b7,d7,c7);
    cout<<"le neuvième enseignant s'appelle "<<a7<<" "<<b7<<" nee en "<<d7<<" de grade "<<c7<<endl;

    string a8,b8,c8;
    long int d8;
    Enseignant enseignant9;
    enseignant9.setter();
    enseignant9.getter(a8,b8,d8,c8);
    cout<<"le dixième enseignant s'appelle "<<a8<<" "<<b8<<" nee en "<<d8<<" de grade "<<c8<<endl;

cout<<"Procedons au Tri des enseignants..."<<endl;


//----------------------------------------------------------------------------------------------
    //   Création de 10 étudiants
cout<<"============================================================================="<<endl;
cout<<"PROCEDONS A L'ENREGISTREMENT DE 10 ETUDIANTS"<<endl;
    string A,B,C,E;
    int F;
    long int D;
    Etudiant etudiant0;
    etudiant0.setter();
    etudiant0.getter(A,B,D,F,C,E);
    cout<<"l'étudiant s'appelle "<<A<<" "<<B<<", née en "<<D<<", matricule "<<F<<" de filière "<<C<<E<<endl;
    ofstream file("etudiant.txt");
    file<<A<<B<<endl;

    string A0,B0,C0,E0;
    int F0;
    long int D0;
    Etudiant etudiant1;
    etudiant1.setter();
    etudiant1.getter(A0,B0,D0,F0,C0,E0);
    cout<<"l'étudiant s'appelle "<<A0<<" "<<B0<<", née en "<<D0<<", matricule "<<F0<<" de filière "<<C0<<E0<<endl;
    file<<A0<<B0<<endl;

    string A1,B1,C1,E1;
    int F1;
    long int D1;
    Etudiant etudiant2;
    etudiant2.setter();
    etudiant2.getter(A1,B1,D1,F1,C1,E1);
    cout<<"l'étudiant s'appelle "<<A1<<" "<<B1<<", née en "<<D1<<", matricule "<<F1<<" de filière "<<C1<<E1<<endl;
    file<<A1<<B1<<endl;

    string A2,B2,C2,E2;
    int F2;
    long int D2;
    Etudiant etudiant3;
    etudiant3.setter();
    etudiant3.getter(A2,B2,D2,F2,C2,E2);
    cout<<"l'étudiant s'appelle "<<A2<<" "<<B2<<", née en "<<D2<<", matricule "<<F2<<" de filière "<<C2<<E2<<endl;
    file<<A2<<B2<<endl;

    string A3,B3,C3,E3;
    int F3;
    long int D3;
    Etudiant etudiant4;
    etudiant4.setter();
    etudiant4.getter(A3,B3,D3,F3,C3,E3);
    cout<<"l'étudiant s'appelle "<<A3<<" "<<B3<<", née en "<<D3<<", matricule "<<F3<<" de filière "<<C3<<E3<<endl;
    file<<A3<<B3<<endl;

    string A4,B4,C4,E4;
    int F4;
    long int D4;
    Etudiant etudiant5;
    etudiant5.setter();
    etudiant5.getter(A4,B4,D4,F4,C4,E4);
    cout<<"l'étudiant s'appelle "<<A4<<" "<<B4<<", née en "<<D4<<", matricule "<<F4<<" de filière "<<C4<<E4<<endl;
    file<<A4<<B4<<endl;

    string A5,B5,C5,E5;
    int F5;
    long int D5;
    Etudiant etudiant6;
    etudiant6.setter();
    etudiant6.getter(A5,B5,D5,F5,C5,E5);
    cout<<"l'étudiant s'appelle "<<A5<<" "<<B5<<", née en "<<D5<<", matricule "<<F5<<" de filière "<<C5<<E5<<endl;
    file<<A5<<B5<<endl;

    string A6,B6,C6,E6;
    int F6;
    long int D6;
    Etudiant etudiant7;
    etudiant7.setter();
    etudiant7.getter(A6,B6,D6,F6,C6,E6);
    cout<<"l'étudiant s'appelle "<<A6<<" "<<B6<<", née en "<<D6<<", matricule "<<F6<<" de filière "<<C6<<E6<<endl;
    file<<A6<<B6<<endl;

    string A7,B7,C7,E7;
    int F7;
    long int D7;
    Etudiant etudiant8;
    etudiant8.setter();
    etudiant8.getter(A7,B7,D7,F7,C7,E7);
    cout<<"l'étudiant s'appelle "<<A7<<" "<<B7<<", née en "<<D7<<", matricule "<<F7<<" de filière "<<C7<<E7<<endl;
    file<<A7<<B7<<endl;

    string A8,B8,C8,E8;
    int F8;
    long int D8;
    Etudiant etudiant9;
    etudiant9.setter();
    etudiant9.getter(A8,B8,D8,F8,C8,E8);
    cout<<"l'étudiant s'appelle "<<A8<<" "<<B8<<", née en "<<D8<<", matricule "<<F8<<" de filière "<<C8<<E8<<endl;
    file<<A8<<B8<<endl;
}