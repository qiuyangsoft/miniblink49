// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Response.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8FormData.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8ReadableByteStream.h"
#include "bindings/modules/v8/UnionTypesModules.h"
#include "bindings/modules/v8/V8Headers.h"
#include "bindings/modules/v8/V8Response.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/inspector/ConsoleMessage.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Response::wrapperTypeInfo = { gin::kEmbedderBlink, V8Response::domTemplate, V8Response::refObject, V8Response::derefObject, V8Response::trace, V8Response::toActiveDOMObject, 0, V8Response::preparePrototypeObject, V8Response::installConditionallyEnabledProperties, "Response", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Response.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Response::s_wrapperTypeInfo = V8Response::wrapperTypeInfo;

namespace ResponseV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void urlAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    v8SetReturnValueString(info, impl->url(), info.GetIsolate());
}

static void urlAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::urlAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void statusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->status());
}

static void statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::statusAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void okAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    v8SetReturnValueBool(info, impl->ok());
}

static void okAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::okAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void statusTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    v8SetReturnValueString(info, impl->statusText(), info.GetIsolate());
}

static void statusTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::statusTextAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void headersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    RawPtr<Headers> cppValue(impl->headers());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "headers"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void headersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::headersAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bodyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    RawPtr<ReadableByteStream> cppValue(impl->body());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "body"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void bodyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::bodyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bodyUsedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Response* impl = V8Response::toImpl(holder);
    v8SetReturnValueBool(info, impl->bodyUsed());
}

static void bodyUsedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ResponseV8Internal::bodyUsedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void errorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    v8SetReturnValue(info, Response::error(executionContext), info.GetIsolate()->GetCurrentContext()->Global());
}

static void errorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ResponseV8Internal::errorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void redirectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "redirect", "Response", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> url;
    unsigned status;
    {
        url = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!info[1]->IsUndefined()) {
            status = toUInt16(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            status = 302u;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<Response> result = Response::redirect(executionContext, url, status, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release(), info.GetIsolate()->GetCurrentContext()->Global());
}

static void redirectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ResponseV8Internal::redirectMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cloneMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clone", "Response", info.Holder(), info.GetIsolate());
    Response* impl = V8Response::toImpl(info.Holder());
    RawPtr<Response> result = impl->clone(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void cloneMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ResponseV8Internal::cloneMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void arrayBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Response* impl = V8Response::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->arrayBuffer(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void arrayBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ResponseV8Internal::arrayBufferMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void blobMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Response* impl = V8Response::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->blob(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void blobMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ResponseV8Internal::blobMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void jsonMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Response* impl = V8Response::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->json(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void jsonMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ResponseV8Internal::jsonMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void textMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Response* impl = V8Response::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->text(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void textMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ResponseV8Internal::textMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "Response", info.Holder(), info.GetIsolate());
    BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString body;
    Dictionary responseInitDict;
    {
        if (UNLIKELY(info.Length() <= 0)) {
            ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
            RawPtr<Response> impl = Response::create(executionContext, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8::Local<v8::Object> wrapper = info.Holder();
            wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8Response::wrapperTypeInfo, wrapper);
            v8SetReturnValue(info, wrapper);
            return;
        }
        V8BlobOrArrayBufferOrArrayBufferViewOrFormDataOrUSVString::toImpl(info.GetIsolate(), info[0], body, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('responseInitDict') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        responseInitDict = Dictionary(info[1], info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<Response> impl = Response::create(executionContext, body, responseInitDict, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8Response::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace ResponseV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8ResponseAccessors[] = {
    {"type", ResponseV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"url", ResponseV8Internal::urlAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"status", ResponseV8Internal::statusAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ok", ResponseV8Internal::okAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"statusText", ResponseV8Internal::statusTextAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"headers", ResponseV8Internal::headersAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"body", ResponseV8Internal::bodyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"bodyUsed", ResponseV8Internal::bodyUsedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8ResponseMethods[] = {
    {"clone", ResponseV8Internal::cloneMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"arrayBuffer", ResponseV8Internal::arrayBufferMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"blob", ResponseV8Internal::blobMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"json", ResponseV8Internal::jsonMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"text", ResponseV8Internal::textMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8Response::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("Response"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    ResponseV8Internal::constructor(info);
}

static void installV8ResponseTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Response", v8::Local<v8::FunctionTemplate>(), V8Response::internalFieldCount,
        0, 0,
        V8ResponseAccessors, WTF_ARRAY_LENGTH(V8ResponseAccessors),
        V8ResponseMethods, WTF_ARRAY_LENGTH(V8ResponseMethods));
    functionTemplate->SetCallHandler(V8Response::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    const V8DOMConfiguration::MethodConfiguration errorMethodConfiguration = {
        "error", ResponseV8Internal::errorMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, functionTemplate, v8::Local<v8::Signature>(), v8::None, errorMethodConfiguration);
    const V8DOMConfiguration::MethodConfiguration redirectMethodConfiguration = {
        "redirect", ResponseV8Internal::redirectMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, functionTemplate, v8::Local<v8::Signature>(), v8::None, redirectMethodConfiguration);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8Response::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ResponseTemplate);
}

bool V8Response::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Response::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Response* V8Response::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

ActiveDOMObject* V8Response::toActiveDOMObject(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

void V8Response::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8Response::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink