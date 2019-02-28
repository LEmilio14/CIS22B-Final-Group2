#define _CRT_SECURE_NO_WARNINGS

#include "Book.h"

Book::Book()
{
	isbn = "";
	title = "";
	author = "";
	publisher = "";
	addDate = "";
	quantity = 0;
	wholesale = 0;
	retail = 0;
}

Book::Book(std::string is, std::string ti, std::string au, std::string pu, std::string ad, int qu, double wh, double re)
{
	isbn = is;
	title = ti;
	author = au;
	publisher = pu;
	addDate = ad;
	quantity = qu;
	wholesale = wh;
	retail = re;
}

Book::~Book()
{

}