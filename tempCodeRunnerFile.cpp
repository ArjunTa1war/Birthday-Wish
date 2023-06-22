/*
 author : Arjun Talwar
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

 cout<<"Enter the name of the birthday boy/girl\n";
 string name,namecopy;
 cin>>name;
 namecopy = name;
 int l = name.size();
 l+=3;
 if(l%2==0)l--;
 int sz = name.size();
 //A B D H I P R T Y (ALL WORDS IN HAPPY BIRTHDAY)
 rotate(name.begin(),name.end()-1,name.end());
 vector<string>All(l);
 for (int i = 0; i < l; i++){
   All[i] = name;
   rotate(name.begin(),name.begin()+1,name.end());
 }
 vector<string>A(All),B(All),D(All),H(All),I(All),P(All),R(All),T(All),Y(All);

/**************************************** FOR MAKING A ********************************************/
  
  for (int i = 0; i < l; i++){
     if(i==0||i==l/2)continue;
     for (int j = 1; j < A[i].length()-1; j++) A[i][j]=' ';
  }
  A[0][0]=A[0][sz-1]=' ';
  
/**************************************** FOR MAKING B ********************************************/

  for (int i = 0; i < l; i++){
     rotate(B[i].begin(),B[i].begin()+1,B[i].end());
     if(i==0||i==l/2||i==l-1)continue;
     for (int j = 1; j < B[i].length()-1; j++) B[i][j]=' ';
  }
  B[0][sz-1]=B[l-1][sz-1]=B[l/2][sz-1]=' ';

/**************************************** FOR MAKING D ********************************************/

  for (int i = 0; i < l; i++){
      rotate(D[i].begin(),D[i].begin()+1,D[i].end());
     if(i==0||i==l-1)continue;
     for (int j = 1; j < D[i].length()-1; j++) D[i][j]=' ';
  }
  D[0][sz-1]=D[l-1][sz-1]=' ';

/**************************************** FOR MAKING H ********************************************/

  for (int i = 0; i < l; i++){
     rotate(H[i].begin(),H[i].begin()+1,H[i].end());
     if(i==l/2)continue;
     for (int j = 1; j < H[i].length()-1; j++) H[i][j]=' ';
  }

/**************************************** FOR MAKING I ********************************************/

  for (int i = 0; i < l; i++){
     rotate(I[i].begin(),I[i].begin()+1,I[i].end());
     if(i==0||i==l-1)continue;
     for (int j = 0; j < I[i].length(); j++)if(j!=(sz-1)/2)I[i][j]=' ';
  }
  if(sz%2==0){
    for (int i = 0; i < l; i++)I[i][sz-1]=' ';
  }

/**************************************** FOR MAKING P ********************************************/

  for (int i = 0; i < l; i++){
     if(i==0||i==l/2)continue;
     if(i<l/2)for (int j = 1; j < A[i].length()-1; j++) P[i][j]=' ';
     else for (int j = 1; j < A[i].length(); j++) P[i][j]=' ';
  }
  P[0][0]=P[0][sz-1]=P[l/2][sz-1]=' ';

/**************************************** FOR MAKING R ********************************************/

  for (int i = 0; i < l; i++){
     if(i==0||i==l/2)continue;
     if(i<l/2)for (int j = 1; j < R[i].length()-1; j++) R[i][j]=' ';
     else for (int j = 1; j < R[i].length(); j++) R[i][j]=' ';
  }
  R[0][0]=R[0][sz-1]=R[l/2][sz-1]=' ';
  int j = 1;
  for (int i = l/2+1; i < l; i++){
     R[i][j] = namecopy[j-1];
     j++;
  }

/**************************************** FOR MAKING T ********************************************/

   for (int i = 0; i < l; i++){
     rotate(T[i].begin(),T[i].begin()+1,T[i].end());
     if(i==0)continue;
     for (int j = 0; j < T[i].length(); j++)if(j!=(sz-1)/2)T[i][j]=' ';
  }
  if(sz%2==0){
    for (int i = 0; i < l; i++)T[i][sz-1]=' ';
  }

/**************************************** FOR MAKING Y ********************************************/
  
  int szc = sz;
  if(szc%2==0)szc--;
  for (int i = 0; i < l/2; i++){
     rotate(Y[i].begin(),Y[i].begin()+1,Y[i].end());
     for (int j = 1; j < szc-1; j++)Y[i][j]=' ';
  }
  Y[l/2][0]=Y[l/2][szc-1]=' ';
  int index = 0;
  for (int i = (l/2)+1; i < l; i++){
    for (int j = 0; j < szc; j++){
      if(j!=(szc)/2)Y[i][j]=' ';
      else Y[i][j]=namecopy[index%sz],index++;
    }
  }
  if(sz%2==0){
  for (int i = 0; i < l; i++)Y[i][sz-1]=' ';
  }
  
/*********************************** PRINTING STARTS HERE :) ***************************************/

cout<<"PRESS H FOR HORIZONTAL PRINT AND V FOR VERTICAL PRINT\n";
char style;
cin>>style;
cout<<"\n";
/****************************** VERTICAL PRINTING STARTS HERE :) ***********************************/
if(style=='V'||style=='v'){
/**************************************** PRINTING H :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : H[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING A :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : A[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING P :) ********************************************/
  
  for (int i = 0; i < l; i++){
     for(auto &x : P[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING P :) ********************************************/  

  for (int i = 0; i < l; i++){
     for(auto &x : P[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING Y :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : Y[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING B :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : B[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING I :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : I[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING R :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : R[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING T :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : T[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING H :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : H[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING D :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : D[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING A :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : A[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";

/**************************************** PRINTING Y :) ********************************************/

  for (int i = 0; i < l; i++){
     for(auto &x : Y[i])cout<<x<<" ";
     cout<<"\n";
  }
  cout<<"\n";
}
/****************************** VERTICAL PRINTING ENDS HERE :) ***********************************/

/**************************** HORIZONTAL PRINTING STARTS HERE :) **********************************/
if (style=='H'||style=='h'){
string spacing = "";
for (int i = 0; i < sz/2; i++)spacing.push_back(' ');
/************************************ PRINTING HAPPY :) *******************************************/

  for (int i = 0; i < l; i++){
    for(auto &x : H[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : A[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : P[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : P[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : Y[i])cout<<x<<" ";
    cout<<spacing;
    cout<<"\n";
  }
  cout<<"\n";

/********************************** PRINTING BIRTHDAY :) *****************************************/

  for (int i = 0; i < l; i++){
    for(auto &x : B[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : I[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : R[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : T[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : H[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : D[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : A[i])cout<<x<<" ";
    cout<<spacing;
    for(auto &x : Y[i])cout<<x<<" ";
    cout<<spacing;
    cout<<"\n";
  }
  cout<<"\n";
}

/****************************** HORIZONTAL PRINTING ENDS HERE :) ***********************************/

/********************************* CHALIYE KHATAM KRTE HAI :) **************************************/
 return 0;
}