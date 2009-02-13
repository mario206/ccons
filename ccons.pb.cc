// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "ccons.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace ccons {

namespace {

const ::google::protobuf::Descriptor* ConsoleOutput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConsoleOutput_reflection_ = NULL;

}  // namespace


void protobuf_BuildDesc_ccons_2eproto_AssignGlobalDescriptors(const ::google::protobuf::FileDescriptor* file) {
  ConsoleOutput_descriptor_ = file->message_type(0);
  ConsoleOutput::default_instance_ = new ConsoleOutput();
  static const int ConsoleOutput_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsoleOutput, output_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsoleOutput, prompt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsoleOutput, input_),
  };
  ConsoleOutput_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConsoleOutput_descriptor_,
      ConsoleOutput::default_instance_,
      ConsoleOutput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsoleOutput, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsoleOutput, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      sizeof(ConsoleOutput));
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConsoleOutput_descriptor_, ConsoleOutput::default_instance_);
  ConsoleOutput::default_instance_->InitAsDefaultInstance();
}

void protobuf_BuildDesc_ccons_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  ::google::protobuf::DescriptorPool* pool =
    ::google::protobuf::DescriptorPool::internal_generated_pool();

  pool->InternalBuildGeneratedFile(
    "\n\013ccons.proto\022\005ccons\">\n\rConsoleOutput\022\016\n"
    "\006output\030\001 \002(\t\022\016\n\006prompt\030\002 \002(\t\022\r\n\005input\030\003"
    " \001(\t", 84,
  &protobuf_BuildDesc_ccons_2eproto_AssignGlobalDescriptors);
}

// Force BuildDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ccons_2eproto {
  StaticDescriptorInitializer_ccons_2eproto() {
    protobuf_BuildDesc_ccons_2eproto();
  }
} static_descriptor_initializer_ccons_2eproto_;


// ===================================================================

const ::std::string ConsoleOutput::_default_output_;
const ::std::string ConsoleOutput::_default_prompt_;
const ::std::string ConsoleOutput::_default_input_;
ConsoleOutput::ConsoleOutput()
  : ::google::protobuf::Message(),
    _cached_size_(0),
    output_(const_cast< ::std::string*>(&_default_output_)),
    prompt_(const_cast< ::std::string*>(&_default_prompt_)),
    input_(const_cast< ::std::string*>(&_default_input_)) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

void ConsoleOutput::InitAsDefaultInstance() {}

ConsoleOutput::ConsoleOutput(const ConsoleOutput& from)
  : ::google::protobuf::Message(),
    _cached_size_(0),
    output_(const_cast< ::std::string*>(&_default_output_)),
    prompt_(const_cast< ::std::string*>(&_default_prompt_)),
    input_(const_cast< ::std::string*>(&_default_input_)) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

ConsoleOutput::~ConsoleOutput() {
  if (output_ != &_default_output_) {
    delete output_;
  }
  if (prompt_ != &_default_prompt_) {
    delete prompt_;
  }
  if (input_ != &_default_input_) {
    delete input_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* ConsoleOutput::descriptor() {
  if (ConsoleOutput_descriptor_ == NULL) protobuf_BuildDesc_ccons_2eproto();
  return ConsoleOutput_descriptor_;
}

const ConsoleOutput& ConsoleOutput::default_instance() {
  if (default_instance_ == NULL) protobuf_BuildDesc_ccons_2eproto();
  return *default_instance_;
}

ConsoleOutput* ConsoleOutput::default_instance_ = NULL;

ConsoleOutput* ConsoleOutput::New() const {
  return new ConsoleOutput;
}

const ::google::protobuf::Descriptor* ConsoleOutput::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* ConsoleOutput::GetReflection() const {
  if (ConsoleOutput_reflection_ == NULL) protobuf_BuildDesc_ccons_2eproto();
  return ConsoleOutput_reflection_;
}

}  // namespace ccons
