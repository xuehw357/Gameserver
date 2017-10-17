// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gs_chat_ipc.proto

#ifndef PROTOBUF_gs_5fchat_5fipc_2eproto__INCLUDED
#define PROTOBUF_gs_5fchat_5fipc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace inner_ipc {
class ChatMsgIPC;
class ChatMsgIPCDefaultTypeInternal;
extern ChatMsgIPCDefaultTypeInternal _ChatMsgIPC_default_instance_;
class PlayerOfflineIPC;
class PlayerOfflineIPCDefaultTypeInternal;
extern PlayerOfflineIPCDefaultTypeInternal _PlayerOfflineIPC_default_instance_;
class PlayerOnlineIPC;
class PlayerOnlineIPCDefaultTypeInternal;
extern PlayerOnlineIPCDefaultTypeInternal _PlayerOnlineIPC_default_instance_;
}  // namespace inner_ipc

namespace inner_ipc {

namespace protobuf_gs_5fchat_5fipc_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_gs_5fchat_5fipc_2eproto

// ===================================================================

class PlayerOnlineIPC : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:inner_ipc.PlayerOnlineIPC) */ {
 public:
  PlayerOnlineIPC();
  virtual ~PlayerOnlineIPC();

  PlayerOnlineIPC(const PlayerOnlineIPC& from);

