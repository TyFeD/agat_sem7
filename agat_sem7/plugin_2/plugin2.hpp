#ifndef PLUGIN2_HPP
#define PLUGIN2_HPP

#include <QtPlugin>
#include <plugininterface.hpp>

class Plugin2
    : public QObject
    , PluginInterface
{

    Q_OBJECT
    Q_PLUGIN_METADATA(IID PluginInterface_iid)
    Q_INTERFACES(PluginInterface)

  public:
    Plugin2();

    // PluginInterface interface
  public:
    QAction* setup(QFrame* dataInputFrame, MapWideget* map) override;
    void     tick() override;
};

#endif // PLUGIN2_HPP
