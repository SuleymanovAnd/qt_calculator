//
// Created by Андрей on 05.02.2023.
//

#ifndef QT_CALC_CALCMAINWINDOW_H
#define QT_CALC_CALCMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <iostream>
#include <QString>

class CalcMainWindow : public QMainWindow{
    Q_OBJECT
public:
    QLineEdit *lineInput = nullptr;
    QLineEdit *lineInput_2 = nullptr;
    QLineEdit *lineOutput = nullptr;

    CalcMainWindow(QWidget* parent = nullptr) : QMainWindow(parent){};
public slots:
    void add0(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "0");}
                if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "0");}
};
    void add1(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "1");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "1");}
    };
    void add2(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "2");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "2");}
    };
    void add3(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "3");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "3");}
    };
    void add4(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "4");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "4");}
    };
    void add5(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "5");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "5");}
    };
    void add6(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "6");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "6");}
    };
    void add7(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "7");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "7");}
    };
    void add8(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "8");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "8");}
    };
    void add9(){if(lineInput->hasFocus()){lineInput->setText(lineInput->text() + "9");}
        if (lineInput_2->hasFocus()){lineInput_2->setText(lineInput_2->text() + "9");}
    };
    void multiplication(){
        auto a = lineInput->text();
        auto b = lineInput_2->text();
        QString mtp;
        mtp.setNum(a.toLongLong() * b.toLongLong());
        lineOutput->setText("= " + mtp);};
    void division(){
        auto a = lineInput->text();
        auto b = lineInput_2->text();
        if (b.toInt() == 0) {
            lineOutput->setText("ERROR");
        } else {
            QString dvs;
            dvs.setNum(a.toLongLong() / b.toLongLong());
            lineOutput->setText("= " + dvs);
        }
        ;};
    void addition(){
        auto a = lineInput->text();
        auto b = lineInput_2->text();
        QString add;
        add.setNum (a.toLongLong() + b.toLongLong());
        lineOutput->setText("= " + add);};
    void subtraction(){
        if(lineInput_2->text() == "" && lineInput->hasFocus()){lineInput->setText("-" + lineInput->text());}
        else{
            auto a = lineInput->text();
            auto b = lineInput_2->text();
            QString sub;
            sub.setNum (a.toLongLong() - b.toLongLong());
            lineOutput->setText("= " + sub);
        }
        };
};

#endif //QT_CALC_CALCMAINWINDOW_H