  inline PlayerOnlineIPC& operator=(const PlayerOnlineIPC& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerOnlineIPC& default_instance();

  static inline const PlayerOnlineIPC* internal_default_instance() {
    return reinterpret_cast<const PlayerOnlineIPC*>(
               &_PlayerOnlineIPC_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PlayerOnlineIPC* other);

  // implements Message ----------------------------------------------

  inline PlayerOnlineIPC* New() const PROTOBUF_FINAL { return New(NULL); }

  PlayerOnlineIPC* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PlayerOnlineIPC& from);
  void MergeFrom(const PlayerOnlineIPC& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PlayerOnlineIPC* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string uname = 3;
  void clear_uname();
  static const int kUnameFieldNumber = 3;
  const ::std::string& uname() const;
  void set_uname(const ::std::string& value);
  #if LANG_CXX11
  void set_uname(::std::string&& value);
  #endif
  void set_uname(const char* value);
  void set_uname(const char* value, size_t size);
  ::std::string* mutable_uname();
  ::std::string* release_uname();
  void set_allocated_uname(::std::string* uname);

  // int32 rid = 1;
  void clear_rid();
  static const int kRidFieldNumber = 1;
  ::google::protobuf::int32 rid() const;
  void set_rid(::google::protobuf::int32 value);

  // int32 gulid = 2;
  void clear_gulid();
  static const int kGulidFieldNumber = 2;
  ::google::protobuf::int32 gulid() const;
  void set_gulid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:inner_ipc.PlayerOnlineIPC)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uname_;
  ::google::protobuf::int32 rid_;
  ::google::protobuf::int32 gulid_;
  mutable int _cached_size_;
  friend struct protobuf_gs_5fchat_5fipc_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PlayerOfflineIPC : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:inner_ipc.PlayerOfflineIPC) */ {
 public:
  PlayerOfflineIPC();
  virtual ~PlayerOfflineIPC();

  PlayerOfflineIPC(const PlayerOfflineIPC& from);

  inline PlayerOfflineIPC& operator=(const PlayerOfflineIPC& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerOfflineIPC& default_instance();

  static inline const PlayerOfflineIPC* internal_default_instance() {
    return reinterpret_cast<const PlayerOfflineIPC*>(
               &_PlayerOfflineIPC_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(PlayerOfflineIPC* other);

  // implements Message ----------------------------------------------

  inline PlayerOfflineIPC* New() const PROTOBUF_FINAL { return New(NULL); }

  PlayerOfflineIPC* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PlayerOfflineIPC& from);
  void MergeFrom(const PlayerOfflineIPC& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PlayerOfflineIPC* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 rid = 1;
  void clear_rid();
  static const int kRidFieldNumber = 1;
  ::google::protobuf::int32 rid() const;
  void set_rid(::google::protobuf::int32 value);

  // int32 isexit = 2;
  void clear_isexit();
  static const int kIsexitFieldNumber = 2;
  ::google::protobuf::int32 isexit() const;
  void set_isexit(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:inner_ipc.PlayerOfflineIPC)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 rid_;
  ::google::protobuf::int32 isexit_;
  mutable int _cached_size_;
  friend struct protobuf_gs_5fchat_5fipc_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ChatMsgIPC : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:inner_ipc.ChatMsgIPC) */ {
 public:
  ChatMsgIPC();
  virtual ~ChatMsgIPC();

  ChatMsgIPC(const ChatMsgIPC& from);

  inline ChatMsgIPC& operator=(const ChatMsgIPC& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ChatMsgIPC& default_instance();

  static inline const ChatMsgIPC* internal_default_instance() {
    return reinterpret_cast<const ChatMsgIPC*>(
               &_ChatMsgIPC_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ChatMsgIPC* other);

  // implements Message ----------------------------------------------

  inline ChatMsgIPC* New() const PROTOBUF_FINAL { return New(NULL); }

  ChatMsgIPC* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ChatMsgIPC& from);
  void MergeFrom(const ChatMsgIPC& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ChatMsgIPC* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string msg = 9;
  void clear_msg();
  static const int kMsgFieldNumber = 9;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // string sname = 10;
  void clear_sname();
  static const int kSnameFieldNumber = 10;
  const ::std::string& sname() const;
  void set_sname(const ::std::string& value);
  #if LANG_CXX11
  void set_sname(::std::string&& value);
  #endif
  void set_sname(const char* value);
  void set_sname(const char* value, size_t size);
  ::std::string* mutable_sname();
  ::std::string* release_sname();
  void set_allocated_sname(::std::string* sname);

  // int32 srid = 1;
  void clear_srid();
  static const int kSridFieldNumber = 1;
  ::google::protobuf::int32 srid() const;
  void set_srid(::google::protobuf::int32 value);

  // int32 did = 2;
  void clear_did();
  static const int kDidFieldNumber = 2;
  ::google::protobuf::int32 did() const;
  void set_did(::google::protobuf::int32 value);

  // int32 type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // int32 msg_type = 4;
  void clear_msg_type();
  static const int kMsgTypeFieldNumber = 4;
  ::google::protobuf::int32 msg_type() const;
  void set_msg_type(::google::protobuf::int32 value);

  // int32 tid = 5;
  void clear_tid();
  static const int kTidFieldNumber = 5;
  ::google::protobuf::int32 tid() const;
  void set_tid(::google::protobuf::int32 value);

  // int32 size = 6;
  void clear_size();
  static const int kSizeFieldNumber = 6;
  ::google::protobuf::int32 size() const;
  void set_size(::google::protobuf::int32 value);

  // int32 status = 7;
  void clear_status();
  static const int kStatusFieldNumber = 7;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // int32 stime = 8;
  void clear_stime();
  static const int kStimeFieldNumber = 8;
  ::google::protobuf::int32 stime() const;
  void set_stime(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:inner_ipc.ChatMsgIPC)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  ::google::protobuf::internal::ArenaStringPtr sname_;
  ::google::protobuf::int32 srid_;
  ::google::protobuf::int32 did_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 msg_type_;
  ::google::protobuf::int32 tid_;
  ::google::protobuf::int32 size_;
  ::google::protobuf::int32 status_;
  ::google::protobuf::int32 stime_;
  mutable int _cached_size_;
  friend struct protobuf_gs_5fchat_5fipc_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PlayerOnlineIPC

// int32 rid = 1;
inline void PlayerOnlineIPC::clear_rid() {
  rid_ = 0;
}
inline ::google::protobuf::int32 PlayerOnlineIPC::rid() const {
  // @@protoc_insertion_point(field_get:inner_ipc.PlayerOnlineIPC.rid)
  return rid_;
}
inline void PlayerOnlineIPC::set_rid(::google::protobuf::int32 value) {
  
  rid_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.PlayerOnlineIPC.rid)
}

// int32 gulid = 2;
inline void PlayerOnlineIPC::clear_gulid() {
  gulid_ = 0;
}
inline ::google::protobuf::int32 PlayerOnlineIPC::gulid() const {
  // @@protoc_insertion_point(field_get:inner_ipc.PlayerOnlineIPC.gulid)
  return gulid_;
}
inline void PlayerOnlineIPC::set_gulid(::google::protobuf::int32 value) {
  
  gulid_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.PlayerOnlineIPC.gulid)
}

// string uname = 3;
inline void PlayerOnlineIPC::clear_uname() {
  uname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PlayerOnlineIPC::uname() const {
  // @@protoc_insertion_point(field_get:inner_ipc.PlayerOnlineIPC.uname)
  return uname_.GetNoArena();
}
inline void PlayerOnlineIPC::set_uname(const ::std::string& value) {
  
  uname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:inner_ipc.PlayerOnlineIPC.uname)
}
#if LANG_CXX11
inline void PlayerOnlineIPC::set_uname(::std::string&& value) {
  
  uname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:inner_ipc.PlayerOnlineIPC.uname)
}
#endif
inline void PlayerOnlineIPC::set_uname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:inner_ipc.PlayerOnlineIPC.uname)
}
inline void PlayerOnlineIPC::set_uname(const char* value, size_t size) {
  
  uname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:inner_ipc.PlayerOnlineIPC.uname)
}
inline ::std::string* PlayerOnlineIPC::mutable_uname() {
  
  // @@protoc_insertion_point(field_mutable:inner_ipc.PlayerOnlineIPC.uname)
  return uname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PlayerOnlineIPC::release_uname() {
  // @@protoc_insertion_point(field_release:inner_ipc.PlayerOnlineIPC.uname)
  
  return uname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PlayerOnlineIPC::set_allocated_uname(::std::string* uname) {
  if (uname != NULL) {
    
  } else {
    
  }
  uname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uname);
  // @@protoc_insertion_point(field_set_allocated:inner_ipc.PlayerOnlineIPC.uname)
}

// -------------------------------------------------------------------

// PlayerOfflineIPC

// int32 rid = 1;
inline void PlayerOfflineIPC::clear_rid() {
  rid_ = 0;
}
inline ::google::protobuf::int32 PlayerOfflineIPC::rid() const {
  // @@protoc_insertion_point(field_get:inner_ipc.PlayerOfflineIPC.rid)
  return rid_;
}
inline void PlayerOfflineIPC::set_rid(::google::protobuf::int32 value) {
  
  rid_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.PlayerOfflineIPC.rid)
}

// int32 isexit = 2;
inline void PlayerOfflineIPC::clear_isexit() {
  isexit_ = 0;
}
inline ::google::protobuf::int32 PlayerOfflineIPC::isexit() const {
  // @@protoc_insertion_point(field_get:inner_ipc.PlayerOfflineIPC.isexit)
  return isexit_;
}
inline void PlayerOfflineIPC::set_isexit(::google::protobuf::int32 value) {
  
  isexit_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.PlayerOfflineIPC.isexit)
}

