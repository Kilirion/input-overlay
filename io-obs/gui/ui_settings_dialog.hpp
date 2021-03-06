/********************************************************************************
** Form generated from reading UI file 'io_settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef IO_SETTINGS_DIALOG_H
#define IO_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_io_config_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabs;
    QWidget *tab_local;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_local_features;
    QCheckBox *cb_iohook;
    QCheckBox *cb_gamepad_hook;
    QCheckBox *cb_enable_overlay;
    QCheckBox *cb_enable_history;
    QCheckBox *cb_enable_control;
    QCheckBox *cb_regex;
    QLabel *lbl_mode;
    QComboBox *cb_list_mode;
    QLabel *lbl_new_entry;
    QFrame *frame_entry;
    QHBoxLayout *horizontalLayout;
    QComboBox *cb_text;
    QPushButton *btn_refresh_cb;
    QPushButton *btn_add;
    QLabel *lbl_list;
    QListWidget *list_filters;
    QPushButton *btn_remove;
    QWidget *tab_remote;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cb_enable_remote;
    QCheckBox *cb_log;
    QLabel *lbl_status;
    QLabel *lbl_port;
    QSpinBox *box_port;
    QLabel *lbl_refresh_rate;
    QSpinBox *box_refresh_rate;
    QLabel *lbl_connections;
    QListWidget *box_connections;
    QPushButton *btn_refresh;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *io_config_dialog)
    {
        if (io_config_dialog->objectName().isEmpty())
            io_config_dialog->setObjectName(QStringLiteral("io_config_dialog"));
        io_config_dialog->resize(340, 575);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(io_config_dialog->sizePolicy().hasHeightForWidth());
        io_config_dialog->setSizePolicy(sizePolicy);
        io_config_dialog->setMinimumSize(QSize(340, 575));
        verticalLayout = new QVBoxLayout(io_config_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabs = new QTabWidget(io_config_dialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setTabPosition(QTabWidget::North);
        tabs->setTabShape(QTabWidget::Rounded);
        tabs->setElideMode(Qt::ElideRight);
        tabs->setTabsClosable(false);
        tabs->setMovable(false);
        tabs->setTabBarAutoHide(false);
        tab_local = new QWidget();
        tab_local->setObjectName(QStringLiteral("tab_local"));
        verticalLayout_2 = new QVBoxLayout(tab_local);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbl_local_features = new QLabel(tab_local);
        lbl_local_features->setObjectName(QStringLiteral("lbl_local_features"));
        lbl_local_features->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(lbl_local_features);

        cb_iohook = new QCheckBox(tab_local);
        cb_iohook->setObjectName(QStringLiteral("cb_iohook"));

        verticalLayout_2->addWidget(cb_iohook);

        cb_gamepad_hook = new QCheckBox(tab_local);
        cb_gamepad_hook->setObjectName(QStringLiteral("cb_gamepad_hook"));

        verticalLayout_2->addWidget(cb_gamepad_hook);

        cb_enable_overlay = new QCheckBox(tab_local);
        cb_enable_overlay->setObjectName(QStringLiteral("cb_enable_overlay"));

        verticalLayout_2->addWidget(cb_enable_overlay);

        cb_enable_history = new QCheckBox(tab_local);
        cb_enable_history->setObjectName(QStringLiteral("cb_enable_history"));

        verticalLayout_2->addWidget(cb_enable_history);

        cb_enable_control = new QCheckBox(tab_local);
        cb_enable_control->setObjectName(QStringLiteral("cb_enable_control"));

        verticalLayout_2->addWidget(cb_enable_control);

        cb_regex = new QCheckBox(tab_local);
        cb_regex->setObjectName(QStringLiteral("cb_regex"));

        verticalLayout_2->addWidget(cb_regex);

        lbl_mode = new QLabel(tab_local);
        lbl_mode->setObjectName(QStringLiteral("lbl_mode"));

        verticalLayout_2->addWidget(lbl_mode);

        cb_list_mode = new QComboBox(tab_local);
        cb_list_mode->addItem(QString());
        cb_list_mode->addItem(QString());
        cb_list_mode->setObjectName(QStringLiteral("cb_list_mode"));

        verticalLayout_2->addWidget(cb_list_mode);

        lbl_new_entry = new QLabel(tab_local);
        lbl_new_entry->setObjectName(QStringLiteral("lbl_new_entry"));

        verticalLayout_2->addWidget(lbl_new_entry);

        frame_entry = new QFrame(tab_local);
        frame_entry->setObjectName(QStringLiteral("frame_entry"));
        frame_entry->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(frame_entry);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 0, 2, 0);
        cb_text = new QComboBox(frame_entry);
        cb_text->setObjectName(QStringLiteral("cb_text"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cb_text->sizePolicy().hasHeightForWidth());
        cb_text->setSizePolicy(sizePolicy1);
        cb_text->setEditable(true);

        horizontalLayout->addWidget(cb_text);

        btn_refresh_cb = new QPushButton(frame_entry);
        btn_refresh_cb->setObjectName(QStringLiteral("btn_refresh_cb"));

        horizontalLayout->addWidget(btn_refresh_cb);


        verticalLayout_2->addWidget(frame_entry);

        btn_add = new QPushButton(tab_local);
        btn_add->setObjectName(QStringLiteral("btn_add"));

        verticalLayout_2->addWidget(btn_add);

        lbl_list = new QLabel(tab_local);
        lbl_list->setObjectName(QStringLiteral("lbl_list"));

        verticalLayout_2->addWidget(lbl_list);

        list_filters = new QListWidget(tab_local);
        list_filters->setObjectName(QStringLiteral("list_filters"));

        verticalLayout_2->addWidget(list_filters);

        btn_remove = new QPushButton(tab_local);
        btn_remove->setObjectName(QStringLiteral("btn_remove"));

        verticalLayout_2->addWidget(btn_remove);

        tabs->addTab(tab_local, QString());
        tab_remote = new QWidget();
        tab_remote->setObjectName(QStringLiteral("tab_remote"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab_remote->sizePolicy().hasHeightForWidth());
        tab_remote->setSizePolicy(sizePolicy2);
        tab_remote->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(tab_remote);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        cb_enable_remote = new QCheckBox(tab_remote);
        cb_enable_remote->setObjectName(QStringLiteral("cb_enable_remote"));

        verticalLayout_4->addWidget(cb_enable_remote);

        cb_log = new QCheckBox(tab_remote);
        cb_log->setObjectName(QStringLiteral("cb_log"));

        verticalLayout_4->addWidget(cb_log);

        lbl_status = new QLabel(tab_remote);
        lbl_status->setObjectName(QStringLiteral("lbl_status"));

        verticalLayout_4->addWidget(lbl_status);

        lbl_port = new QLabel(tab_remote);
        lbl_port->setObjectName(QStringLiteral("lbl_port"));

        verticalLayout_4->addWidget(lbl_port);

        box_port = new QSpinBox(tab_remote);
        box_port->setObjectName(QStringLiteral("box_port"));
        box_port->setButtonSymbols(QAbstractSpinBox::NoButtons);
        box_port->setProperty("showGroupSeparator", QVariant(false));
        box_port->setMaximum(65535);
        box_port->setValue(1608);

        verticalLayout_4->addWidget(box_port);

        lbl_refresh_rate = new QLabel(tab_remote);
        lbl_refresh_rate->setObjectName(QStringLiteral("lbl_refresh_rate"));

        verticalLayout_4->addWidget(lbl_refresh_rate);

        box_refresh_rate = new QSpinBox(tab_remote);
        box_refresh_rate->setObjectName(QStringLiteral("box_refresh_rate"));
        box_refresh_rate->setSuffix(QStringLiteral(" ms"));
        box_refresh_rate->setMinimum(5);
        box_refresh_rate->setMaximum(5000);
        box_refresh_rate->setValue(25);

        verticalLayout_4->addWidget(box_refresh_rate);

        lbl_connections = new QLabel(tab_remote);
        lbl_connections->setObjectName(QStringLiteral("lbl_connections"));

        verticalLayout_4->addWidget(lbl_connections);

        box_connections = new QListWidget(tab_remote);
        box_connections->setObjectName(QStringLiteral("box_connections"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(box_connections->sizePolicy().hasHeightForWidth());
        box_connections->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(box_connections);

        btn_refresh = new QPushButton(tab_remote);
        btn_refresh->setObjectName(QStringLiteral("btn_refresh"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btn_refresh->sizePolicy().hasHeightForWidth());
        btn_refresh->setSizePolicy(sizePolicy4);

        verticalLayout_4->addWidget(btn_refresh);

        tabs->addTab(tab_remote, QString());

        verticalLayout->addWidget(tabs);

        button_box = new QDialogButtonBox(io_config_dialog);
        button_box->setObjectName(QStringLiteral("button_box"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(button_box->sizePolicy().hasHeightForWidth());
        button_box->setSizePolicy(sizePolicy5);
        button_box->setAcceptDrops(false);
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);


        retranslateUi(io_config_dialog);
        QObject::connect(button_box, SIGNAL(accepted()), io_config_dialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), io_config_dialog, SLOT(reject()));

        tabs->setCurrentIndex(0);
        cb_list_mode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(io_config_dialog);
    } // setupUi

    void retranslateUi(QDialog *io_config_dialog)
    {
        io_config_dialog->setWindowTitle(QApplication::translate("io_config_dialog", "Dialog.Title", nullptr));
        lbl_local_features->setText(QApplication::translate("io_config_dialog", "Dialog.LocalFeatures.Info", nullptr));
        cb_iohook->setText(QApplication::translate("io_config_dialog", "Dialog.Uiohook.Enable", nullptr));
        cb_gamepad_hook->setText(QApplication::translate("io_config_dialog", "Dialog.GamepadHook.Enable", nullptr));
        cb_enable_overlay->setText(QApplication::translate("io_config_dialog", "Dialog.InputOverlay.Enable", nullptr));
        cb_enable_history->setText(QApplication::translate("io_config_dialog", "Dialog.InputHistory.Enable", nullptr));
        cb_enable_control->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Enable", nullptr));
        cb_regex->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Regex.Enable", nullptr));
        lbl_mode->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode", nullptr));
        cb_list_mode->setItemText(0, QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode.Whitelist", nullptr));
        cb_list_mode->setItemText(1, QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode.Blacklist", nullptr));

        cb_list_mode->setCurrentText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode.Whitelist", nullptr));
        lbl_new_entry->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.NewEntry", nullptr));
        btn_refresh_cb->setText(QApplication::translate("io_config_dialog", "Source.InputSource.Reload", nullptr));
        btn_add->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Add", nullptr));
        lbl_list->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.List", nullptr));
        btn_remove->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Remove", nullptr));
        tabs->setTabText(tabs->indexOf(tab_local), QApplication::translate("io_config_dialog", "Dialog.LocalFeatures", nullptr));
        cb_enable_remote->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Enable", nullptr));
        cb_log->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Logging", nullptr));
        lbl_status->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Status", nullptr));
        lbl_port->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Port", nullptr));
#ifndef QT_NO_TOOLTIP
        lbl_refresh_rate->setToolTip(QApplication::translate("io_config_dialog", "<html><head/><body><p>Dialog.InputOverlay.RemoteRefreshRate.Tooltip</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lbl_refresh_rate->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.RefreshRate", nullptr));
#ifndef QT_NO_TOOLTIP
        box_refresh_rate->setToolTip(QApplication::translate("io_config_dialog", "<html><head/><body><p>Dialog.InputOverlay.RemoteRefreshRate.Tooltip</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lbl_connections->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Connections", nullptr));
        btn_refresh->setText(QApplication::translate("io_config_dialog", "Source.InputSource.Reload", nullptr));
        tabs->setTabText(tabs->indexOf(tab_remote), QApplication::translate("io_config_dialog", "Dialog.RemoteConnection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class io_config_dialog: public Ui_io_config_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IO_SETTINGS_DIALOG_H
