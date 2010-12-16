###############################################################################
#
# This file is part of commhistory-daemon.
#
# Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
# Contact: Alexander Shalamov <alexander.shalamov@nokia.com>
#
# This library is free software; you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License version 2.1 as
# published by the Free Software Foundation.
#
# This library is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
# License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this library; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
#
###############################################################################

DEFINES -= QT_NO_DEBUG QT_NO_DEBUG_OUTPUT QT_NO_WARNING_OUTPUT
DEFINES += UNIT_TEST
QT          += testlib dbus sql gui
TEMPLATE     = app
INCLUDEPATH += . .. \
               ../../src
MOBILITY += contacts versit
CONFIG += mobility
COMMHISTORYDSRCDIR = ../../src
DEPENDPATH  += $${INCLUDEPATH}
PKGCONFIG += meegotouch TelepathyQt4 commhistory

!include( ../common-installs-config.pri ) : \
    error( "Unable to include common-installs-config.pri!" )
# override default path for tests
target.path = $${INSTALL_PREFIX}/share/commhistory-daemon-tests
