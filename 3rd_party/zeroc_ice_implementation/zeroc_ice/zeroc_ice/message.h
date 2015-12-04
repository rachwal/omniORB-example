// **********************************************************************
//
// Copyright (c) 2003-2015 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.1
//
// <auto-generated>
//
// Generated from file `message.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __message_h__
#define __message_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/GCObject.h>
#include <Ice/AsyncResult.h>
#include <Ice/Incoming.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 306
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{
namespace zerocexample
{
class MessageIce;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle<::IceProxy::zerocexample::MessageIce>&);
::IceProxy::Ice::Object *upCast(::IceProxy::zerocexample::MessageIce*);
}
}

namespace zerocexample
{
class MessageIce;
bool operator==(const MessageIce&, const MessageIce&);
bool operator<(const MessageIce&, const MessageIce&);
::Ice::Object *upCast(::zerocexample::MessageIce*);
typedef ::IceInternal::Handle<::zerocexample::MessageIce> MessageIcePtr;
typedef ::IceInternal::ProxyHandle<::IceProxy::zerocexample::MessageIce> MessageIcePrx;
void __patch(MessageIcePtr&, const ::Ice::ObjectPtr&);
}

namespace zerocexample
{
class Callback_MessageIce_getContent_Base : virtual public ::IceInternal::CallbackBase { };

typedef ::IceUtil::Handle<Callback_MessageIce_getContent_Base> Callback_MessageIce_getContentPtr;

class Callback_MessageIce_setContent_Base : virtual public ::IceInternal::CallbackBase { };

typedef ::IceUtil::Handle<Callback_MessageIce_setContent_Base> Callback_MessageIce_setContentPtr;
}

namespace IceProxy
{
namespace zerocexample
{
class MessageIce : virtual public ::IceProxy::Ice::Object
{
	public:

	::std::string getContent()
	{
		return getContent(0);
	}

