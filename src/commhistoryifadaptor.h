/******************************************************************************
**
** This file is part of commhistory-daemon.
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Alexander Shalamov <alexander.shalamov@nokia.com>
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of the GNU Lesser General Public License version 2.1 as
** published by the Free Software Foundation.
**
** This library is distributed in the hope that it will be useful, but
** WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
** or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
** License for more details.
**
** You should have received a copy of the GNU Lesser General Public License
** along with this library; if not, write to the Free Software Foundation, Inc.,
** 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
**
******************************************************************************/

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c CommHistoryIfAdaptor -a commhistoryifadaptor CommHistoryIf.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments before re-generating it.
 */

#ifndef COMMHISTORYIFADAPTOR_H_1272020919
#define COMMHISTORYIFADAPTOR_H_1272020919

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.nokia.CommHistoryIf
 */
class CommHistoryIfAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.nokia.CommHistoryIf")

public:
    CommHistoryIfAdaptor(QObject *parent);
    virtual ~CommHistoryIfAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void activateNotification(int groupId, const QString &remoteActionString);
    void activateAuthorization(const QString& contactId,
                               const QString& accountPath,
                               const QString& filename,
                               const QString& message,
                               const QString& transactionId,
                               const QString& accountUniqueIdentifier);
};

#endif
