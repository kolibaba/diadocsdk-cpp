// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Documents/AcceptanceCertificateDocument.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Documents/AcceptanceCertificateDocument.pb.h"

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
namespace Documents {
namespace AcceptanceCertificateDocument {

namespace {

const ::google::protobuf::Descriptor* AcceptanceCertificateMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AcceptanceCertificateMetadata_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* AcceptanceCertificateDocumentStatus_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Documents_2fAcceptanceCertificateDocument_2eproto() {
  protobuf_AddDesc_Documents_2fAcceptanceCertificateDocument_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Documents/AcceptanceCertificateDocument.proto");
  GOOGLE_CHECK(file != NULL);
  AcceptanceCertificateMetadata_descriptor_ = file->message_type(0);
  static const int AcceptanceCertificateMetadata_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AcceptanceCertificateMetadata, documentstatus_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AcceptanceCertificateMetadata, total_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AcceptanceCertificateMetadata, vat_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AcceptanceCertificateMetadata, grounds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AcceptanceCertificateMetadata, receiptstatus_),
  };
  AcceptanceCertificateMetadata_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AcceptanceCertificateMetadata_descriptor_,
      AcceptanceCertificateMetadata::default_instance_,
      AcceptanceCertificateMetadata_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AcceptanceCertificateMetadata, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AcceptanceCertificateMetadata, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AcceptanceCertificateMetadata));
  AcceptanceCertificateDocumentStatus_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Documents_2fAcceptanceCertificateDocument_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AcceptanceCertificateMetadata_descriptor_, &AcceptanceCertificateMetadata::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Documents_2fAcceptanceCertificateDocument_2eproto() {
  delete AcceptanceCertificateMetadata::default_instance_;
  delete AcceptanceCertificateMetadata_reflection_;
}

void protobuf_AddDesc_Documents_2fAcceptanceCertificateDocument_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::Documents::protobuf_AddDesc_Documents_2fReceiptStatus_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n-Documents/AcceptanceCertificateDocumen"
    "t.proto\0228Diadoc.Api.Proto.Documents.Acce"
    "ptanceCertificateDocument\032\035Documents/Rec"
    "eiptStatus.proto\"\310\002\n\035AcceptanceCertifica"
    "teMetadata\022\241\001\n\016DocumentStatus\030\001 \001(\0162].Di"
    "adoc.Api.Proto.Documents.AcceptanceCerti"
    "ficateDocument.AcceptanceCertificateDocu"
    "mentStatus:*UnknownAcceptanceCertificate"
    "DocumentStatus\022\r\n\005Total\030\002 \002(\t\022\013\n\003Vat\030\003 \001"
    "(\t\022\017\n\007Grounds\030\004 \001(\t\022V\n\rReceiptStatus\030\005 \001"
    "(\0162).Diadoc.Api.Proto.Documents.ReceiptS"
    "tatus:\024UnknownReceiptStatus*\254\007\n#Acceptan"
    "ceCertificateDocumentStatus\022.\n*UnknownAc"
    "ceptanceCertificateDocumentStatus\020\000\022(\n$O"
    "utboundWaitingForRecipientSignature\020\001\022\"\n"
    "\036OutboundWithRecipientSignature\020\002\022+\n\'Out"
    "boundWithRecipientPartiallySignature\020\023\022-"
    "\n)OutboundRecipientSignatureRequestRejec"
    "ted\020\003\022%\n!OutboundWaitingForSenderSignatu"
    "re\020\n\022\"\n\036OutboundInvalidSenderSignature\020\013"
    "\022\'\n#OutboundNoRecipientSignatureRequest\020"
    "\020\022\'\n#InboundWaitingForRecipientSignature"
    "\020\004\022!\n\035InboundWithRecipientSignature\020\005\022*\n"
    "&InboundWithRecipientPartiallySignature\020"
    "\024\022,\n(InboundRecipientSignatureRequestRej"
    "ected\020\006\022$\n InboundInvalidRecipientSignat"
    "ure\020\014\022&\n\"InboundNoRecipientSignatureRequ"
    "est\020\021\022(\n$InternalWaitingForRecipientSign"
    "ature\020\007\022\"\n\036InternalWithRecipientSignatur"
    "e\020\010\022+\n\'InternalWithRecipientPartiallySig"
    "nature\020\025\022-\n)InternalRecipientSignatureRe"
    "questRejected\020\t\022%\n!InternalWaitingForSen"
    "derSignature\020\r\022\"\n\036InternalInvalidSenderS"
    "ignature\020\016\022%\n!InternalInvalidRecipientSi"
    "gnature\020\017\022\'\n#InternalNoRecipientSignatur"
    "eRequest\020\022", 1410);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Documents/AcceptanceCertificateDocument.proto", &protobuf_RegisterTypes);
  AcceptanceCertificateMetadata::default_instance_ = new AcceptanceCertificateMetadata();
  AcceptanceCertificateMetadata::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Documents_2fAcceptanceCertificateDocument_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Documents_2fAcceptanceCertificateDocument_2eproto {
  StaticDescriptorInitializer_Documents_2fAcceptanceCertificateDocument_2eproto() {
    protobuf_AddDesc_Documents_2fAcceptanceCertificateDocument_2eproto();
  }
} static_descriptor_initializer_Documents_2fAcceptanceCertificateDocument_2eproto_;
const ::google::protobuf::EnumDescriptor* AcceptanceCertificateDocumentStatus_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AcceptanceCertificateDocumentStatus_descriptor_;
}
bool AcceptanceCertificateDocumentStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int AcceptanceCertificateMetadata::kDocumentStatusFieldNumber;
const int AcceptanceCertificateMetadata::kTotalFieldNumber;
const int AcceptanceCertificateMetadata::kVatFieldNumber;
const int AcceptanceCertificateMetadata::kGroundsFieldNumber;
const int AcceptanceCertificateMetadata::kReceiptStatusFieldNumber;
#endif  // !_MSC_VER

