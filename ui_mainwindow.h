/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *button1;
    QPushButton *button4;
    QPushButton *button7;
    QPushButton *buttonMinus;
    QPushButton *buttonPlus;
    QPushButton *buttonMultiply;
    QPushButton *button2;
    QPushButton *button5;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *button6;
    QPushButton *button3;
    QPushButton *buttonDivide;
    QPushButton *buttonEquals;
    QLineEdit *lineEdit;
    QPushButton *button0;
    QPushButton *buttonClear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(430, 322);
        MainWindow->setStyleSheet(QLatin1String("background-color: grey;\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(10, 50, 93, 28));
        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(10, 80, 93, 28));
        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QStringLiteral("button7"));
        button7->setGeometry(QRect(10, 110, 93, 28));
        buttonMinus = new QPushButton(centralWidget);
        buttonMinus->setObjectName(QStringLiteral("buttonMinus"));
        buttonMinus->setGeometry(QRect(110, 170, 93, 28));
        buttonPlus = new QPushButton(centralWidget);
        buttonPlus->setObjectName(QStringLiteral("buttonPlus"));
        buttonPlus->setGeometry(QRect(10, 170, 93, 28));
        buttonMultiply = new QPushButton(centralWidget);
        buttonMultiply->setObjectName(QStringLiteral("buttonMultiply"));
        buttonMultiply->setGeometry(QRect(210, 170, 93, 28));
        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(110, 50, 93, 28));
        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(110, 80, 93, 28));
        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QStringLiteral("button8"));
        button8->setGeometry(QRect(110, 110, 93, 28));
        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QStringLiteral("button9"));
        button9->setGeometry(QRect(210, 110, 93, 28));
        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QStringLiteral("button6"));
        button6->setGeometry(QRect(210, 80, 93, 28));
        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(210, 50, 93, 28));
        buttonDivide = new QPushButton(centralWidget);
        buttonDivide->setObjectName(QStringLiteral("buttonDivide"));
        buttonDivide->setGeometry(QRect(310, 170, 93, 28));
        buttonEquals = new QPushButton(centralWidget);
        buttonEquals->setObjectName(QStringLiteral("buttonEquals"));
        buttonEquals->setGeometry(QRect(310, 210, 93, 28));
        buttonEquals->setStyleSheet(QStringLiteral(""));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 10, 381, 31));
        lineEdit->setStyleSheet(QLatin1String("background-color: white;\n"
""));
        button0 = new QPushButton(centralWidget);
        button0->setObjectName(QStringLiteral("button0"));
        button0->setGeometry(QRect(110, 140, 93, 28));
        buttonClear = new QPushButton(centralWidget);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));
        buttonClear->setGeometry(QRect(210, 210, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 430, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        button1->setText(QApplication::translate("MainWindow", "1", 0));
        button4->setText(QApplication::translate("MainWindow", "4", 0));
        button7->setText(QApplication::translate("MainWindow", "7", 0));
        buttonMinus->setText(QApplication::translate("MainWindow", "-", 0));
        buttonPlus->setText(QApplication::translate("MainWindow", "+", 0));
        buttonMultiply->setText(QApplication::translate("MainWindow", "*", 0));
        button2->setText(QApplication::translate("MainWindow", "2", 0));
        button5->setText(QApplication::translate("MainWindow", "5", 0));
        button8->setText(QApplication::translate("MainWindow", "8", 0));
        button9->setText(QApplication::translate("MainWindow", "9", 0));
        button6->setText(QApplication::translate("MainWindow", "6", 0));
        button3->setText(QApplication::translate("MainWindow", "3", 0));
        buttonDivide->setText(QApplication::translate("MainWindow", "/", 0));
        buttonEquals->setText(QApplication::translate("MainWindow", "=", 0));
        button0->setText(QApplication::translate("MainWindow", "0", 0));
        buttonClear->setText(QApplication::translate("MainWindow", "AC", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
