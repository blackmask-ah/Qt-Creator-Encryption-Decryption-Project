/********************************************************************************
** Form generated from reading UI file 'encrypt_decrypt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPT_DECRYPT_H
#define UI_ENCRYPT_DECRYPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_encrypt_decrypt
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *encryptBtn;
    QPushButton *searchbtn;
    QPushButton *decryptBtn;
    QTextEdit *logDisplay;
    QLabel *dirsh;
    QMenuBar *menubar;
    QMenu *menuversion_1_0;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *encrypt_decrypt)
    {
        if (encrypt_decrypt->objectName().isEmpty())
            encrypt_decrypt->setObjectName(QString::fromUtf8("encrypt_decrypt"));
        encrypt_decrypt->resize(709, 429);
        centralwidget = new QWidget(encrypt_decrypt);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout_2->addLayout(horizontalLayout_2);

        encryptBtn = new QPushButton(centralwidget);
        encryptBtn->setObjectName(QString::fromUtf8("encryptBtn"));

        verticalLayout_2->addWidget(encryptBtn);

        searchbtn = new QPushButton(centralwidget);
        searchbtn->setObjectName(QString::fromUtf8("searchbtn"));

        verticalLayout_2->addWidget(searchbtn);


        verticalLayout->addLayout(verticalLayout_2);

        decryptBtn = new QPushButton(centralwidget);
        decryptBtn->setObjectName(QString::fromUtf8("decryptBtn"));

        verticalLayout->addWidget(decryptBtn);

        logDisplay = new QTextEdit(centralwidget);
        logDisplay->setObjectName(QString::fromUtf8("logDisplay"));

        verticalLayout->addWidget(logDisplay);

        dirsh = new QLabel(centralwidget);
        dirsh->setObjectName(QString::fromUtf8("dirsh"));
        dirsh->setMinimumSize(QSize(691, 0));
        dirsh->setMaximumSize(QSize(691, 72));
        dirsh->setStyleSheet(QString::fromUtf8("font-size:10px;\n"
""));

        verticalLayout->addWidget(dirsh, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignBottom);

        encrypt_decrypt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(encrypt_decrypt);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 709, 23));
        menuversion_1_0 = new QMenu(menubar);
        menuversion_1_0->setObjectName(QString::fromUtf8("menuversion_1_0"));
        encrypt_decrypt->setMenuBar(menubar);
        statusbar = new QStatusBar(encrypt_decrypt);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        encrypt_decrypt->setStatusBar(statusbar);

        menubar->addAction(menuversion_1_0->menuAction());

        retranslateUi(encrypt_decrypt);

        QMetaObject::connectSlotsByName(encrypt_decrypt);
    } // setupUi

    void retranslateUi(QMainWindow *encrypt_decrypt)
    {
        encrypt_decrypt->setWindowTitle(QCoreApplication::translate("encrypt_decrypt", "Attacking.....", nullptr));
        encryptBtn->setText(QCoreApplication::translate("encrypt_decrypt", "Encrypt", nullptr));
        searchbtn->setText(QCoreApplication::translate("encrypt_decrypt", "Search it...", nullptr));
        decryptBtn->setText(QCoreApplication::translate("encrypt_decrypt", "Decrypt", nullptr));
        dirsh->setText(QCoreApplication::translate("encrypt_decrypt", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Demo Version....</span></p></body></html>", nullptr));
        menuversion_1_0->setTitle(QCoreApplication::translate("encrypt_decrypt", "version 1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class encrypt_decrypt: public Ui_encrypt_decrypt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPT_DECRYPT_H
