#ifndef File_H
#define File_H
#include <iostream>
#include <string>
using namespace std;
class File
{
public:
	string line;
	File* UNext;
	File* ENext;
	File* LNext;


public:

	File(string _line) {
		this->line = _line;
		this->UNext = NULL;
		this->ENext = NULL;
		this->LNext = NULL;

	}
	~File() {

	}

};

#endif // !FileList_H

