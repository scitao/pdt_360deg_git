// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stixels.proto

#ifndef PROTOBUF_stixels_2eproto__INCLUDED
#define PROTOBUF_stixels_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "ground_top_and_bottom.pb.h"
#include "plane3d.pb.h"
// @@protoc_insertion_point(includes)

namespace doppia_protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_stixels_2eproto();
void protobuf_AssignDesc_stixels_2eproto();
void protobuf_ShutdownFile_stixels_2eproto();

class Stixel;
class Stixels;

enum Stixel_Type {
  Stixel_Type_Unknown = 0,
  Stixel_Type_Occluded = 1,
  Stixel_Type_Car = 2,
  Stixel_Type_Pedestrian = 3,
  Stixel_Type_StaticObject = 4
};
bool Stixel_Type_IsValid(int value);
const Stixel_Type Stixel_Type_Type_MIN = Stixel_Type_Unknown;
const Stixel_Type Stixel_Type_Type_MAX = Stixel_Type_StaticObject;
const int Stixel_Type_Type_ARRAYSIZE = Stixel_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Stixel_Type_descriptor();
inline const ::std::string& Stixel_Type_Name(Stixel_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Stixel_Type_descriptor(), value);
}
inline bool Stixel_Type_Parse(
    const ::std::string& name, Stixel_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Stixel_Type>(
    Stixel_Type_descriptor(), name, value);
}
// ===================================================================

class Stixel : public ::google::protobuf::Message {
 public:
  Stixel();
  virtual ~Stixel();

  Stixel(const Stixel& from);