// -------------------------------------------------------------------

// ChatMsgIPC

// int32 srid = 1;
inline void ChatMsgIPC::clear_srid() {
  srid_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::srid() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.srid)
  return srid_;
}
inline void ChatMsgIPC::set_srid(::google::protobuf::int32 value) {
  
  srid_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.srid)
}

// int32 did = 2;
inline void ChatMsgIPC::clear_did() {
  did_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::did() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.did)
  return did_;
}
inline void ChatMsgIPC::set_did(::google::protobuf::int32 value) {
  
  did_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.did)
}

// int32 type = 3;
inline void ChatMsgIPC::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::type() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.type)
  return type_;
}
inline void ChatMsgIPC::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.type)
}

// int32 msg_type = 4;
inline void ChatMsgIPC::clear_msg_type() {
  msg_type_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::msg_type() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.msg_type)
  return msg_type_;
}
inline void ChatMsgIPC::set_msg_type(::google::protobuf::int32 value) {
  
  msg_type_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.msg_type)
}

// int32 tid = 5;
inline void ChatMsgIPC::clear_tid() {
  tid_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::tid() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.tid)
  return tid_;
}
inline void ChatMsgIPC::set_tid(::google::protobuf::int32 value) {
  
  tid_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.tid)
}

// int32 size = 6;
inline void ChatMsgIPC::clear_size() {
  size_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::size() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.size)
  return size_;
}
inline void ChatMsgIPC::set_size(::google::protobuf::int32 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.size)
}

