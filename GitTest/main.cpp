#include "GitTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

   // Edit Test_ffa
	QApplication a(argc, argv);
	GitTest w;
	w.show();
	return a.exec();
}
