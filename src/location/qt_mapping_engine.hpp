// Copyright (C) 2023 MapLibre contributors
// Copyright (C) 2017 The Qt Company Ltd.
// Copyright (C) 2017 Mapbox, Inc.

// SPDX-License-Identifier: LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#pragma once

#include "../core/export.hpp"

#include <QMapLibre/Settings>

#include <QtLocation/QGeoServiceProvider>
#include <QtLocation/private/qgeomappingmanagerengine_p.h>

namespace QMapLibre {

class Q_MAPLIBRE_EXPORT QtMappingEngine : public QGeoMappingManagerEngine {
    Q_OBJECT

public:
    QtMappingEngine(const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString);

    QGeoMap *createMap() override;

private:
    Settings m_settings;
    QString m_mapItemsBefore;
};

} // namespace QMapLibre
