///
/// @file    World.cxx
/// @author  Barthelemy von Haller
///

#include "WorldIga.h"
#include "WorldMesh.h"

#include <iostream>

namespace ProjectTemplate {
namespace iga_solver {

void World::greet()
{
  std::cout << "iga_solver world!!" << std::endl;

  ProjectTemplate::mesh_converter::World projAWorld;
  projAWorld.greet();
}

int World::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace iga_solver
} // namespace ProjectTemplate