  inline Stixel& operator=(const Stixel& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Stixel& default_instance();

  void Swap(Stixel* other);

  // implements Message ----------------------------------------------

  Stixel* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Stixel& from);
  void MergeFrom(const Stixel& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Stixel_Type Type;
  static const Type Unknown = Stixel_Type_Unknown;
  static const Type Occluded = Stixel_Type_Occluded;
  static const Type Car = Stixel_Type_Car;
  static const Type Pedestrian = Stixel_Type_Pedestrian;
  static const Type StaticObject = Stixel_Type_StaticObject;
  static inline bool Type_IsValid(int value) {
    return Stixel_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Stixel_Type_Type_MIN;
  static const Type Type_MAX =
    Stixel_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Stixel_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Stixel_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Stixel_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Stixel_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint32 width = 1;
  inline bool has_width() const;
  inline void clear_width();
  static const int kWidthFieldNumber = 1;
  inline ::google::protobuf::uint32 width() const;
  inline void set_width(::google::protobuf::uint32 value);

  // required uint32 x = 2;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 2;
  inline ::google::protobuf::uint32 x() const;
  inline void set_x(::google::protobuf::uint32 value);

  // required uint32 bottom_y = 3;
  inline bool has_bottom_y() const;
  inline void clear_bottom_y();
  static const int kBottomYFieldNumber = 3;
  inline ::google::protobuf::uint32 bottom_y() const;
  inline void set_bottom_y(::google::protobuf::uint32 value);

  // required uint32 top_y = 4;
  inline bool has_top_y() const;
  inline void clear_top_y();
  static const int kTopYFieldNumber = 4;
  inline ::google::protobuf::uint32 top_y() const;
  inline void set_top_y(::google::protobuf::uint32 value);

  // required uint32 disparity = 5;
  inline bool has_disparity() const;
  inline void clear_disparity();
  static const int kDisparityFieldNumber = 5;
  inline ::google::protobuf::uint32 disparity() const;
  inline void set_disparity(::google::protobuf::uint32 value);

  // required .doppia_protobuf.Stixel.Type type = 6;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 6;
  inline ::doppia_protobuf::Stixel_Type type() const;
  inline void set_type(::doppia_protobuf::Stixel_Type value);

  // optional int32 backward_delta_x = 7 [default = 0];
  inline bool has_backward_delta_x() const;
  inline void clear_backward_delta_x();
  static const int kBackwardDeltaXFieldNumber = 7;
  inline ::google::protobuf::int32 backward_delta_x() const;
  inline void set_backward_delta_x(::google::protobuf::int32 value);

  // optional bool valid_delta_x = 8 [default = false];
  inline bool has_valid_delta_x() const;
  inline void clear_valid_delta_x();
  static const int kValidDeltaXFieldNumber = 8;
  inline bool valid_delta_x() const;
  inline void set_valid_delta_x(bool value);

  // optional int32 backward_width = 9 [default = 1];
  inline bool has_backward_width() const;
  inline void clear_backward_width();
  static const int kBackwardWidthFieldNumber = 9;
  inline ::google::protobuf::int32 backward_width() const;
  inline void set_backward_width(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:doppia_protobuf.Stixel)
 private:
  inline void set_has_width();
  inline void clear_has_width();
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_bottom_y();
  inline void clear_has_bottom_y();
  inline void set_has_top_y();
  inline void clear_has_top_y();
  inline void set_has_disparity();
  inline void clear_has_disparity();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_backward_delta_x();
  inline void clear_has_backward_delta_x();
  inline void set_has_valid_delta_x();
  inline void clear_has_valid_delta_x();
  inline void set_has_backward_width();
  inline void clear_has_backward_width();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 width_;
  ::google::protobuf::uint32 x_;
  ::google::protobuf::uint32 bottom_y_;
  ::google::protobuf::uint32 top_y_;
  ::google::protobuf::uint32 disparity_;
  int type_;
  ::google::protobuf::int32 backward_delta_x_;
  bool valid_delta_x_;
  ::google::protobuf::int32 backward_width_;
  friend void  protobuf_AddDesc_stixels_2eproto();
  friend void protobuf_AssignDesc_stixels_2eproto();
  friend void protobuf_ShutdownFile_stixels_2eproto();

  void InitAsDefaultInstance();
  static Stixel* default_instance_;
};
// -------------------------------------------------------------------

class Stixels : public ::google::protobuf::Message {
 public:
  Stixels();
  virtual ~Stixels();

  Stixels(const Stixels& from);

  inline Stixels& operator=(const Stixels& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Stixels& default_instance();

  void Swap(Stixels* other);

  // implements Message ----------------------------------------------

  Stixels* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Stixels& from);
  void MergeFrom(const Stixels& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string image_name = 1;
  inline bool has_image_name() const;
  inline void clear_image_name();
  static const int kImageNameFieldNumber = 1;
  inline const ::std::string& image_name() const;
  inline void set_image_name(const ::std::string& value);
  inline void set_image_name(const char* value);
  inline void set_image_name(const char* value, size_t size);
  inline ::std::string* mutable_image_name();
  inline ::std::string* release_image_name();
  inline void set_allocated_image_name(::std::string* image_name);

  // repeated .doppia_protobuf.Stixel stixels = 2;
  inline int stixels_size() const;
  inline void clear_stixels();
  static const int kStixelsFieldNumber = 2;
  inline const ::doppia_protobuf::Stixel& stixels(int index) const;
  inline ::doppia_protobuf::Stixel* mutable_stixels(int index);
  inline ::doppia_protobuf::Stixel* add_stixels();
  inline const ::google::protobuf::RepeatedPtrField< ::doppia_protobuf::Stixel >&
      stixels() const;
  inline ::google::protobuf::RepeatedPtrField< ::doppia_protobuf::Stixel >*
      mutable_stixels();

  // optional .doppia_protobuf.GroundTopAndBottom ground_top_and_bottom = 3;
  inline bool has_ground_top_and_bottom() const;
  inline void clear_ground_top_and_bottom();
  static const int kGroundTopAndBottomFieldNumber = 3;
  inline const ::doppia_protobuf::GroundTopAndBottom& ground_top_and_bottom() const;
  inline ::doppia_protobuf::GroundTopAndBottom* mutable_ground_top_and_bottom();
  inline ::doppia_protobuf::GroundTopAndBottom* release_ground_top_and_bottom();
  inline void set_allocated_ground_top_and_bottom(::doppia_protobuf::GroundTopAndBottom* ground_top_and_bottom);

  // optional .doppia_protobuf.Plane3d ground_plane = 4;
  inline bool has_ground_plane() const;
  inline void clear_ground_plane();
  static const int kGroundPlaneFieldNumber = 4;
  inline const ::doppia_protobuf::Plane3d& ground_plane() const;
  inline ::doppia_protobuf::Plane3d* mutable_ground_plane();
  inline ::doppia_protobuf::Plane3d* release_ground_plane();
  inline void set_allocated_ground_plane(::doppia_protobuf::Plane3d* ground_plane);

  // @@protoc_insertion_point(class_scope:doppia_protobuf.Stixels)
 private:
  inline void set_has_image_name();
  inline void clear_has_image_name();
  inline void set_has_ground_top_and_bottom();
  inline void clear_has_ground_top_and_bottom();
  inline void set_has_ground_plane();
  inline void clear_has_ground_plane();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* image_name_;
  ::google::protobuf::RepeatedPtrField< ::doppia_protobuf::Stixel > stixels_;
  ::doppia_protobuf::GroundTopAndBottom* ground_top_and_bottom_;
  ::doppia_protobuf::Plane3d* ground_plane_;
  friend void  protobuf_AddDesc_stixels_2eproto();
  friend void protobuf_AssignDesc_stixels_2eproto();
  friend void protobuf_ShutdownFile_stixels_2eproto();

  void InitAsDefaultInstance();
  static Stixels* default_instance_;
};
// ===================================================================


// ===================================================================

// Stixel

// required uint32 width = 1;
inline bool Stixel::has_width() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Stixel::set_has_width() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Stixel::clear_has_width() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Stixel::clear_width() {
  width_ = 0u;
  clear_has_width();
}
inline ::google::protobuf::uint32 Stixel::width() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.width)
  return width_;
}
inline void Stixel::set_width(::google::protobuf::uint32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.width)
}

