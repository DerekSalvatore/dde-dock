#ifndef SHUTDOWNPLUGIN_H
#define SHUTDOWNPLUGIN_H

#include "pluginsiteminterface.h"

class ShutdownPlugin : public QObject, PluginsItemInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginsItemInterface)
    Q_PLUGIN_METADATA(IID "com.deepin.dock.PluginsItemInterface" FILE "shutdown.json")

public:
    explicit ShutdownPlugin(QObject *parent = 0);

    const QString pluginName() const;
    void init(PluginProxyInterface *proxyInter);
    void displayModeChanged(const Dock::DisplayMode displayMode);

    ItemType pluginType(const QString &itemKey);

    const QIcon itemIcon(const QString &itemKey);
    const QString itemCommand(const QString &itemKey);

private:
    QIcon m_icon;
};

#endif // SHUTDOWNPLUGIN_H