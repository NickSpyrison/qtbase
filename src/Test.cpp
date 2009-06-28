
#include <QString>
#include <QLabel>

#include "convert.hpp"

extern "C" {
    SEXP newLabelWidget(SEXP label);
}


SEXP 
newLabelWidget(SEXP label) {
    QLabel *lab = new QLabel(sexp2qstring(label), 0);
    // lab->show();
    return wrapQWidget(lab);
}