// required uint32 x = 2;
inline bool Stixel::has_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Stixel::set_has_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Stixel::clear_has_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Stixel::clear_x() {
  x_ = 0u;
  clear_has_x();
}
inline ::google::protobuf::uint32 Stixel::x() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.x)
  return x_;
}
inline void Stixel::set_x(::google::protobuf::uint32 value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.x)
}

// required uint32 bottom_y = 3;
inline bool Stixel::has_bottom_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Stixel::set_has_bottom_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Stixel::clear_has_bottom_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Stixel::clear_bottom_y() {
  bottom_y_ = 0u;
  clear_has_bottom_y();
}
inline ::google::protobuf::uint32 Stixel::bottom_y() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.bottom_y)
  return bottom_y_;
}
inline void Stixel::set_bottom_y(::google::protobuf::uint32 value) {
  set_has_bottom_y();
  bottom_y_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.bottom_y)
}

// required uint32 top_y = 4;
inline bool Stixel::has_top_y() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Stixel::set_has_top_y() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Stixel::clear_has_top_y() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Stixel::clear_top_y() {
  top_y_ = 0u;
  clear_has_top_y();
}
inline ::google::protobuf::uint32 Stixel::top_y() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.top_y)
  return top_y_;
}
inline void Stixel::set_top_y(::google::protobuf::uint32 value) {
  set_has_top_y();
  top_y_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.top_y)
}

// required uint32 disparity = 5;
inline bool Stixel::has_disparity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Stixel::set_has_disparity() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Stixel::clear_has_disparity() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Stixel::clear_disparity() {
  disparity_ = 0u;
  clear_has_disparity();
}
inline ::google::protobuf::uint32 Stixel::disparity() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.disparity)
  return disparity_;
}
inline void Stixel::set_disparity(::google::protobuf::uint32 value) {
  set_has_disparity();
  disparity_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.disparity)
}

// required .doppia_protobuf.Stixel.Type type = 6;
inline bool Stixel::has_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Stixel::set_has_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Stixel::clear_has_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Stixel::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::doppia_protobuf::Stixel_Type Stixel::type() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.type)
  return static_cast< ::doppia_protobuf::Stixel_Type >(type_);
}
inline void Stixel::set_type(::doppia_protobuf::Stixel_Type value) {
  assert(::doppia_protobuf::Stixel_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.type)
}

