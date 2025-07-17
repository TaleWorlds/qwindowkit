// Copyright (C) 2023-2024 Stdware Collections (https://www.github.com/stdware)
// Copyright (C) 2021-2023 wangwenx190 (Yuhang Zhao)
// SPDX-License-Identifier: Apache-2.0

#ifndef QWKWIDGETFRAMEGLOBAL_H
#define QWKWIDGETFRAMEGLOBAL_H

#include <QtCore/QtGlobal>

#ifndef QWK_WIDGETFRAME_EXPORT
#  ifdef QWK_WIDGETFRAME_STATIC
#    define QWK_WIDGETFRAME_EXPORT
#  else
#    ifdef QWK_WIDGETFRAME_LIBRARY
#      define QWK_WIDGETFRAME_EXPORT Q_DECL_EXPORT
#    else
#      define QWK_WIDGETFRAME_EXPORT Q_DECL_IMPORT
#    endif
#  endif
#endif

#endif // QWKWIDGETFRAMEGLOBAL_H
