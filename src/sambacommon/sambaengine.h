/*
 * Copyright (c) 2015-2016, Atmel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef SAMBA_ENGINE_H
#define SAMBA_ENGINE_H

#include "sambacommon.h"
#include <QObject>
#include <QUrl>
#include <QtQml>

class SAMBACOMMONSHARED_EXPORT SambaEngine : public QObject
{
	Q_OBJECT

public:
	explicit SambaEngine(QObject *parent = 0);
	~SambaEngine();

	QQmlEngine* qmlEngine();
	QObject* createComponentInstance(QQmlComponent* component, QQmlContext* context);
	QObject* createComponentInstance(const QString& script, QQmlContext* context);
	QObject* createComponentInstance(const QUrl &url, QQmlContext* context);

private slots:
	void engineQuit();
	void engineWarnings(const QList<QQmlError> &warnings);

private:
	QQmlEngine m_qmlEngine;
	bool m_hasWarnings;
};

#endif // SAMBA_ENGINE_H