// optional int32 backward_delta_x = 7 [default = 0];
inline bool Stixel::has_backward_delta_x() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Stixel::set_has_backward_delta_x() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Stixel::clear_has_backward_delta_x() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Stixel::clear_backward_delta_x() {
  backward_delta_x_ = 0;
  clear_has_backward_delta_x();
}
inline ::google::protobuf::int32 Stixel::backward_delta_x() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.backward_delta_x)
  return backward_delta_x_;
}
inline void Stixel::set_backward_delta_x(::google::protobuf::int32 value) {
  set_has_backward_delta_x();
  backward_delta_x_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.backward_delta_x)
}

// optional bool valid_delta_x = 8 [default = false];
inline bool Stixel::has_valid_delta_x() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Stixel::set_has_valid_delta_x() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Stixel::clear_has_valid_delta_x() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Stixel::clear_valid_delta_x() {
  valid_delta_x_ = false;
  clear_has_valid_delta_x();
}
inline bool Stixel::valid_delta_x() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.valid_delta_x)
  return valid_delta_x_;
}
inline void Stixel::set_valid_delta_x(bool value) {
  set_has_valid_delta_x();
  valid_delta_x_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.valid_delta_x)
}

// optional int32 backward_width = 9 [default = 1];
inline bool Stixel::has_backward_width() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Stixel::set_has_backward_width() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Stixel::clear_has_backward_width() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Stixel::clear_backward_width() {
  backward_width_ = 1;
  clear_has_backward_width();
}
inline ::google::protobuf::int32 Stixel::backward_width() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixel.backward_width)
  return backward_width_;
}
inline void Stixel::set_backward_width(::google::protobuf::int32 value) {
  set_has_backward_width();
  backward_width_ = value;
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixel.backward_width)
}

// -------------------------------------------------------------------

// Stixels

// optional string image_name = 1;
inline bool Stixels::has_image_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Stixels::set_has_image_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Stixels::clear_has_image_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Stixels::clear_image_name() {
  if (image_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_name_->clear();
  }
  clear_has_image_name();
}
inline const ::std::string& Stixels::image_name() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixels.image_name)
  return *image_name_;
}
inline void Stixels::set_image_name(const ::std::string& value) {
  set_has_image_name();
  if (image_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_name_ = new ::std::string;
  }
  image_name_->assign(value);
  // @@protoc_insertion_point(field_set:doppia_protobuf.Stixels.image_name)
}
inline void Stixels::set_image_name(const char* value) {
  set_has_image_name();
  if (image_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_name_ = new ::std::string;
  }
  image_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:doppia_protobuf.Stixels.image_name)
}
inline void Stixels::set_image_name(const char* value, size_t size) {
  set_has_image_name();
  if (image_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_name_ = new ::std::string;
  }
  image_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:doppia_protobuf.Stixels.image_name)
}
inline ::std::string* Stixels::mutable_image_name() {
  set_has_image_name();
  if (image_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:doppia_protobuf.Stixels.image_name)
  return image_name_;
}
inline ::std::string* Stixels::release_image_name() {
  clear_has_image_name();
  if (image_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = image_name_;
    image_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Stixels::set_allocated_image_name(::std::string* image_name) {
  if (image_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete image_name_;
  }
  if (image_name) {
    set_has_image_name();
    image_name_ = image_name;
  } else {
    clear_has_image_name();
    image_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:doppia_protobuf.Stixels.image_name)
}

// repeated .doppia_protobuf.Stixel stixels = 2;
inline int Stixels::stixels_size() const {
  return stixels_.size();
}
inline void Stixels::clear_stixels() {
  stixels_.Clear();
}
inline const ::doppia_protobuf::Stixel& Stixels::stixels(int index) const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixels.stixels)
  return stixels_.Get(index);
}
inline ::doppia_protobuf::Stixel* Stixels::mutable_stixels(int index) {
  // @@protoc_insertion_point(field_mutable:doppia_protobuf.Stixels.stixels)
  return stixels_.Mutable(index);
}
inline ::doppia_protobuf::Stixel* Stixels::add_stixels() {
  // @@protoc_insertion_point(field_add:doppia_protobuf.Stixels.stixels)
  return stixels_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::doppia_protobuf::Stixel >&
Stixels::stixels() const {
  // @@protoc_insertion_point(field_list:doppia_protobuf.Stixels.stixels)
  return stixels_;
}
inline ::google::protobuf::RepeatedPtrField< ::doppia_protobuf::Stixel >*
Stixels::mutable_stixels() {
  // @@protoc_insertion_point(field_mutable_list:doppia_protobuf.Stixels.stixels)
  return &stixels_;
}

// optional .doppia_protobuf.GroundTopAndBottom ground_top_and_bottom = 3;
inline bool Stixels::has_ground_top_and_bottom() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Stixels::set_has_ground_top_and_bottom() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Stixels::clear_has_ground_top_and_bottom() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Stixels::clear_ground_top_and_bottom() {
  if (ground_top_and_bottom_ != NULL) ground_top_and_bottom_->::doppia_protobuf::GroundTopAndBottom::Clear();
  clear_has_ground_top_and_bottom();
}
inline const ::doppia_protobuf::GroundTopAndBottom& Stixels::ground_top_and_bottom() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixels.ground_top_and_bottom)
  return ground_top_and_bottom_ != NULL ? *ground_top_and_bottom_ : *default_instance_->ground_top_and_bottom_;
}
inline ::doppia_protobuf::GroundTopAndBottom* Stixels::mutable_ground_top_and_bottom() {
  set_has_ground_top_and_bottom();
  if (ground_top_and_bottom_ == NULL) ground_top_and_bottom_ = new ::doppia_protobuf::GroundTopAndBottom;
  // @@protoc_insertion_point(field_mutable:doppia_protobuf.Stixels.ground_top_and_bottom)
  return ground_top_and_bottom_;
}
inline ::doppia_protobuf::GroundTopAndBottom* Stixels::release_ground_top_and_bottom() {
  clear_has_ground_top_and_bottom();
  ::doppia_protobuf::GroundTopAndBottom* temp = ground_top_and_bottom_;
  ground_top_and_bottom_ = NULL;
  return temp;
}
inline void Stixels::set_allocated_ground_top_and_bottom(::doppia_protobuf::GroundTopAndBottom* ground_top_and_bottom) {
  delete ground_top_and_bottom_;
  ground_top_and_bottom_ = ground_top_and_bottom;
  if (ground_top_and_bottom) {
    set_has_ground_top_and_bottom();
  } else {
    clear_has_ground_top_and_bottom();
  }
  // @@protoc_insertion_point(field_set_allocated:doppia_protobuf.Stixels.ground_top_and_bottom)
}