AcceptanceCertificateMetadata::AcceptanceCertificateMetadata()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
}

void AcceptanceCertificateMetadata::InitAsDefaultInstance() {
}

AcceptanceCertificateMetadata::AcceptanceCertificateMetadata(const AcceptanceCertificateMetadata& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
}

void AcceptanceCertificateMetadata::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  documentstatus_ = 0;
  total_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  vat_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  grounds_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  receiptstatus_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AcceptanceCertificateMetadata::~AcceptanceCertificateMetadata() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
  SharedDtor();
}

void AcceptanceCertificateMetadata::SharedDtor() {
  if (total_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete total_;
  }
  if (vat_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete vat_;
  }
  if (grounds_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete grounds_;
  }
  if (this != default_instance_) {
  }
}

void AcceptanceCertificateMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AcceptanceCertificateMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AcceptanceCertificateMetadata_descriptor_;
}

const AcceptanceCertificateMetadata& AcceptanceCertificateMetadata::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Documents_2fAcceptanceCertificateDocument_2eproto();
  return *default_instance_;
}

AcceptanceCertificateMetadata* AcceptanceCertificateMetadata::default_instance_ = NULL;

AcceptanceCertificateMetadata* AcceptanceCertificateMetadata::New() const {
  return new AcceptanceCertificateMetadata;
}

