// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Departments/DepartmentList.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Departments/DepartmentList.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Departments {

namespace {

const ::google::protobuf::Descriptor* DepartmentList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DepartmentList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Departments_2fDepartmentList_2eproto() {
  protobuf_AddDesc_Departments_2fDepartmentList_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Departments/DepartmentList.proto");
  GOOGLE_CHECK(file != NULL);
  DepartmentList_descriptor_ = file->message_type(0);
  static const int DepartmentList_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DepartmentList, departments_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DepartmentList, totalcount_),
  };
  DepartmentList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DepartmentList_descriptor_,
      DepartmentList::default_instance_,
      DepartmentList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DepartmentList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DepartmentList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DepartmentList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Departments_2fDepartmentList_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DepartmentList_descriptor_, &DepartmentList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Departments_2fDepartmentList_2eproto() {
  delete DepartmentList::default_instance_;
  delete DepartmentList_reflection_;
}

void protobuf_AddDesc_Departments_2fDepartmentList_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::Departments::protobuf_AddDesc_Departments_2fDepartment_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n Departments/DepartmentList.proto\022\034Diad"
    "oc.Api.Proto.Departments\032\034Departments/De"
    "partment.proto\"c\n\016DepartmentList\022=\n\013Depa"
    "rtments\030\001 \003(\0132(.Diadoc.Api.Proto.Departm"
    "ents.Department\022\022\n\nTotalCount\030\002 \002(\005", 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Departments/DepartmentList.proto", &protobuf_RegisterTypes);
  DepartmentList::default_instance_ = new DepartmentList();
  DepartmentList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Departments_2fDepartmentList_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Departments_2fDepartmentList_2eproto {
  StaticDescriptorInitializer_Departments_2fDepartmentList_2eproto() {
    protobuf_AddDesc_Departments_2fDepartmentList_2eproto();
  }
} static_descriptor_initializer_Departments_2fDepartmentList_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DepartmentList::kDepartmentsFieldNumber;
const int DepartmentList::kTotalCountFieldNumber;
#endif  // !_MSC_VER

DepartmentList::DepartmentList()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Departments.DepartmentList)
}

void DepartmentList::InitAsDefaultInstance() {
}

DepartmentList::DepartmentList(const DepartmentList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Departments.DepartmentList)
}

void DepartmentList::SharedCtor() {
  _cached_size_ = 0;
  totalcount_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DepartmentList::~DepartmentList() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Departments.DepartmentList)
  SharedDtor();
}

void DepartmentList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DepartmentList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DepartmentList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DepartmentList_descriptor_;
}

const DepartmentList& DepartmentList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Departments_2fDepartmentList_2eproto();
  return *default_instance_;
}

DepartmentList* DepartmentList::default_instance_ = NULL;

DepartmentList* DepartmentList::New() const {
  return new DepartmentList;
}

void DepartmentList::Clear() {
  totalcount_ = 0;
  departments_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DepartmentList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Departments.DepartmentList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Diadoc.Api.Proto.Departments.Department Departments = 1;
      case 1: {
        if (tag == 10) {
         parse_Departments:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_departments()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_Departments;
        if (input->ExpectTag(16)) goto parse_TotalCount;
        break;
      }

      // required int32 TotalCount = 2;
      case 2: {
        if (tag == 16) {
         parse_TotalCount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &totalcount_)));
          set_has_totalcount();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Departments.DepartmentList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Departments.DepartmentList)
  return false;
#undef DO_
}

void DepartmentList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Departments.DepartmentList)
  // repeated .Diadoc.Api.Proto.Departments.Department Departments = 1;
  for (int i = 0; i < this->departments_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->departments(i), output);
  }

  // required int32 TotalCount = 2;
  if (has_totalcount()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->totalcount(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Departments.DepartmentList)
}

::google::protobuf::uint8* DepartmentList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Departments.DepartmentList)
  // repeated .Diadoc.Api.Proto.Departments.Department Departments = 1;
  for (int i = 0; i < this->departments_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->departments(i), target);
  }

  // required int32 TotalCount = 2;
  if (has_totalcount()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->totalcount(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Departments.DepartmentList)
  return target;
}

int DepartmentList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // required int32 TotalCount = 2;
    if (has_totalcount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->totalcount());
    }

  }
  // repeated .Diadoc.Api.Proto.Departments.Department Departments = 1;
  total_size += 1 * this->departments_size();
  for (int i = 0; i < this->departments_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->departments(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DepartmentList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DepartmentList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DepartmentList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DepartmentList::MergeFrom(const DepartmentList& from) {
  GOOGLE_CHECK_NE(&from, this);
  departments_.MergeFrom(from.departments_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_totalcount()) {
      set_totalcount(from.totalcount());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DepartmentList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DepartmentList::CopyFrom(const DepartmentList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DepartmentList::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->departments())) return false;
  return true;
}

void DepartmentList::Swap(DepartmentList* other) {
  if (other != this) {
    departments_.Swap(&other->departments_);
    std::swap(totalcount_, other->totalcount_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DepartmentList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DepartmentList_descriptor_;
  metadata.reflection = DepartmentList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Departments
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
