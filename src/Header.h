//ROBERT DUNN
//LOLCODE translator
//header.h


#ifndef LOL_Header_h
#define LOL_Header_h

using namespace std;
#include <iostream>


//Pre: Stream must be opened before passed
//Finds valid keywords from input source code file
//  and returns an int to determine next action
void getWordAndPick(ifstream & fin, ofstream & fout, const string & indexWord);

void startBlock(ifstream & fin, ofstream & fout);

//NEEDS WORK
void output(ifstream & fin, ofstream & fout);

//NEEDS WORK
void loop(ifstream & fin, ofstream & fout);

void comment(ifstream & fin, ofstream & fout);

void declareVariable(ifstream & fin, ofstream & fout);

void endCodeBlock(ifstream & fin, ofstream & fout);

//INCOMPLETE
void increment(ifstream & fin, ofstream & fout);

string readBetweenQuotes(ifstream & fin, ofstream & fout);
#endif
