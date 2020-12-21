///
/// @file    World.cxx
/// @author  Barthelemy von Haller
///

#include "WorldMesh.h"

#include <iostream>

namespace ProjectTemplate {
namespace mesh_converter {

void World::greet()
{
  std::cout << "mesh_converter world!!" << std::endl;
}

int World::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace mesh_converter
} // namespace ProjectTemplate