void AcceptanceCertificateMetadata::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<AcceptanceCertificateMetadata*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(documentstatus_, receiptstatus_);
    if (has_total()) {
      if (total_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        total_->clear();
      }
    }
    if (has_vat()) {
      if (vat_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        vat_->clear();
      }
    }
    if (has_grounds()) {
      if (grounds_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        grounds_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AcceptanceCertificateMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateDocumentStatus DocumentStatus = 1 [default = UnknownAcceptanceCertificateDocumentStatus];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Diadoc::Api::Proto::Documents::AcceptanceCertificateDocument::AcceptanceCertificateDocumentStatus_IsValid(value)) {
            set_documentstatus(static_cast< ::Diadoc::Api::Proto::Documents::AcceptanceCertificateDocument::AcceptanceCertificateDocumentStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Total;
        break;
      }

      // required string Total = 2;
      case 2: {
        if (tag == 18) {
         parse_Total:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_total()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->total().data(), this->total().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "total");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_Vat;
        break;
      }

      // optional string Vat = 3;
      case 3: {
        if (tag == 26) {
         parse_Vat:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_vat()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->vat().data(), this->vat().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "vat");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_Grounds;
        break;
      }

      // optional string Grounds = 4;
      case 4: {
        if (tag == 34) {
         parse_Grounds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_grounds()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->grounds().data(), this->grounds().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "grounds");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_ReceiptStatus;
        break;
      }

      // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 5 [default = UnknownReceiptStatus];
      case 5: {
        if (tag == 40) {
         parse_ReceiptStatus:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Diadoc::Api::Proto::Documents::ReceiptStatus_IsValid(value)) {
            set_receiptstatus(static_cast< ::Diadoc::Api::Proto::Documents::ReceiptStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
  return false;
#undef DO_
}

void AcceptanceCertificateMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
  // optional .Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateDocumentStatus DocumentStatus = 1 [default = UnknownAcceptanceCertificateDocumentStatus];
  if (has_documentstatus()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->documentstatus(), output);
  }

  // required string Total = 2;
  if (has_total()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->total().data(), this->total().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "total");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->total(), output);
  }

  // optional string Vat = 3;
  if (has_vat()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->vat().data(), this->vat().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "vat");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->vat(), output);
  }

  // optional string Grounds = 4;
  if (has_grounds()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->grounds().data(), this->grounds().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "grounds");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->grounds(), output);
  }

  // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 5 [default = UnknownReceiptStatus];
  if (has_receiptstatus()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->receiptstatus(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
}

::google::protobuf::uint8* AcceptanceCertificateMetadata::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
  // optional .Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateDocumentStatus DocumentStatus = 1 [default = UnknownAcceptanceCertificateDocumentStatus];
  if (has_documentstatus()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->documentstatus(), target);
  }

  // required string Total = 2;
  if (has_total()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->total().data(), this->total().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "total");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->total(), target);
  }

  // optional string Vat = 3;
  if (has_vat()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->vat().data(), this->vat().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "vat");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->vat(), target);
  }

  // optional string Grounds = 4;
  if (has_grounds()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->grounds().data(), this->grounds().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "grounds");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->grounds(), target);
  }

  // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 5 [default = UnknownReceiptStatus];
  if (has_receiptstatus()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->receiptstatus(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateMetadata)
  return target;
}

int AcceptanceCertificateMetadata::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .Diadoc.Api.Proto.Documents.AcceptanceCertificateDocument.AcceptanceCertificateDocumentStatus DocumentStatus = 1 [default = UnknownAcceptanceCertificateDocumentStatus];
    if (has_documentstatus()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->documentstatus());
    }

    // required string Total = 2;
    if (has_total()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->total());
    }

    // optional string Vat = 3;
    if (has_vat()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->vat());
    }

    // optional string Grounds = 4;
    if (has_grounds()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->grounds());
    }

    // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 5 [default = UnknownReceiptStatus];
    if (has_receiptstatus()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->receiptstatus());
    }

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

void AcceptanceCertificateMetadata::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AcceptanceCertificateMetadata* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AcceptanceCertificateMetadata*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AcceptanceCertificateMetadata::MergeFrom(const AcceptanceCertificateMetadata& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_documentstatus()) {
      set_documentstatus(from.documentstatus());
    }
    if (from.has_total()) {
      set_total(from.total());
    }
    if (from.has_vat()) {
      set_vat(from.vat());
    }
    if (from.has_grounds()) {
      set_grounds(from.grounds());
    }
    if (from.has_receiptstatus()) {
      set_receiptstatus(from.receiptstatus());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AcceptanceCertificateMetadata::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AcceptanceCertificateMetadata::CopyFrom(const AcceptanceCertificateMetadata& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AcceptanceCertificateMetadata::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  return true;
}

void AcceptanceCertificateMetadata::Swap(AcceptanceCertificateMetadata* other) {
  if (other != this) {
    std::swap(documentstatus_, other->documentstatus_);
    std::swap(total_, other->total_);
    std::swap(vat_, other->vat_);
    std::swap(grounds_, other->grounds_);
    std::swap(receiptstatus_, other->receiptstatus_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AcceptanceCertificateMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AcceptanceCertificateMetadata_descriptor_;
  metadata.reflection = AcceptanceCertificateMetadata_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcceptanceCertificateDocument
}  // namespace Documents
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
