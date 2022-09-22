#include <iostream>
#include <string>

using namespace std;

int main() {
   string prenom;

   int age = 0 ;
   int annee_naissance = 0;
   cout << "Entrez votre prenom svp : " << endl;
   cin >> prenom;

   cout << "Entrez votre age svp : " << endl;
   cin >> age;

   annee_naissance = 2022 - age;
   cout <<"Bonjour " << prenom << endl << "Vous avez " << age << " et vous etes ne(e) en " << annee_naissance << endl;

   if (prenom == "Hitler")
   {
      cout << "HEIL !"<<endl;
   }
   return 0;
}
