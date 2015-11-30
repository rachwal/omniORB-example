// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "message.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE (omni)

static const char* _0RL_library_version = omniORB_4_2;


MessageIdl_ptr MessageIdl_Helper::_nil()
{
	return ::MessageIdl::_nil();
}

::CORBA::Boolean MessageIdl_Helper::is_nil(::MessageIdl_ptr p)
{
	return ::CORBA::is_nil(p);
}

void MessageIdl_Helper::release(::MessageIdl_ptr p)
{
	::CORBA::release(p);
}

void MessageIdl_Helper::marshalObjRef(::MessageIdl_ptr obj, cdrStream& s)
{
	::MessageIdl::_marshalObjRef(obj, s);
}

MessageIdl_ptr MessageIdl_Helper::unmarshalObjRef(cdrStream& s)
{
	return ::MessageIdl::_unmarshalObjRef(s);
}

void MessageIdl_Helper::duplicate(::MessageIdl_ptr obj)
{
	if (obj && !obj->_NP_is_nil())
		omni::duplicateObjRef(obj);
}

MessageIdl_ptr MessageIdl::_duplicate(::MessageIdl_ptr obj)
{
	if (obj && !obj->_NP_is_nil())
		omni::duplicateObjRef(obj);
	return obj;
}

MessageIdl_ptr MessageIdl::_narrow(::CORBA::Object_ptr obj)
{
	if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo())
		return _nil();
	_ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
	return e ? e : _nil();
}


MessageIdl_ptr MessageIdl::_unchecked_narrow(::CORBA::Object_ptr obj)
{
	if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo())
		return _nil();
	_ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
	return e ? e : _nil();
}

MessageIdl_ptr MessageIdl::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_MessageIdl _the_nil_obj;
  return &_the_nil_obj;
#else
	static _objref_MessageIdl* _the_nil_ptr = 0;
	if (!_the_nil_ptr)
	{
		omni::nilRefLock().lock();
		if (!_the_nil_ptr)
		{
			_the_nil_ptr = new _objref_MessageIdl;
			registerNilCorbaObject(_the_nil_ptr);
		}
		omni::nilRefLock().unlock();
	}
	return _the_nil_ptr;
#endif
}

const char* MessageIdl::_PD_repoId = "IDL:MessageIdl:1.0";


_objref_MessageIdl::~_objref_MessageIdl() {}


_objref_MessageIdl::_objref_MessageIdl(omniIOR* ior, omniIdentity* id) :
	omniObjRef(::MessageIdl::_PD_repoId, ior, id, 1)


{
	_PR_setobj(this);
}

void *_objref_MessageIdl::_ptrToObjRef(const char* id)
{
	if (id == ::MessageIdl::_PD_repoId)
		return (::MessageIdl_ptr) this;

	if (id == ::CORBA::Object::_PD_repoId)
		return (::CORBA::Object_ptr) this;

	if (omni::strMatch(id, ::MessageIdl::_PD_repoId))
		return (::MessageIdl_ptr) this;

	if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
		return (::CORBA::Object_ptr) this;

	return 0;
}


//
// Code for MessageIdl::getContent

// Proxy call descriptor class. Mangled signature:
//  _cstring
class _0RL_cd_954ce051b72dc3ac_00000000
	: public omniCallDescriptor
{
	public:
	inline _0RL_cd_954ce051b72dc3ac_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall = 0)
		: omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall) { }


	void unmarshalReturnedValues(cdrStream&);
	void marshalReturnedValues(cdrStream&);


	static const char* const _user_exns[];

	::CORBA::String_var result;
};

void _0RL_cd_954ce051b72dc3ac_00000000::marshalReturnedValues(cdrStream& _n)
{
	_n.marshalString(result, 0);
}

void _0RL_cd_954ce051b72dc3ac_00000000::unmarshalReturnedValues(cdrStream& _n)
{
	result = _n.unmarshalString(0);
}

const char* const _0RL_cd_954ce051b72dc3ac_00000000::_user_exns[] = {
	0
};

// Local call call-back function.
static void _0RL_lcfn_954ce051b72dc3ac_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
	_0RL_cd_954ce051b72dc3ac_00000000* tcd = (_0RL_cd_954ce051b72dc3ac_00000000*)cd;
	_impl_MessageIdl* impl = (_impl_MessageIdl*) svnt->_ptrToInterface(MessageIdl::_PD_repoId);
	tcd->result = impl->getContent();
}

