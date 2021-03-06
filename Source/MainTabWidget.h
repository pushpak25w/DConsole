#pragma once

#include <QtGui>
#include <QtWidgets>
#include <QObject>
#include "utils.h"
class MainTabWidget : public QTabWidget
{
    Q_OBJECT
public:
    explicit MainTabWidget(QWidget *parent=0);
    ~MainTabWidget();
public slots:
    void CreateNewTab(QString,QString,QString);
private:
    std::map<QString, int> tabIndex;
};