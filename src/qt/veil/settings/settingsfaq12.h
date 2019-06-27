#ifndef SETTINGSFAQ12_H
#define SETTINGSFAQ12_H

#include <QWidget>

namespace Ui {
class SettingsFaq12;
}

class SettingsFaq12 : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsFaq12(QWidget *parent = nullptr);
    ~SettingsFaq12();

private:
    Ui::SettingsFaq12 *ui;
};

#endif // SETTINGSFAQ12_H
