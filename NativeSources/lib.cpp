#include <napi.h>

Napi::String SayHi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::String::New(env, "Hi!");
}

Napi::Object init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "sayHi"), Napi::Function::New(env, SayHi));
    return exports;
};

NODE_API_MODULE(hello_world, init);

/*To call this library in index.js type following to lines:

const hello_world = require('bindings')('hello_world')
console.log(hello_world.sayHi());
*/