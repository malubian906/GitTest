#pragma once

#include <QtWidgets/QWidget>
#include "ui_GitTest.h"

class GitTest : public QWidget
{
	Q_OBJECT

public:
	GitTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::GitTestClass ui;
};
