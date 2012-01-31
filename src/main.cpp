// author: ROBERT DUNN
// LOLCODE translator
// main.cpp


#include <iostream>
#include <fstream>
#include "Header.h"
using namespace std;

int main ()
{
  ifstream fin;
  ofstream fout;
  string filename, fromFile;
  
  cout<< "PLEAZ ENTERS UR LOL SORSE COADZ FIAL NAEM:  ";
  cin >>filename;
  
  fin.open(filename.c_str());
  if (!fin)
  {
    cout<<"OH NOES! You entered the file name wrong or file does not exist"<<endl;
    exit(1);
  }
    
  fout.open("LOLCODE.cpp");
  if (!fout)
    cerr<<"OH NOES! File unable to open"<<endl;
  
  while (fin>> fromFile)
  {
    getWordAndPick(fin, fout, fromFile);
  }
  
  fout.close();
  fin.close();
  
  system("g++ LOLCODE.cpp -o LOL_OUTPUT");

  return 0;
}

