/********************************************************************************
** Form generated from reading UI file 'GitTest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GITTEST_H
#define UI_GITTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GitTestClass
{
public:

    void setupUi(QWidget *GitTestClass)
    {
        if (GitTestClass->objectName().isEmpty())
            GitTestClass->setObjectName(QStringLiteral("GitTestClass"));
        GitTestClass->resize(600, 400);

        retranslateUi(GitTestClass);

        QMetaObject::connectSlotsByName(GitTestClass);
    } // setupUi

    void retranslateUi(QWidget *GitTestClass)
    {
        GitTestClass->setWindowTitle(QApplication::translate("GitTestClass", "GitTest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GitTestClass: public Ui_GitTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GITTEST_H