	::std::string getContent(const ::Ice::Context& __ctx)
	{
		return getContent(&__ctx);
	}
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getContent(const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getContent(0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getContent(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getContent(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getContent(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getContent(&__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getContent(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getContent(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getContent(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent);
    
public:
#endif

	::Ice::AsyncResultPtr begin_getContent()
	{
		return begin_getContent(0, ::IceInternal::__dummyCallback, 0);
	}

	::Ice::AsyncResultPtr begin_getContent(const ::Ice::Context& __ctx)
	{
		return begin_getContent(&__ctx, ::IceInternal::__dummyCallback, 0);
	}

	::Ice::AsyncResultPtr begin_getContent(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_getContent(0, __del, __cookie);
	}

	::Ice::AsyncResultPtr begin_getContent(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_getContent(&__ctx, __del, __cookie);
	}

	::Ice::AsyncResultPtr begin_getContent(const ::zerocexample::Callback_MessageIce_getContentPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_getContent(0, __del, __cookie);
	}

	::Ice::AsyncResultPtr begin_getContent(const ::Ice::Context& __ctx, const ::zerocexample::Callback_MessageIce_getContentPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_getContent(&__ctx, __del, __cookie);
	}

	::std::string end_getContent(const ::Ice::AsyncResultPtr&);

	private:

	::std::string getContent(const ::Ice::Context*);
	::Ice::AsyncResultPtr begin_getContent(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);

	public:

	void setContent(const ::std::string& __p_text)
	{
		setContent(__p_text, 0);
	}

	void setContent(const ::std::string& __p_text, const ::Ice::Context& __ctx)
	{
		setContent(__p_text, &__ctx);
	}
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_setContent(const ::std::string& __p_text, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setContent(__p_text, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_setContent(const ::std::string& __p_text, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setContent(__p_text, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setContent(const ::std::string& __p_text, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setContent(__p_text, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setContent(const ::std::string& __p_text, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setContent(__p_text, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

	::Ice::AsyncResultPtr begin_setContent(const ::std::string& __p_text)
	{
		return begin_setContent(__p_text, 0, ::IceInternal::__dummyCallback, 0);
	}

	::Ice::AsyncResultPtr begin_setContent(const ::std::string& __p_text, const ::Ice::Context& __ctx)
	{
		return begin_setContent(__p_text, &__ctx, ::IceInternal::__dummyCallback, 0);
	}

	::Ice::AsyncResultPtr begin_setContent(const ::std::string& __p_text, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_setContent(__p_text, 0, __del, __cookie);
	}

	::Ice::AsyncResultPtr begin_setContent(const ::std::string& __p_text, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_setContent(__p_text, &__ctx, __del, __cookie);
	}

	::Ice::AsyncResultPtr begin_setContent(const ::std::string& __p_text, const ::zerocexample::Callback_MessageIce_setContentPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_setContent(__p_text, 0, __del, __cookie);
	}

	::Ice::AsyncResultPtr begin_setContent(const ::std::string& __p_text, const ::Ice::Context& __ctx, const ::zerocexample::Callback_MessageIce_setContentPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
	{
		return begin_setContent(__p_text, &__ctx, __del, __cookie);
	}

	void end_setContent(const ::Ice::AsyncResultPtr&);

	private:

	void setContent(const ::std::string&, const ::Ice::Context*);
	::Ice::AsyncResultPtr begin_setContent(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);

	public:

	::IceInternal::ProxyHandle<MessageIce> ice_context(const ::Ice::Context& __context) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_context(__context).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_adapterId(const ::std::string& __id) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_locatorCacheTimeout(int __timeout) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_connectionCached(bool __cached) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_secure(bool __secure) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_preferSecure(bool __preferSecure) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_router(const ::Ice::RouterPrx& __router) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_router(__router).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_locator(const ::Ice::LocatorPrx& __locator) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_collocationOptimized(bool __co) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_invocationTimeout(int __timeout) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_twoway() const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_twoway().get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_oneway() const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_oneway().get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_batchOneway() const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_batchOneway().get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_datagram() const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_datagram().get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_batchDatagram() const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_compress(bool __compress) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_timeout(int __timeout) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_connectionId(const ::std::string& __id) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
	}

	::IceInternal::ProxyHandle<MessageIce> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
	{
		return dynamic_cast<MessageIce*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
	}

	static const ::std::string &ice_staticId();

	private:
	virtual ::IceProxy::Ice::Object *__newInstance() const;
};
}
}

namespace zerocexample
{
class MessageIce : virtual public ::Ice::Object
{
	public:

	typedef MessageIcePrx ProxyType;
	typedef MessageIcePtr PointerType;

	virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
	virtual ::std::vector<::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
	virtual const ::std::string &ice_id(const ::Ice::Current& = ::Ice::Current()) const;
	static const ::std::string &ice_staticId();

	virtual ::std::string getContent(const ::Ice::Current& = ::Ice::Current()) = 0;
	::Ice::DispatchStatus ___getContent(::IceInternal::Incoming&, const ::Ice::Current&);

	virtual void setContent(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
	::Ice::DispatchStatus ___setContent(::IceInternal::Incoming&, const ::Ice::Current&);

	virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

	protected:
	virtual void __writeImpl(::IceInternal::BasicStream*) const;
	virtual void __readImpl(::IceInternal::BasicStream*);
	using ::Ice::Object::__writeImpl;
	using ::Ice::Object::__readImpl;
};

inline bool operator==(const MessageIce& l, const MessageIce& r)
{
	return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const MessageIce& l, const MessageIce& r)
{
	return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
}

namespace zerocexample
{
template<class T>
class CallbackNC_MessageIce_getContent : public Callback_MessageIce_getContent_Base, public ::IceInternal::TwowayCallbackNC<T>
{
	public:

	typedef IceUtil::Handle<T> TPtr;

	typedef void (T::*Exception)(const ::Ice::Exception&);
	typedef void (T::*Sent)(bool);
	typedef void (T::*Response)(const ::std::string&);

	CallbackNC_MessageIce_getContent(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
		: ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb) { }

	virtual void completed(const ::Ice::AsyncResultPtr& __result) const
	{
		::zerocexample::MessageIcePrx __proxy = ::zerocexample::MessageIcePrx::uncheckedCast(__result->getProxy());
		::std::string __ret;
		try
		{
			__ret = __proxy->end_getContent(__result);
		}
		catch (const ::Ice::Exception& ex)
		{
			::IceInternal::CallbackNC<T>::exception(__result, ex);
			return;
		}
		if (_response)
		{
			(::IceInternal::CallbackNC<T>::_callback.get() ->* _response)(__ret);
		}
	}

	private:

	Response _response;
};

template<class T>
Callback_MessageIce_getContentPtr newCallback_MessageIce_getContent(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
	return new CallbackNC_MessageIce_getContent<T>(instance, cb, excb, sentcb);
}

template<class T>
Callback_MessageIce_getContentPtr newCallback_MessageIce_getContent(T* instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
	return new CallbackNC_MessageIce_getContent<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_MessageIce_getContent : public Callback_MessageIce_getContent_Base, public ::IceInternal::TwowayCallback<T, CT>
{
	public:

	typedef IceUtil::Handle<T> TPtr;

	typedef void (T::*Exception)(const ::Ice::Exception&, const CT&);
	typedef void (T::*Sent)(bool, const CT&);
	typedef void (T::*Response)(const ::std::string&, const CT&);

	Callback_MessageIce_getContent(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
		: ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb) { }

	virtual void completed(const ::Ice::AsyncResultPtr& __result) const
	{
		::zerocexample::MessageIcePrx __proxy = ::zerocexample::MessageIcePrx::uncheckedCast(__result->getProxy());
		::std::string __ret;
		try
		{
			__ret = __proxy->end_getContent(__result);
		}
		catch (const ::Ice::Exception& ex)
		{
			::IceInternal::Callback<T, CT>::exception(__result, ex);
			return;
		}
		if (_response)
		{
			(::IceInternal::Callback<T, CT>::_callback.get() ->* _response)(__ret, CT::dynamicCast(__result->getCookie()));
		}
	}

	private:

	Response _response;
};

template<class T, typename CT>
Callback_MessageIce_getContentPtr newCallback_MessageIce_getContent(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
	return new Callback_MessageIce_getContent<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
Callback_MessageIce_getContentPtr newCallback_MessageIce_getContent(T* instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
	return new Callback_MessageIce_getContent<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_MessageIce_setContent : public Callback_MessageIce_setContent_Base, public ::IceInternal::OnewayCallbackNC<T>
{
	public:

	typedef IceUtil::Handle<T> TPtr;

	typedef void (T::*Exception)(const ::Ice::Exception&);
	typedef void (T::*Sent)(bool);
	typedef void (T::*Response)();

	CallbackNC_MessageIce_setContent(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
		: ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb) { }
};

template<class T>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
	return new CallbackNC_MessageIce_setContent<T>(instance, cb, excb, sentcb);
}

template<class T>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
	return new CallbackNC_MessageIce_setContent<T>(instance, 0, excb, sentcb);
}

template<class T>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
	return new CallbackNC_MessageIce_setContent<T>(instance, cb, excb, sentcb);
}

template<class T>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
	return new CallbackNC_MessageIce_setContent<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_MessageIce_setContent : public Callback_MessageIce_setContent_Base, public ::IceInternal::OnewayCallback<T, CT>
{
	public:

	typedef IceUtil::Handle<T> TPtr;

	typedef void (T::*Exception)(const ::Ice::Exception&, const CT&);
	typedef void (T::*Sent)(bool, const CT&);
	typedef void (T::*Response)(const CT&);

	Callback_MessageIce_setContent(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
		: ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb) { }
};

template<class T, typename CT>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
	return new Callback_MessageIce_setContent<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
	return new Callback_MessageIce_setContent<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
	return new Callback_MessageIce_setContent<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
Callback_MessageIce_setContentPtr newCallback_MessageIce_setContent(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
	return new Callback_MessageIce_setContent<T, CT>(instance, 0, excb, sentcb);
}
}

#include <IceUtil/PopDisableWarnings.h>
#endif

