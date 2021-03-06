/****************************************************************************
**
** Copyright (C) 2016 Konstantin Shegunov <kshegunov@gmail.com>
**
** This file is part of the documentation of the QtDaemon library.
**
** The MIT License (MIT)
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in all
** copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE.
**
****************************************************************************/

#include "simpledaemon.h"

#include <QDaemonLog>
#include <QStringList>

SimpleDaemon::SimpleDaemon(QObject * parent)
    : QObject(parent)
{
}

void SimpleDaemon::onDaemonReady(const QStringList & arguments)
{
    qDaemonLog() << QStringLiteral("The daemon has been started with arguments: %1").arg(arguments.join(' '));
}

void SimpleDaemon::onStarted()
{
    qDaemonLog() << QStringLiteral("The daemon was started.");
}

void SimpleDaemon::onStopped()
{
    qDaemonLog() << QStringLiteral("The daemon was stopped.");
}

void SimpleDaemon::onInstalled()
{
    qDaemonLog() << QStringLiteral("The daemon was installed.");
}

void SimpleDaemon::onUninstalled()
{
    qDaemonLog() << QStringLiteral("The daemon was uninstalled.");
}
