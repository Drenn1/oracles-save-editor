#ifndef XMLPARSER_H
#define XMLPARSER_H

#include <QtCore/QtCore>
#include "editableitem.h"


class XmlParser
{
public:
    XmlParser(QString filename);

    QVector<EditableItemSection> getEditableItems(SaveFile *saveFile);

private:
    QString filename;
};

#endif // XMLPARSER_H
