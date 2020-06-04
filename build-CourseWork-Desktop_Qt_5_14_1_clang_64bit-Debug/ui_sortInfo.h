/********************************************************************************
** Form generated from reading UI file 'sortInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTINFO_H
#define UI_SORTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *otherInformationLabel;
    QLabel *gifLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *CCWorstLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *CCAverageLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *CCBestLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *MemoryLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *StabilityLabel;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *descriptionLabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(450, 566);
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 20, 101, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 540, 113, 32));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        otherInformationLabel = new QLabel(Dialog);
        otherInformationLabel->setObjectName(QString::fromUtf8("otherInformationLabel"));
        otherInformationLabel->setGeometry(QRect(180, 70, 261, 71));
        gifLabel = new QLabel(Dialog);
        gifLabel->setObjectName(QString::fromUtf8("gifLabel"));
        gifLabel->setGeometry(QRect(10, 170, 431, 151));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 164, 100));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        CCWorstLabel = new QLabel(layoutWidget);
        CCWorstLabel->setObjectName(QString::fromUtf8("CCWorstLabel"));

        horizontalLayout->addWidget(CCWorstLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        CCAverageLabel = new QLabel(layoutWidget);
        CCAverageLabel->setObjectName(QString::fromUtf8("CCAverageLabel"));

        horizontalLayout_2->addWidget(CCAverageLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        CCBestLabel = new QLabel(layoutWidget);
        CCBestLabel->setObjectName(QString::fromUtf8("CCBestLabel"));

        horizontalLayout_3->addWidget(CCBestLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 40, 267, 20));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        MemoryLabel = new QLabel(layoutWidget1);
        MemoryLabel->setObjectName(QString::fromUtf8("MemoryLabel"));

        horizontalLayout_5->addWidget(MemoryLabel);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        StabilityLabel = new QLabel(layoutWidget1);
        StabilityLabel->setObjectName(QString::fromUtf8("StabilityLabel"));

        horizontalLayout_4->addWidget(StabilityLabel);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 330, 81, 16));
        label_8->setFont(font);
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 150, 71, 16));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_9->setFont(font2);
        descriptionLabel = new QLabel(Dialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 350, 431, 191));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Classification:", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        otherInformationLabel->setText(QCoreApplication::translate("Dialog", "Other Information", nullptr));
        gifLabel->setText(QCoreApplication::translate("Dialog", "gifLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Computational complexity:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Worst:", nullptr));
        CCWorstLabel->setText(QCoreApplication::translate("Dialog", "CCWorst", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Average:", nullptr));
        CCAverageLabel->setText(QCoreApplication::translate("Dialog", "CCWorst", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Best:", nullptr));
        CCBestLabel->setText(QCoreApplication::translate("Dialog", "CCWorst", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Memory:", nullptr));
        MemoryLabel->setText(QCoreApplication::translate("Dialog", "MemoryLabel", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Stability:", nullptr));
        StabilityLabel->setText(QCoreApplication::translate("Dialog", "Stable", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Description:", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "Animation:", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTINFO_H
