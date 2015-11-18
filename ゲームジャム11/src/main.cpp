#include "lib/framework.hpp"


int main() {

  AppEnv env(640, 480);

  while (env.isOpen()) {
    env.begin();
    

    env.end();
  }
}
