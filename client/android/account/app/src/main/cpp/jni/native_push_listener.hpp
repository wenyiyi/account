// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from auth.djinni

#pragma once

#include "djinni_support.hpp"
#include "push_listener.hpp"

namespace djinni_generated {

class native_push_listener final : ::djinni::JniInterface<::act::PushListener, native_push_listener> {
public:
    using CppType = std::shared_ptr<::act::PushListener>;
    using CppOptType = std::shared_ptr<::act::PushListener>;
    using JniType = jobject;

    using Boxed = native_push_listener;

    ~native_push_listener();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<native_push_listener>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<native_push_listener>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    native_push_listener();
    friend ::djinni::JniClass<native_push_listener>;
    friend ::djinni::JniInterface<::act::PushListener, native_push_listener>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::act::PushListener
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onNotify(const std::string & pushMsg) override;

    private:
        friend ::djinni::JniInterface<::act::PushListener, ::djinni_generated::native_push_listener>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("me/ppxpp/account/auth/PushListener") };
    const jmethodID method_onNotify { ::djinni::jniGetMethodID(clazz.get(), "onNotify", "(Ljava/lang/String;)V") };
};

}  // namespace djinni_generated
