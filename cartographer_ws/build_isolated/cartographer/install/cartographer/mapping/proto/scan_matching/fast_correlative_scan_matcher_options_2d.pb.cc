// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* FastCorrelativeScanMatcherOptions2D_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FastCorrelativeScanMatcherOptions2D_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.proto");
  GOOGLE_CHECK(file != NULL);
  FastCorrelativeScanMatcherOptions2D_descriptor_ = file->message_type(0);
  static const int FastCorrelativeScanMatcherOptions2D_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions2D, linear_search_window_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions2D, angular_search_window_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions2D, branch_and_bound_depth_),
  };
  FastCorrelativeScanMatcherOptions2D_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FastCorrelativeScanMatcherOptions2D_descriptor_,
      FastCorrelativeScanMatcherOptions2D::default_instance_,
      FastCorrelativeScanMatcherOptions2D_offsets_,
      -1,
      -1,
      -1,
      sizeof(FastCorrelativeScanMatcherOptions2D),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions2D, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions2D, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FastCorrelativeScanMatcherOptions2D_descriptor_, &FastCorrelativeScanMatcherOptions2D::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto() {
  delete FastCorrelativeScanMatcherOptions2D::default_instance_;
  delete FastCorrelativeScanMatcherOptions2D_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nWcartographer/mapping/proto/scan_matchi"
    "ng/fast_correlative_scan_matcher_options"
    "_2d.proto\022(cartographer.mapping.scan_mat"
    "ching.proto\"\202\001\n#FastCorrelativeScanMatch"
    "erOptions2D\022\034\n\024linear_search_window\030\003 \001("
    "\001\022\035\n\025angular_search_window\030\004 \001(\001\022\036\n\026bran"
    "ch_and_bound_depth\030\002 \001(\005b\006proto3", 272);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.proto", &protobuf_RegisterTypes);
  FastCorrelativeScanMatcherOptions2D::default_instance_ = new FastCorrelativeScanMatcherOptions2D();
  FastCorrelativeScanMatcherOptions2D::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FastCorrelativeScanMatcherOptions2D::kLinearSearchWindowFieldNumber;
const int FastCorrelativeScanMatcherOptions2D::kAngularSearchWindowFieldNumber;
const int FastCorrelativeScanMatcherOptions2D::kBranchAndBoundDepthFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FastCorrelativeScanMatcherOptions2D::FastCorrelativeScanMatcherOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
}

void FastCorrelativeScanMatcherOptions2D::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

FastCorrelativeScanMatcherOptions2D::FastCorrelativeScanMatcherOptions2D(const FastCorrelativeScanMatcherOptions2D& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
}

void FastCorrelativeScanMatcherOptions2D::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  linear_search_window_ = 0;
  angular_search_window_ = 0;
  branch_and_bound_depth_ = 0;
}

FastCorrelativeScanMatcherOptions2D::~FastCorrelativeScanMatcherOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  SharedDtor();
}

void FastCorrelativeScanMatcherOptions2D::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FastCorrelativeScanMatcherOptions2D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FastCorrelativeScanMatcherOptions2D::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FastCorrelativeScanMatcherOptions2D_descriptor_;
}

const FastCorrelativeScanMatcherOptions2D& FastCorrelativeScanMatcherOptions2D::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto();
  return *default_instance_;
}

FastCorrelativeScanMatcherOptions2D* FastCorrelativeScanMatcherOptions2D::default_instance_ = NULL;

FastCorrelativeScanMatcherOptions2D* FastCorrelativeScanMatcherOptions2D::New(::google::protobuf::Arena* arena) const {
  FastCorrelativeScanMatcherOptions2D* n = new FastCorrelativeScanMatcherOptions2D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FastCorrelativeScanMatcherOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(FastCorrelativeScanMatcherOptions2D, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<FastCorrelativeScanMatcherOptions2D*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(linear_search_window_, branch_and_bound_depth_);

#undef ZR_HELPER_
#undef ZR_

}

bool FastCorrelativeScanMatcherOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 branch_and_bound_depth = 2;
      case 2: {
        if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &branch_and_bound_depth_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_linear_search_window;
        break;
      }

      // optional double linear_search_window = 3;
      case 3: {
        if (tag == 25) {
         parse_linear_search_window:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &linear_search_window_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_angular_search_window;
        break;
      }

      // optional double angular_search_window = 4;
      case 4: {
        if (tag == 33) {
         parse_angular_search_window:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angular_search_window_)));

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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  return false;
#undef DO_
}

void FastCorrelativeScanMatcherOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  // optional int32 branch_and_bound_depth = 2;
  if (this->branch_and_bound_depth() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->branch_and_bound_depth(), output);
  }

  // optional double linear_search_window = 3;
  if (this->linear_search_window() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->linear_search_window(), output);
  }

  // optional double angular_search_window = 4;
  if (this->angular_search_window() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->angular_search_window(), output);
  }

  // @@protoc_insertion_point(serialize_end:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
}

::google::protobuf::uint8* FastCorrelativeScanMatcherOptions2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  // optional int32 branch_and_bound_depth = 2;
  if (this->branch_and_bound_depth() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->branch_and_bound_depth(), target);
  }

  // optional double linear_search_window = 3;
  if (this->linear_search_window() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->linear_search_window(), target);
  }

  // optional double angular_search_window = 4;
  if (this->angular_search_window() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->angular_search_window(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  return target;
}

int FastCorrelativeScanMatcherOptions2D::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  int total_size = 0;

  // optional double linear_search_window = 3;
  if (this->linear_search_window() != 0) {
    total_size += 1 + 8;
  }

  // optional double angular_search_window = 4;
  if (this->angular_search_window() != 0) {
    total_size += 1 + 8;
  }

  // optional int32 branch_and_bound_depth = 2;
  if (this->branch_and_bound_depth() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->branch_and_bound_depth());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FastCorrelativeScanMatcherOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FastCorrelativeScanMatcherOptions2D* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FastCorrelativeScanMatcherOptions2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
    MergeFrom(*source);
  }
}

void FastCorrelativeScanMatcherOptions2D::MergeFrom(const FastCorrelativeScanMatcherOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.linear_search_window() != 0) {
    set_linear_search_window(from.linear_search_window());
  }
  if (from.angular_search_window() != 0) {
    set_angular_search_window(from.angular_search_window());
  }
  if (from.branch_and_bound_depth() != 0) {
    set_branch_and_bound_depth(from.branch_and_bound_depth());
  }
}

void FastCorrelativeScanMatcherOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FastCorrelativeScanMatcherOptions2D::CopyFrom(const FastCorrelativeScanMatcherOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FastCorrelativeScanMatcherOptions2D::IsInitialized() const {

  return true;
}

void FastCorrelativeScanMatcherOptions2D::Swap(FastCorrelativeScanMatcherOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FastCorrelativeScanMatcherOptions2D::InternalSwap(FastCorrelativeScanMatcherOptions2D* other) {
  std::swap(linear_search_window_, other->linear_search_window_);
  std::swap(angular_search_window_, other->angular_search_window_);
  std::swap(branch_and_bound_depth_, other->branch_and_bound_depth_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FastCorrelativeScanMatcherOptions2D::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FastCorrelativeScanMatcherOptions2D_descriptor_;
  metadata.reflection = FastCorrelativeScanMatcherOptions2D_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FastCorrelativeScanMatcherOptions2D

// optional double linear_search_window = 3;
void FastCorrelativeScanMatcherOptions2D::clear_linear_search_window() {
  linear_search_window_ = 0;
}
 double FastCorrelativeScanMatcherOptions2D::linear_search_window() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.linear_search_window)
  return linear_search_window_;
}
 void FastCorrelativeScanMatcherOptions2D::set_linear_search_window(double value) {
  
  linear_search_window_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.linear_search_window)
}

// optional double angular_search_window = 4;
void FastCorrelativeScanMatcherOptions2D::clear_angular_search_window() {
  angular_search_window_ = 0;
}
 double FastCorrelativeScanMatcherOptions2D::angular_search_window() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.angular_search_window)
  return angular_search_window_;
}
 void FastCorrelativeScanMatcherOptions2D::set_angular_search_window(double value) {
  
  angular_search_window_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.angular_search_window)
}

// optional int32 branch_and_bound_depth = 2;
void FastCorrelativeScanMatcherOptions2D::clear_branch_and_bound_depth() {
  branch_and_bound_depth_ = 0;
}
 ::google::protobuf::int32 FastCorrelativeScanMatcherOptions2D::branch_and_bound_depth() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.branch_and_bound_depth)
  return branch_and_bound_depth_;
}
 void FastCorrelativeScanMatcherOptions2D::set_branch_and_bound_depth(::google::protobuf::int32 value) {
  
  branch_and_bound_depth_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.branch_and_bound_depth)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
