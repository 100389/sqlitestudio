#ifndef NEWVERSIONDIALOG_H
#define NEWVERSIONDIALOG_H

#ifdef PORTABLE_CONFIG

#include "services/updatemanager.h"
#include "guiSQLiteStudio_global.h"
#include <QDialog>

namespace Ui {
    class NewVersionDialog;
}

class GUI_API_EXPORT NewVersionDialog : public QDialog
{
        Q_OBJECT

    public:
        explicit NewVersionDialog(QWidget *parent = 0);
        ~NewVersionDialog();

        void setUpdate(const QString& version, const QString& url);

    protected:
        void showEvent(QShowEvent*);

    private:
        void init();

        QString downloadUrl;

        Ui::NewVersionDialog *ui = nullptr;

    private slots:
        void downloadUpdates();
        void openHomePage();
};

#endif // PORTABLE_CONFIG
#endif // NEWVERSIONDIALOG_H
