/******************************************************************************
 *
 * This file is part of Log4Qt library.
 *
 * Copyright (C) 2007 - 2020 Log4Qt contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#ifndef LOGGEROBJECT_H
#define LOGGEROBJECT_H

#include "log4qt/logger.h"//每个使用log4qt的类都需要包含此头文件

#include <QObject>

class LoggerObject : public QObject
{
    Q_OBJECT
   // LOG4QT_DECLARE_QCLASS_LOGGER    //在继承类QObject的类中，可以使用此宏定义，声明logger
public:
    explicit LoggerObject(QObject *parent = nullptr);

Q_SIGNALS:
    void exit(int code);

private Q_SLOTS:
    void onTimeout();

private:
    int mCounter;
};

#endif // LOGGEROBJECT_H
