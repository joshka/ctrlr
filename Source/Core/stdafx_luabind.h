#ifndef __STDAFX_LUABIND_H__
#define __STDAFX_LUABIND_H__

#ifdef __cplusplus
#ifndef __OBJC__

#undef nil

#include <string>

extern "C"
{
#include "lua.h"
};

#pragma warning(disable:4913)
#pragma warning(disable:4459)
#pragma warning(disable:4297)

#include <luabind/config.hpp>
#include <luabind/class.hpp>
#include <luabind/function.hpp>
#include <luabind/open.hpp>
#include <luabind/lua_include.hpp>
#include <luabind/nil.hpp>
#include <luabind/lua_include.hpp>
#include <luabind/luabind.hpp>
#include <luabind/class_info.hpp>
#include <luabind/detail/class_registry.hpp>
#include <luabind/detail/class_rep.hpp>
#include <luabind/detail/operator_id.hpp>
#include <luabind/detail/stack_utils.hpp>
#include <luabind/exception_handler.hpp>
#include <luabind/get_main_thread.hpp>
#include <luabind/error.hpp>
#include <luabind/config.hpp>
#include <luabind/make_function.hpp>
#include <luabind/typeid.hpp>
#include <luabind/detail/inheritance.hpp>
#include <luabind/detail/link_compatibility.hpp>
#include <luabind/detail/object_rep.hpp>
#include <luabind/detail/pcall.hpp>
#include <luabind/scope.hpp>
#include <luabind/detail/debug.hpp>
#include <luabind/weak_ref.hpp>
#include <luabind/operator.hpp>
#include <luabind/copy_policy.hpp>
#include <luabind/return_reference_to_policy.hpp>
#include <luabind/adopt_policy.hpp>
#include <luabind/out_value_policy.hpp>
#include <luabind/discard_result_policy.hpp>
#include <luabind/version.hpp>
#include <luabind/shared_ptr_converter.hpp>
#include "stdafx.h"

#endif
#endif
#endif