char *_objref_MessageIdl::getContent()
{
	_0RL_cd_954ce051b72dc3ac_00000000 _call_desc(_0RL_lcfn_954ce051b72dc3ac_10000000, "getContent", 11);


	_invoke(_call_desc);
	return _call_desc.result._retn();
}


//
// Code for MessageIdl::setContent

// Proxy call descriptor class. Mangled signature:
//  void_i_cstring
class _0RL_cd_954ce051b72dc3ac_20000000
	: public omniCallDescriptor
{
	public:
	inline _0RL_cd_954ce051b72dc3ac_20000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall = 0)
		: omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall) { }

	void marshalArguments(cdrStream&);
	void unmarshalArguments(cdrStream&);


	static const char* const _user_exns[];

	::CORBA::String_var arg_0_;
	const char* arg_0;
};

void _0RL_cd_954ce051b72dc3ac_20000000::marshalArguments(cdrStream& _n)
{
	_n.marshalString(arg_0, 0);
}

void _0RL_cd_954ce051b72dc3ac_20000000::unmarshalArguments(cdrStream& _n)
{
	arg_0_ = _n.unmarshalString(0);
	arg_0 = arg_0_.in();
}

const char* const _0RL_cd_954ce051b72dc3ac_20000000::_user_exns[] = {
	0
};

// Local call call-back function.
static void _0RL_lcfn_954ce051b72dc3ac_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
	_0RL_cd_954ce051b72dc3ac_20000000* tcd = (_0RL_cd_954ce051b72dc3ac_20000000*)cd;
	_impl_MessageIdl* impl = (_impl_MessageIdl*) svnt->_ptrToInterface(MessageIdl::_PD_repoId);
	impl->setContent(tcd->arg_0);
}

void _objref_MessageIdl::setContent(const char* text)
{
	_0RL_cd_954ce051b72dc3ac_20000000 _call_desc(_0RL_lcfn_954ce051b72dc3ac_30000000, "setContent", 11);
	_call_desc.arg_0 = text;

	_invoke(_call_desc);
}

_pof_MessageIdl::~_pof_MessageIdl() {}


omniObjRef *_pof_MessageIdl::newObjRef(omniIOR* ior, omniIdentity* id)
{
	return new ::_objref_MessageIdl(ior, id);
}


::CORBA::Boolean _pof_MessageIdl::is_a(const char* id) const
{
	if (omni::ptrStrMatch(id, ::MessageIdl::_PD_repoId))
		return 1;

	return 0;
}

const _pof_MessageIdl _the_pof_MessageIdl;

_impl_MessageIdl::~_impl_MessageIdl() {}


::CORBA::Boolean _impl_MessageIdl::_dispatch(omniCallHandle& _handle)
{
	const char* op = _handle.operation_name();

	if (omni::strMatch(op, "getContent"))
	{
		_0RL_cd_954ce051b72dc3ac_00000000 _call_desc(_0RL_lcfn_954ce051b72dc3ac_10000000, "getContent", 11, 1);

		_handle.upcall(this, _call_desc);
		return 1;
	}

	if (omni::strMatch(op, "setContent"))
	{
		_0RL_cd_954ce051b72dc3ac_20000000 _call_desc(_0RL_lcfn_954ce051b72dc3ac_30000000, "setContent", 11, 1);

		_handle.upcall(this, _call_desc);
		return 1;
	}


	return 0;
}

void *_impl_MessageIdl::_ptrToInterface(const char* id)
{
	if (id == ::MessageIdl::_PD_repoId)
		return (::_impl_MessageIdl*) this;

	if (id == ::CORBA::Object::_PD_repoId)
		return (void*) 1;

	if (omni::strMatch(id, ::MessageIdl::_PD_repoId))
		return (::_impl_MessageIdl*) this;

	if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
		return (void*) 1;
	return 0;
}

const char *_impl_MessageIdl::_mostDerivedRepoId()
{
	return ::MessageIdl::_PD_repoId;
}

POA_MessageIdl::~POA_MessageIdl() {}