// int32 status = 7;
inline void ChatMsgIPC::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::status() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.status)
  return status_;
}
inline void ChatMsgIPC::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.status)
}

// int32 stime = 8;
inline void ChatMsgIPC::clear_stime() {
  stime_ = 0;
}
inline ::google::protobuf::int32 ChatMsgIPC::stime() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.stime)
  return stime_;
}
inline void ChatMsgIPC::set_stime(::google::protobuf::int32 value) {
  
  stime_ = value;
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.stime)
}

// string msg = 9;
inline void ChatMsgIPC::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ChatMsgIPC::msg() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.msg)
  return msg_.GetNoArena();
}
inline void ChatMsgIPC::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.msg)
}
#if LANG_CXX11
inline void ChatMsgIPC::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:inner_ipc.ChatMsgIPC.msg)
}
#endif
inline void ChatMsgIPC::set_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:inner_ipc.ChatMsgIPC.msg)
}
inline void ChatMsgIPC::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:inner_ipc.ChatMsgIPC.msg)
}
inline ::std::string* ChatMsgIPC::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:inner_ipc.ChatMsgIPC.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ChatMsgIPC::release_msg() {
  // @@protoc_insertion_point(field_release:inner_ipc.ChatMsgIPC.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChatMsgIPC::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:inner_ipc.ChatMsgIPC.msg)
}

// string sname = 10;
inline void ChatMsgIPC::clear_sname() {
  sname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ChatMsgIPC::sname() const {
  // @@protoc_insertion_point(field_get:inner_ipc.ChatMsgIPC.sname)
  return sname_.GetNoArena();
}
inline void ChatMsgIPC::set_sname(const ::std::string& value) {
  
  sname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:inner_ipc.ChatMsgIPC.sname)
}
#if LANG_CXX11
inline void ChatMsgIPC::set_sname(::std::string&& value) {
  
  sname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:inner_ipc.ChatMsgIPC.sname)
}
#endif
inline void ChatMsgIPC::set_sname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  sname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:inner_ipc.ChatMsgIPC.sname)
}
inline void ChatMsgIPC::set_sname(const char* value, size_t size) {
  
  sname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:inner_ipc.ChatMsgIPC.sname)
}
inline ::std::string* ChatMsgIPC::mutable_sname() {
  
  // @@protoc_insertion_point(field_mutable:inner_ipc.ChatMsgIPC.sname)
  return sname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ChatMsgIPC::release_sname() {
  // @@protoc_insertion_point(field_release:inner_ipc.ChatMsgIPC.sname)
  
  return sname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChatMsgIPC::set_allocated_sname(::std::string* sname) {
  if (sname != NULL) {
    
  } else {
    
  }
  sname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sname);
  // @@protoc_insertion_point(field_set_allocated:inner_ipc.ChatMsgIPC.sname)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace inner_ipc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gs_5fchat_5fipc_2eproto__INCLUDED