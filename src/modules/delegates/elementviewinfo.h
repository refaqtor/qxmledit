/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2014 by Luca Bellonda and individual contributors       *
 *    as indicated in the AUTHORS file                                    *
 *  lbellonda _at_ gmail.com                                              *
 *                                                                        *
 * This library is free software; you can redistribute it and/or          *
 * modify it under the terms of the GNU Library General Public            *
 * License as published by the Free Software Foundation; either           *
 * version 2 of the License, or (at your option) any later version.       *
 *                                                                        *
 * This library is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 * Library General Public License for more details.                       *
 *                                                                        *
 * You should have received a copy of the GNU Library General Public      *
 * License along with this library; if not, write to the                  *
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA  02110-1301  USA                                            *
 **************************************************************************/


#ifndef ELEMENTVIEWINFO_H
#define ELEMENTVIEWINFO_H

#include <QIcon>
#include <QString>
#include <QBrush>

class ElementViewInfo
{
public:
    ElementViewInfo();
    ~ElementViewInfo();

    QBrush _commentBrush;
    QBrush _procInstrBrush;
    QColor _attrNamesColor ;
    QColor _attrValuesColor ;
    QColor _attrAnonValuesColor ;
    QBrush _textDeclBrush;

    QIcon _icon;
    QIcon _attributesIcon;
    QString _tagInfo;
    QString _childrenSizeInfo;
    QString _attrTextInfo;
    QColor _attrTextColor;
    QString _inlineTextInfo;
    QString _b64Info;
    QBrush _mainFgBrush;
    bool _useFgBrush;
    bool _attrTextInfoIsHtml;
    bool _showAllComments;
    bool _isAnonPreview;
    QHash<void *, QString> *_origDataForAnonPreview;
    bool _isTextAnon ;

    void reset();
    void fillDebug();
};

#endif // ELEMENTVIEWINFO_H
