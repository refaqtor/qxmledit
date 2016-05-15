/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2016 by Luca Bellonda and individual contributors       *
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


#ifndef EDITXSDENUMCOMMAND_H
#define EDITXSDENUMCOMMAND_H

#include "undocommand.h"

#include "regola.h"

class EditXSDEnumCommand : public UndoCommand
{
    QList<Element*> _elementsToInsert;
    QList<Element*> _elementsToDelete;
    QList<int> _oldPositions;
    QList<int> _newPositions;

    void insertOldObjects(Element *selected);
    void removeNewObjects(Element *selected);
    void insertNewObjects(Element *selected);
    void removeOldObjects(Element *selected);
    void updateRegola(Element *selected);

public:
    EditXSDEnumCommand(QTreeWidget *theWidget, Regola *newRegola, QList<int> newPath, QList<Element *> newElements);
    ~EditXSDEnumCommand();

    virtual void undo() ;
    virtual void redo() ;
};

#endif // EDITXSDENUMCOMMAND_H
