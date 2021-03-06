// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: auth.proto
#ifndef GRPC_auth_2eproto__INCLUDED
#define GRPC_auth_2eproto__INCLUDED

#include "auth.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace auth {

class Auth final {
 public:
  static constexpr char const* service_full_name() {
    return "auth.Auth";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SignUp(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::auth::AuthReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>> AsyncSignUp(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>>(AsyncSignUpRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>> PrepareAsyncSignUp(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>>(PrepareAsyncSignUpRaw(context, request, cq));
    }
    virtual ::grpc::Status SignIn(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::auth::AuthReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>> AsyncSignIn(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>>(AsyncSignInRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>> PrepareAsyncSignIn(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>>(PrepareAsyncSignInRaw(context, request, cq));
    }
    virtual ::grpc::Status SignOut(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::auth::AuthReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>> AsyncSignOut(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>>(AsyncSignOutRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>> PrepareAsyncSignOut(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>>(PrepareAsyncSignOutRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void SignUp(::grpc::ClientContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SignIn(::grpc::ClientContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SignOut(::grpc::ClientContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>* AsyncSignUpRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>* PrepareAsyncSignUpRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>* AsyncSignInRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>* PrepareAsyncSignInRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>* AsyncSignOutRaw(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::auth::AuthReply>* PrepareAsyncSignOutRaw(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SignUp(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::auth::AuthReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>> AsyncSignUp(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>>(AsyncSignUpRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>> PrepareAsyncSignUp(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>>(PrepareAsyncSignUpRaw(context, request, cq));
    }
    ::grpc::Status SignIn(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::auth::AuthReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>> AsyncSignIn(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>>(AsyncSignInRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>> PrepareAsyncSignIn(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>>(PrepareAsyncSignInRaw(context, request, cq));
    }
    ::grpc::Status SignOut(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::auth::AuthReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>> AsyncSignOut(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>>(AsyncSignOutRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>> PrepareAsyncSignOut(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>>(PrepareAsyncSignOutRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SignUp(::grpc::ClientContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response, std::function<void(::grpc::Status)>) override;
      void SignIn(::grpc::ClientContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response, std::function<void(::grpc::Status)>) override;
      void SignOut(::grpc::ClientContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>* AsyncSignUpRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>* PrepareAsyncSignUpRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>* AsyncSignInRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>* PrepareAsyncSignInRaw(::grpc::ClientContext* context, const ::auth::UserInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>* AsyncSignOutRaw(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::auth::AuthReply>* PrepareAsyncSignOutRaw(::grpc::ClientContext* context, const ::auth::AuthInfo& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SignUp_;
    const ::grpc::internal::RpcMethod rpcmethod_SignIn_;
    const ::grpc::internal::RpcMethod rpcmethod_SignOut_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response);
    virtual ::grpc::Status SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response);
    virtual ::grpc::Status SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SignUp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SignUp() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SignUp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSignUp(::grpc::ServerContext* context, ::auth::UserInfo* request, ::grpc::ServerAsyncResponseWriter< ::auth::AuthReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SignIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SignIn() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SignIn() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSignIn(::grpc::ServerContext* context, ::auth::UserInfo* request, ::grpc::ServerAsyncResponseWriter< ::auth::AuthReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SignOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SignOut() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_SignOut() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSignOut(::grpc::ServerContext* context, ::auth::AuthInfo* request, ::grpc::ServerAsyncResponseWriter< ::auth::AuthReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SignUp<WithAsyncMethod_SignIn<WithAsyncMethod_SignOut<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SignUp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SignUp() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::auth::UserInfo, ::auth::AuthReply>(
          [this](::grpc::ServerContext* context,
                 const ::auth::UserInfo* request,
                 ::auth::AuthReply* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SignUp(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_SignUp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SignIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SignIn() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::auth::UserInfo, ::auth::AuthReply>(
          [this](::grpc::ServerContext* context,
                 const ::auth::UserInfo* request,
                 ::auth::AuthReply* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SignIn(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_SignIn() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SignOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SignOut() {
      ::grpc::Service::experimental().MarkMethodCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::auth::AuthInfo, ::auth::AuthReply>(
          [this](::grpc::ServerContext* context,
                 const ::auth::AuthInfo* request,
                 ::auth::AuthReply* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SignOut(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_SignOut() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_SignUp<ExperimentalWithCallbackMethod_SignIn<ExperimentalWithCallbackMethod_SignOut<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SignUp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SignUp() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SignUp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SignIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SignIn() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SignIn() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SignOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SignOut() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_SignOut() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SignUp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SignUp() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SignUp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSignUp(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SignIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SignIn() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_SignIn() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSignIn(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SignOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SignOut() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_SignOut() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSignOut(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SignUp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SignUp() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SignUp(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SignUp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SignUp(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SignIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SignIn() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SignIn(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SignIn() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SignIn(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SignOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SignOut() {
      ::grpc::Service::experimental().MarkMethodRawCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SignOut(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SignOut() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SignOut(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SignUp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SignUp() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::auth::UserInfo, ::auth::AuthReply>(std::bind(&WithStreamedUnaryMethod_SignUp<BaseClass>::StreamedSignUp, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SignUp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SignUp(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSignUp(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::auth::UserInfo,::auth::AuthReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SignIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SignIn() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::auth::UserInfo, ::auth::AuthReply>(std::bind(&WithStreamedUnaryMethod_SignIn<BaseClass>::StreamedSignIn, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SignIn() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SignIn(::grpc::ServerContext* context, const ::auth::UserInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSignIn(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::auth::UserInfo,::auth::AuthReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SignOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SignOut() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::auth::AuthInfo, ::auth::AuthReply>(std::bind(&WithStreamedUnaryMethod_SignOut<BaseClass>::StreamedSignOut, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SignOut() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SignOut(::grpc::ServerContext* context, const ::auth::AuthInfo* request, ::auth::AuthReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSignOut(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::auth::AuthInfo,::auth::AuthReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SignUp<WithStreamedUnaryMethod_SignIn<WithStreamedUnaryMethod_SignOut<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SignUp<WithStreamedUnaryMethod_SignIn<WithStreamedUnaryMethod_SignOut<Service > > > StreamedService;
};

}  // namespace auth


#endif  // GRPC_auth_2eproto__INCLUDED
