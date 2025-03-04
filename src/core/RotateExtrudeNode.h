#pragma once

#include <string>

#include "core/node.h"
#include "core/ModuleInstantiation.h"
#include "core/Value.h"

class RotateExtrudeNode : public AbstractPolyNode
{
public:
  VISITABLE();
  RotateExtrudeNode(const ModuleInstantiation *mi) : AbstractPolyNode(mi) {
    convexity = 0;
    fn = fs = fa = 0;
    angle = 360;
    start = 0;
  }
  std::string toString() const override;
  std::string name() const override { return "rotate_extrude"; }

  int convexity;
  double fn, fs, fa;
  double angle, start;
};