// optional .doppia_protobuf.Plane3d ground_plane = 4;
inline bool Stixels::has_ground_plane() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Stixels::set_has_ground_plane() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Stixels::clear_has_ground_plane() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Stixels::clear_ground_plane() {
  if (ground_plane_ != NULL) ground_plane_->::doppia_protobuf::Plane3d::Clear();
  clear_has_ground_plane();
}
inline const ::doppia_protobuf::Plane3d& Stixels::ground_plane() const {
  // @@protoc_insertion_point(field_get:doppia_protobuf.Stixels.ground_plane)
  return ground_plane_ != NULL ? *ground_plane_ : *default_instance_->ground_plane_;
}
inline ::doppia_protobuf::Plane3d* Stixels::mutable_ground_plane() {
  set_has_ground_plane();
  if (ground_plane_ == NULL) ground_plane_ = new ::doppia_protobuf::Plane3d;
  // @@protoc_insertion_point(field_mutable:doppia_protobuf.Stixels.ground_plane)
  return ground_plane_;
}
inline ::doppia_protobuf::Plane3d* Stixels::release_ground_plane() {
  clear_has_ground_plane();
  ::doppia_protobuf::Plane3d* temp = ground_plane_;
  ground_plane_ = NULL;
  return temp;
}
inline void Stixels::set_allocated_ground_plane(::doppia_protobuf::Plane3d* ground_plane) {
  delete ground_plane_;
  ground_plane_ = ground_plane;
  if (ground_plane) {
    set_has_ground_plane();
  } else {
    clear_has_ground_plane();
  }
  // @@protoc_insertion_point(field_set_allocated:doppia_protobuf.Stixels.ground_plane)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace doppia_protobuf

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::doppia_protobuf::Stixel_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::doppia_protobuf::Stixel_Type>() {
  return ::doppia_protobuf::Stixel_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_stixels_2eproto__INCLUDED
