/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionFind;
    QAction *actionReplace;
    QAction *actionSelect_All;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionStrike;
    QAction *actionColor;
    QAction *actionFont;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuText;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(666, 395);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/nodepad.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/files/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/files/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/files/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon9);
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName("actionReplace");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/files/images/text_replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplace->setIcon(icon10);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName("actionSelect_All");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/files/images/select_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon11);
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName("actionZoom_in");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/files/images/zoom_in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_in->setIcon(icon12);
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName("actionZoom_out");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/files/images/zoom_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_out->setIcon(icon13);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName("actionBold");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/files/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon14);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName("actionItalic");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/files/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon15);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName("actionUnderline");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/files/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon16);
        actionStrike = new QAction(MainWindow);
        actionStrike->setObjectName("actionStrike");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/files/images/text_strikethrough.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStrike->setIcon(icon17);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName("actionColor");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/files/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon18);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/files/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon19);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName("actionHelp");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/files/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon20);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/files/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon21);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/files/images/arrow_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon22);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/files/images/arrow_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon23);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 666, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuText = new QMenu(menubar);
        menuText->setObjectName("menuText");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuText->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionReplace);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuView->addAction(actionZoom_in);
        menuView->addAction(actionZoom_out);
        menuText->addAction(actionBold);
        menuText->addAction(actionItalic);
        menuText->addAction(actionUnderline);
        menuText->addAction(actionStrike);
        menuText->addSeparator();
        menuText->addAction(actionColor);
        menuText->addSeparator();
        menuText->addAction(actionFont);
        menuAbout->addAction(actionHelp);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionSelect_All);
        toolBar->addSeparator();
        toolBar->addAction(actionFind);
        toolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionStrike);
        toolBar->addSeparator();
        toolBar->addAction(actionColor);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TextEditor", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReplace->setText(QCoreApplication::translate("MainWindow", "Replace", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_in->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_in->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_out->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("MainWindow", "Italic", nullptr));
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
        actionStrike->setText(QCoreApplication::translate("MainWindow", "Strike", nullptr));
        actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuText->setTitle(QCoreApplication::translate("MainWindow", "Text", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
