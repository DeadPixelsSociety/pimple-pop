#ifndef PPP_HEAD_H
#define PPP_HEAD_H

#include <gf/Entity.h>

namespace ppp {

  class Head : public gf::Entity {
  public:
    virtual void update(float dt) override;
    virtual void render(gf::RenderTarget& target) override;
  };

}

#endif // PPP_HEAD_H
