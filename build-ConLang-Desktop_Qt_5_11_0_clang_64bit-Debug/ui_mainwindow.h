/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *topPannel;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDateTime;
    QSpacerItem *horizontalSpacer;
    QPushButton *shutdownButton;
    QPushButton *restartButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(615, 800);
        MainWindow->setMinimumSize(QSize(393, 0));
        MainWindow->setStyleSheet(QLatin1String("#centralWidget { background: rgba(32, 80, 96, 100); }\n"
"\n"
"#loginForm\n"
"{\n"
"	background: rgba(0, 0, 0, 80);\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"QLabel { color: white; }\n"
"\n"
"QLineEdit { border-radius: 3px; }\n"
"\n"
"QPushButton\n"
"{\n"
"	color: white;\n"
"	background-color: #27a9e3;\n"
"	border-width: 0px;\n"
"	border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover { background-color: #66c011; }"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(300, 800));
        centralWidget->setBaseSize(QSize(300, 800));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPannel = new QWidget(centralWidget);
        topPannel->setObjectName(QStringLiteral("topPannel"));
        horizontalLayout = new QHBoxLayout(topPannel);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        currentDateTime = new QLabel(topPannel);
        currentDateTime->setObjectName(QStringLiteral("currentDateTime"));

        horizontalLayout->addWidget(currentDateTime);

        horizontalSpacer = new QSpacerItem(55, 55, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        shutdownButton = new QPushButton(topPannel);
        shutdownButton->setObjectName(QStringLiteral("shutdownButton"));

        horizontalLayout->addWidget(shutdownButton);

        restartButton = new QPushButton(topPannel);
        restartButton->setObjectName(QStringLiteral("restartButton"));

        horizontalLayout->addWidget(restartButton);


        verticalLayout->addWidget(topPannel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(150, 150));
        logo->setStyleSheet(QStringLiteral("border: 1px solid"));

        horizontalLayout_2->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(35, 35, 35, 35);
        loginForm = new QWidget(centralWidget);
        loginForm->setObjectName(QStringLiteral("loginForm"));
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(350, 200));
        loginForm->setStyleSheet(QStringLiteral("#loginForm { border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(loginForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        username = new QLineEdit(loginForm);
        username->setObjectName(QStringLiteral("username"));
        username->setMinimumSize(QSize(0, 25));

        horizontalLayout_5->addWidget(username);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        password = new QLineEdit(loginForm);
        password->setObjectName(QStringLiteral("password"));
        password->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(password);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(loginButton);


        horizontalLayout_3->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(55, 55, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        currentDateTime->setText(QApplication::translate("MainWindow", "Monday, May 14, 2018 4:51PM", nullptr));
        shutdownButton->setText(QString());
        restartButton->setText(QString());
        logo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
