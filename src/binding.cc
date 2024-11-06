#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_action();

namespace {

NAN_METHOD(New) {}

void Initialize(Local<Object> exports, Local<Value> module, void* priv) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = tpl->GetFunction(Nan::GetCurrentContext()).ToLocalChecked();
  Local<Object> instance = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance, 0, tree_sitter_action());

  instance->Set(Nan::GetCurrentContext(), Nan::New("name").ToLocalChecked(), Nan::New("action").ToLocalChecked()).Check();
  exports->Set(Nan::GetCurrentContext(), Nan::New("exports").ToLocalChecked(), instance).Check();
}

NODE_MODULE(tree_sitter_action_binding, Initialize)

}  // namespace
