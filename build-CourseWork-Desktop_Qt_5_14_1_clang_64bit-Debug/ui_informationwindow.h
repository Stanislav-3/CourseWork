/********************************************************************************
** Form generated from reading UI file 'informationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONWINDOW_H
#define UI_INFORMATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InformationWindow
{
public:
    QPushButton *combSortButton;
    QPushButton *insertionSortButton;
    QPushButton *shellsortButton;
    QPushButton *treeSortButton;
    QPushButton *gnomeSortButton;
    QPushButton *heapsortButton;
    QPushButton *selectionSortButton;
    QPushButton *quickSortButton;
    QPushButton *mergeSortButton;
    QPushButton *bucketSortButton;
    QPushButton *LSDSortButton;
    QPushButton *MSDSortButton;
    QPushButton *bitonicSortButton;
    QPushButton *timsortButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *helpButton;
    QPushButton *returnButton;
    QLabel *dialogLabel;
    QPushButton *moreButton;
    QPushButton *bubbleSortButton;
    QPushButton *shakerSortButton;

    void setupUi(QDialog *InformationWindow)
    {
        if (InformationWindow->objectName().isEmpty())
            InformationWindow->setObjectName(QString::fromUtf8("InformationWindow"));
        InformationWindow->resize(320, 381);
        combSortButton = new QPushButton(InformationWindow);
        combSortButton->setObjectName(QString::fromUtf8("combSortButton"));
        combSortButton->setGeometry(QRect(0, 200, 111, 32));
        combSortButton->setAutoDefault(false);
        combSortButton->setFlat(false);
        insertionSortButton = new QPushButton(InformationWindow);
        insertionSortButton->setObjectName(QString::fromUtf8("insertionSortButton"));
        insertionSortButton->setGeometry(QRect(0, 80, 111, 32));
        insertionSortButton->setAutoDefault(false);
        shellsortButton = new QPushButton(InformationWindow);
        shellsortButton->setObjectName(QString::fromUtf8("shellsortButton"));
        shellsortButton->setGeometry(QRect(0, 110, 111, 32));
        shellsortButton->setAutoDefault(false);
        treeSortButton = new QPushButton(InformationWindow);
        treeSortButton->setObjectName(QString::fromUtf8("treeSortButton"));
        treeSortButton->setGeometry(QRect(0, 350, 111, 32));
        treeSortButton->setAutoDefault(false);
        gnomeSortButton = new QPushButton(InformationWindow);
        gnomeSortButton->setObjectName(QString::fromUtf8("gnomeSortButton"));
        gnomeSortButton->setGeometry(QRect(0, 290, 111, 32));
        gnomeSortButton->setAutoDefault(false);
        heapsortButton = new QPushButton(InformationWindow);
        heapsortButton->setObjectName(QString::fromUtf8("heapsortButton"));
        heapsortButton->setGeometry(QRect(0, 260, 111, 32));
        heapsortButton->setAutoDefault(false);
        selectionSortButton = new QPushButton(InformationWindow);
        selectionSortButton->setObjectName(QString::fromUtf8("selectionSortButton"));
        selectionSortButton->setGeometry(QRect(0, 140, 111, 32));
        selectionSortButton->setAutoDefault(false);
        quickSortButton = new QPushButton(InformationWindow);
        quickSortButton->setObjectName(QString::fromUtf8("quickSortButton"));
        quickSortButton->setGeometry(QRect(0, 170, 111, 32));
        quickSortButton->setAutoDefault(false);
        mergeSortButton = new QPushButton(InformationWindow);
        mergeSortButton->setObjectName(QString::fromUtf8("mergeSortButton"));
        mergeSortButton->setGeometry(QRect(0, 230, 111, 32));
        mergeSortButton->setAutoDefault(false);
        bucketSortButton = new QPushButton(InformationWindow);
        bucketSortButton->setObjectName(QString::fromUtf8("bucketSortButton"));
        bucketSortButton->setGeometry(QRect(150, 20, 111, 32));
        bucketSortButton->setAutoDefault(false);
        LSDSortButton = new QPushButton(InformationWindow);
        LSDSortButton->setObjectName(QString::fromUtf8("LSDSortButton"));
        LSDSortButton->setGeometry(QRect(150, 50, 111, 32));
        LSDSortButton->setAutoDefault(false);
        MSDSortButton = new QPushButton(InformationWindow);
        MSDSortButton->setObjectName(QString::fromUtf8("MSDSortButton"));
        MSDSortButton->setGeometry(QRect(150, 80, 111, 32));
        MSDSortButton->setAutoDefault(false);
        bitonicSortButton = new QPushButton(InformationWindow);
        bitonicSortButton->setObjectName(QString::fromUtf8("bitonicSortButton"));
        bitonicSortButton->setGeometry(QRect(150, 170, 111, 32));
        bitonicSortButton->setAutoDefault(false);
        timsortButton = new QPushButton(InformationWindow);
        timsortButton->setObjectName(QString::fromUtf8("timsortButton"));
        timsortButton->setGeometry(QRect(0, 320, 111, 32));
        timsortButton->setAutoDefault(false);
        label = new QLabel(InformationWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 121, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(InformationWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 0, 151, 16));
        label_2->setFont(font);
        label_3 = new QLabel(InformationWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 150, 51, 16));
        label_3->setFont(font);
        helpButton = new QPushButton(InformationWindow);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(210, 320, 111, 32));
        helpButton->setAutoDefault(false);
        returnButton = new QPushButton(InformationWindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(210, 350, 111, 32));
        returnButton->setAutoDefault(false);
        returnButton->setFlat(false);
        dialogLabel = new QLabel(InformationWindow);
        dialogLabel->setObjectName(QString::fromUtf8("dialogLabel"));
        dialogLabel->setGeometry(QRect(130, 230, 151, 21));
        moreButton = new QPushButton(InformationWindow);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        moreButton->setGeometry(QRect(170, 320, 41, 32));
        moreButton->setAutoDefault(false);
        bubbleSortButton = new QPushButton(InformationWindow);
        bubbleSortButton->setObjectName(QString::fromUtf8("bubbleSortButton"));
        bubbleSortButton->setGeometry(QRect(0, 20, 113, 32));
        bubbleSortButton->setAutoDefault(false);
        shakerSortButton = new QPushButton(InformationWindow);
        shakerSortButton->setObjectName(QString::fromUtf8("shakerSortButton"));
        shakerSortButton->setGeometry(QRect(0, 50, 113, 32));
        shakerSortButton->setAutoDefault(false);

        retranslateUi(InformationWindow);

        combSortButton->setDefault(false);
        returnButton->setDefault(true);


        QMetaObject::connectSlotsByName(InformationWindow);
    } // setupUi

    void retranslateUi(QDialog *InformationWindow)
    {
        InformationWindow->setWindowTitle(QCoreApplication::translate("InformationWindow", "Dialog", nullptr));
        combSortButton->setText(QCoreApplication::translate("InformationWindow", "Comb sort", nullptr));
        insertionSortButton->setText(QCoreApplication::translate("InformationWindow", "Insertion sort", nullptr));
        shellsortButton->setText(QCoreApplication::translate("InformationWindow", "Shellsort", nullptr));
        treeSortButton->setText(QCoreApplication::translate("InformationWindow", "Tree sort", nullptr));
        gnomeSortButton->setText(QCoreApplication::translate("InformationWindow", "Gnome sort", nullptr));
        heapsortButton->setText(QCoreApplication::translate("InformationWindow", "Heapsort", nullptr));
        selectionSortButton->setText(QCoreApplication::translate("InformationWindow", "Selection sort", nullptr));
        quickSortButton->setText(QCoreApplication::translate("InformationWindow", "Quick sort", nullptr));
        mergeSortButton->setText(QCoreApplication::translate("InformationWindow", "Merge sort", nullptr));
        bucketSortButton->setText(QCoreApplication::translate("InformationWindow", "Bucket sort", nullptr));
        LSDSortButton->setText(QCoreApplication::translate("InformationWindow", "LSD sort", nullptr));
        MSDSortButton->setText(QCoreApplication::translate("InformationWindow", "MSD sort", nullptr));
        bitonicSortButton->setText(QCoreApplication::translate("InformationWindow", "Bitonic sort", nullptr));
        timsortButton->setText(QCoreApplication::translate("InformationWindow", "Timsort", nullptr));
        label->setText(QCoreApplication::translate("InformationWindow", "Comparison sorts:", nullptr));
        label_2->setText(QCoreApplication::translate("InformationWindow", "Non-comparison sorts:", nullptr));
        label_3->setText(QCoreApplication::translate("InformationWindow", "Others:", nullptr));
        helpButton->setText(QCoreApplication::translate("InformationWindow", "Help", nullptr));
        returnButton->setText(QCoreApplication::translate("InformationWindow", "Return", nullptr));
        dialogLabel->setText(QCoreApplication::translate("InformationWindow", "Good luck in learning! \360\237\221\250\360\237\217\274\342\200\215\360\237\222\273", nullptr));
        moreButton->setText(QCoreApplication::translate("InformationWindow", "\342\231\233", nullptr));
        bubbleSortButton->setText(QCoreApplication::translate("InformationWindow", "Bubble sort", nullptr));
        shakerSortButton->setText(QCoreApplication::translate("InformationWindow", "Shaker sort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InformationWindow: public Ui_InformationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONWINDOW_H
