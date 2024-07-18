/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lblName;
    QLabel *label_2;
    QLabel *lblVersion;
    QLabel *label_3;
    QLabel *lblCompany;
    QLabel *label_4;
    QLabel *lblUrl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(351, 221);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(AboutDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lblName = new QLabel(AboutDialog);
        lblName->setObjectName("lblName");

        gridLayout->addWidget(lblName, 0, 1, 1, 1);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lblVersion = new QLabel(AboutDialog);
        lblVersion->setObjectName("lblVersion");

        gridLayout->addWidget(lblVersion, 1, 1, 1, 1);

        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lblCompany = new QLabel(AboutDialog);
        lblCompany->setObjectName("lblCompany");

        gridLayout->addWidget(lblCompany, 2, 1, 1, 1);

        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lblUrl = new QLabel(AboutDialog);
        lblUrl->setObjectName("lblUrl");

        gridLayout->addWidget(lblUrl, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "Name:", nullptr));
        lblName->setText(QCoreApplication::translate("AboutDialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "Version:", nullptr));
        lblVersion->setText(QCoreApplication::translate("AboutDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "Company:", nullptr));
        lblCompany->setText(QCoreApplication::translate("AboutDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "Url:", nullptr));
        lblUrl->setText(QCoreApplication::translate("AboutDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
