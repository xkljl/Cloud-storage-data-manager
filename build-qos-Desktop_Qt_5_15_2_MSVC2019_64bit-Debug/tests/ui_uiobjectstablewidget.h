/********************************************************************************
** Form generated from reading UI file 'uiobjectstablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIOBJECTSTABLEWIDGET_H
#define UI_UIOBJECTSTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/fend/uicom/uibreadwidget.h"
#include "src/fend/uicom/uipagewidget.h"
#include "src/fend/uicom/uipushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_UiObjectsTableWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetTools;
    QHBoxLayout *horizontalLayout;
    UiPushButton *btnBuckets;
    UiPushButton *btnRefresh;
    UiPushButton *btnUpload;
    UiPushButton *btnDownload;
    QSpacerItem *horizontalSpacer;
    UiBreadWidget *widgetBread;
    QTableView *tableView;
    UiPageWidget *widgetPage;

    void setupUi(QWidget *UiObjectsTableWidget)
    {
        if (UiObjectsTableWidget->objectName().isEmpty())
            UiObjectsTableWidget->setObjectName(QString::fromUtf8("UiObjectsTableWidget"));
        UiObjectsTableWidget->resize(760, 542);
        verticalLayout = new QVBoxLayout(UiObjectsTableWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetTools = new QWidget(UiObjectsTableWidget);
        widgetTools->setObjectName(QString::fromUtf8("widgetTools"));
        horizontalLayout = new QHBoxLayout(widgetTools);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnBuckets = new UiPushButton(widgetTools);
        btnBuckets->setObjectName(QString::fromUtf8("btnBuckets"));

        horizontalLayout->addWidget(btnBuckets);

        btnRefresh = new UiPushButton(widgetTools);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        horizontalLayout->addWidget(btnRefresh);

        btnUpload = new UiPushButton(widgetTools);
        btnUpload->setObjectName(QString::fromUtf8("btnUpload"));

        horizontalLayout->addWidget(btnUpload);

        btnDownload = new UiPushButton(widgetTools);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));

        horizontalLayout->addWidget(btnDownload);

        horizontalSpacer = new QSpacerItem(433, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widgetTools);

        widgetBread = new UiBreadWidget(UiObjectsTableWidget);
        widgetBread->setObjectName(QString::fromUtf8("widgetBread"));

        verticalLayout->addWidget(widgetBread);

        tableView = new QTableView(UiObjectsTableWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(false);

        verticalLayout->addWidget(tableView);

        widgetPage = new UiPageWidget(UiObjectsTableWidget);
        widgetPage->setObjectName(QString::fromUtf8("widgetPage"));

        verticalLayout->addWidget(widgetPage);


        retranslateUi(UiObjectsTableWidget);

        QMetaObject::connectSlotsByName(UiObjectsTableWidget);
    } // setupUi

    void retranslateUi(QWidget *UiObjectsTableWidget)
    {
        UiObjectsTableWidget->setWindowTitle(QCoreApplication::translate("UiObjectsTableWidget", "Form", nullptr));
        btnBuckets->setText(QCoreApplication::translate("UiObjectsTableWidget", "\346\241\266\345\210\227\350\241\250", nullptr));
        btnRefresh->setText(QCoreApplication::translate("UiObjectsTableWidget", "\345\210\267\346\226\260", nullptr));
        btnUpload->setText(QCoreApplication::translate("UiObjectsTableWidget", "\344\270\212\344\274\240", nullptr));
        btnDownload->setText(QCoreApplication::translate("UiObjectsTableWidget", "\344\270\213\350\275\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiObjectsTableWidget: public Ui_UiObjectsTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIOBJECTSTABLEWIDGET_H