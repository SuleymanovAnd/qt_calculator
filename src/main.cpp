#include <QApplication>
#include "./ui_calc.h"
#include "calcMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    Ui_MainWindow calc;
    calc.setupUi(&window);
    window.lineInput = calc.lineInput;
    window.lineInput_2 = calc.lineInput_2;
    window.lineOutput = calc.lineOutput;
    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}
