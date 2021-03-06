#ifndef COLLISIONOBJECT
#define COLLISIONOBJECT

#include <nanogui/nanogui.h>

#include "../mesh.h"

using namespace CGL;
using namespace std;
using namespace nanogui;

class CollisionObject {
public:
  virtual void render(GLShader &shader) = 0;
  virtual bool collide(PointMass &pm) = 0;
  virtual void simulate(double, Vector3D, vector<CollisionObject *> *) = 0;
  virtual void zero_forces() = 0;
  virtual void reset() = 0;

  Vector3D forces;

private:
  double friction;
};

#endif /* COLLISIONOBJECT */
