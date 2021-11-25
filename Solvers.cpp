// ALGLIB++
// Based on ALGLIB: Copyright (c) Sergey Bochkanov (ALGLIB project).
// Revisions Copyright (c) Lydia Marie Williamson, Mark Hopkins Consulting
// Source License:
//	This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License
//	as published by the Free Software Foundation (www.fsf.org);
//	either version 2 of the License, or (at your option) any later version.
//
//	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
//	without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//	See the GNU General Public License for more details.
//
//	A copy of the GNU General Public License is available at http://www.fsf.org/licensing/licenses
#ifdef _MSC_VER
#   define _CRT_SECURE_NO_WARNINGS
#endif
#include "stdafx.h"
#include "Solvers.h"

// disable some irrelevant warnings
#if (AE_COMPILER==AE_MSVC) && !defined(AE_ALL_WARNINGS)
#   pragma warning(disable:4100)
#   pragma warning(disable:4127)
#   pragma warning(disable:4611)
#   pragma warning(disable:4702)
#   pragma warning(disable:4996)
#endif

// Implementation of the C++ interface.
namespace alglib {
// === POLYNOMIALSOLVER Package ===

// === DIRECTDENSESOLVERS Package ===

// === DIRECTSPARSESOLVERS Package ===

// === ITERATIVESPARSE Package ===

// === LINCG Package ===

// === LINLSQR Package ===

// === NLEQ Package ===

// === POLYNOMIALSOLVER Package ===
//
DefClass(polynomialsolverreport, AndD DecVal(maxerr))

void polynomialsolve(const real_1d_array &a, const ae_int_t n, complex_1d_array &x, polynomialsolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::polynomialsolve(const_cast < alglib_impl::ae_vector * >(a.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::polynomialsolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

// === DIRECTDENSESOLVERS Package ===
//
DefClass(densesolverreport, AndD DecVal(r1) AndD DecVal(rinf))

//
DefClass(densesolverlsreport, AndD DecVal(r2) AndD DecVar(cx) AndD DecVal(n) AndD DecVal(k))

void rmatrixsolve(const real_2d_array &a, const ae_int_t n, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixsolve(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixsolvefast(const real_2d_array &a, const ae_int_t n, const real_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixsolvefast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixsolvem(const real_2d_array &a, const ae_int_t n, const real_2d_array &b, const ae_int_t m, const bool rfs, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixsolvem(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, rfs, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixsolvemfast(const real_2d_array &a, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixsolvemfast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixlusolve(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixlusolve(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixlusolvefast(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixlusolvefast(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixlusolvem(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixlusolvem(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixlusolvemfast(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixlusolvemfast(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixmixedsolve(const real_2d_array &a, const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixmixedsolve(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixmixedsolvem(const real_2d_array &a, const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixmixedsolvem(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixsolvem(const complex_2d_array &a, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, const bool rfs, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixsolvem(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, rfs, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixsolvemfast(const complex_2d_array &a, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixsolvemfast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixsolve(const complex_2d_array &a, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixsolve(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixsolvefast(const complex_2d_array &a, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixsolvefast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixlusolvem(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixlusolvem(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixlusolvemfast(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixlusolvemfast(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixlusolve(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixlusolve(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixlusolvefast(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixlusolvefast(const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixmixedsolvem(const complex_2d_array &a, const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixmixedsolvem(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void cmatrixmixedsolve(const complex_2d_array &a, const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::cmatrixmixedsolve(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), const_cast < alglib_impl::ae_matrix * >(lua.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), n, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixsolvem(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixsolvem(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixsolvemfast(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixsolvemfast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixsolve(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixsolve(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixsolvefast(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixsolvefast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixcholeskysolvem(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixcholeskysolvem(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixcholeskysolvemfast(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixcholeskysolvemfast(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixcholeskysolve(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixcholeskysolve(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void spdmatrixcholeskysolvefast(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::spdmatrixcholeskysolvefast(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixsolvem(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixsolvem(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixsolvemfast(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixsolvemfast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixsolve(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixsolve(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixsolvefast(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixsolvefast(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixcholeskysolvem(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixcholeskysolvem(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_matrix * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixcholeskysolvemfast(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixcholeskysolvemfast(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_matrix * >(b.c_ptr()), m, &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixcholeskysolve(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixcholeskysolve(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, const_cast < alglib_impl::densesolverreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void hpdmatrixcholeskysolvefast(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::hpdmatrixcholeskysolvefast(const_cast < alglib_impl::ae_matrix * >(cha.c_ptr()), n, isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &info, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void rmatrixsolvels(const real_2d_array &a, const ae_int_t nrows, const ae_int_t ncols, const real_1d_array &b, const double threshold, ae_int_t &info, densesolverlsreport &rep, real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::rmatrixsolvels(const_cast < alglib_impl::ae_matrix * >(a.c_ptr()), nrows, ncols, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), threshold, &info, const_cast < alglib_impl::densesolverlsreport * >(rep.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

// === DIRECTSPARSESOLVERS Package ===
// This structure is a sparse solver report (both direct and iterative solvers
// use this structure).
//
// Following fields can be accessed by users:
// * TerminationType (specific error codes depend on the solver  being  used,
//   with positive values ALWAYS signaling  that something useful is returned
//   in X, and negative values ALWAYS meaning critical failures.
// * NMV - number of matrix-vector products performed (0 for direct solvers)
// * IterationsCount - inner iterations count (0 for direct solvers)
// * R2 - squared residual
DefClass(sparsesolverreport, AndD DecVal(terminationtype) AndD DecVal(nmv) AndD DecVal(iterationscount) AndD DecVal(r2))

void sparsespdsolvesks(const sparsematrix &a, const bool isupper, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsespdsolvesks(const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsespdsolve(const sparsematrix &a, const bool isupper, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsespdsolve(const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsespdcholeskysolve(const sparsematrix &a, const bool isupper, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsespdcholeskysolve(const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolve(const sparsematrix &a, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolve(const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), const_cast < alglib_impl::ae_vector * >(b.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparselusolve(const sparsematrix &a, const integer_1d_array &p, const integer_1d_array &q, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparselusolve(const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), const_cast < alglib_impl::ae_vector * >(p.c_ptr()), const_cast < alglib_impl::ae_vector * >(q.c_ptr()), const_cast < alglib_impl::ae_vector * >(b.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

// === ITERATIVESPARSE Package ===
// This object stores state of the sparse linear solver object.
//
// You should use ALGLIB functions to work with this object.
// Never try to access its fields directly!
DefClass(sparsesolverstate, EndD)

void sparsesolvesymmetricgmres(const sparsematrix &a, const bool isupper, const real_1d_array &b, const ae_int_t k, const double epsf, const ae_int_t maxits, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolvesymmetricgmres(const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), k, epsf, maxits, const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolvegmres(const sparsematrix &a, const real_1d_array &b, const ae_int_t k, const double epsf, const ae_int_t maxits, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolvegmres(const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), const_cast < alglib_impl::ae_vector * >(b.c_ptr()), k, epsf, maxits, const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolvercreate(const ae_int_t n, sparsesolverstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolvercreate(n, const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolversetalgogmres(const sparsesolverstate &state, const ae_int_t k, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolversetalgogmres(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), k, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolversetstartingpoint(const sparsesolverstate &state, const real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolversetstartingpoint(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolversetcond(const sparsesolverstate &state, const double epsf, const ae_int_t maxits, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolversetcond(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), epsf, maxits, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolversolvesymmetric(const sparsesolverstate &state, const sparsematrix &a, const bool isupper, const real_1d_array &b, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolversolvesymmetric(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolversolve(const sparsesolverstate &state, const sparsematrix &a, const real_1d_array &b, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolversolve(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolverresults(const sparsesolverstate &state, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolverresults(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolversetxrep(const sparsesolverstate &state, const bool needxrep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolversetxrep(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), needxrep, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolveroocstart(const sparsesolverstate &state, const real_1d_array &b, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolveroocstart(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

bool sparsesolverooccontinue(const sparsesolverstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return 0;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   bool result = alglib_impl::sparsesolverooccontinue(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return *(reinterpret_cast < bool *>(&result));
}

void sparsesolveroocgetrequestinfo(const sparsesolverstate &state, ae_int_t &requesttype, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolveroocgetrequestinfo(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), &requesttype, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolveroocgetrequestdata(const sparsesolverstate &state, real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolveroocgetrequestdata(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolveroocgetrequestdata1(const sparsesolverstate &state, double &v, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolveroocgetrequestdata1(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), &v, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolveroocsendresult(const sparsesolverstate &state, const real_1d_array &ax, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolveroocsendresult(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(ax.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolveroocstop(const sparsesolverstate &state, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolveroocstop(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::sparsesolverreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void sparsesolverrequesttermination(const sparsesolverstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::sparsesolverrequesttermination(const_cast < alglib_impl::sparsesolverstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

// === LINCG Package ===
// This object stores state of the linear CG method.
//
// You should use ALGLIB functions to work with this object.
// Never try to access its fields directly!
DefClass(lincgstate, EndD)

//
DefClass(lincgreport, AndD DecVal(iterationscount) AndD DecVal(nmv) AndD DecVal(terminationtype) AndD DecVal(r2))

void lincgcreate(const ae_int_t n, lincgstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgcreate(n, const_cast < alglib_impl::lincgstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsetstartingpoint(const lincgstate &state, const real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsetstartingpoint(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsetprecunit(const lincgstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsetprecunit(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsetprecdiag(const lincgstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsetprecdiag(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsetcond(const lincgstate &state, const double epsf, const ae_int_t maxits, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsetcond(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), epsf, maxits, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsolvesparse(const lincgstate &state, const sparsematrix &a, const bool isupper, const real_1d_array &b, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsolvesparse(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), isupper, const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgresults(const lincgstate &state, real_1d_array &x, lincgreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgresults(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::lincgreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsetrestartfreq(const lincgstate &state, const ae_int_t srf, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsetrestartfreq(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), srf, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsetrupdatefreq(const lincgstate &state, const ae_int_t freq, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsetrupdatefreq(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), freq, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void lincgsetxrep(const lincgstate &state, const bool needxrep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::lincgsetxrep(const_cast < alglib_impl::lincgstate * >(state.c_ptr()), needxrep, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

// === LINLSQR Package ===
// This object stores state of the LinLSQR method.
//
// You should use ALGLIB functions to work with this object.
DefClass(linlsqrstate, EndD)

//
DefClass(linlsqrreport, AndD DecVal(iterationscount) AndD DecVal(nmv) AndD DecVal(terminationtype))

void linlsqrcreate(const ae_int_t m, const ae_int_t n, linlsqrstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrcreate(m, n, const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrcreatebuf(const ae_int_t m, const ae_int_t n, const linlsqrstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrcreatebuf(m, n, const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrsetprecunit(const linlsqrstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrsetprecunit(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrsetprecdiag(const linlsqrstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrsetprecdiag(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrsetlambdai(const linlsqrstate &state, const double lambdai, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrsetlambdai(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), lambdai, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrsolvesparse(const linlsqrstate &state, const sparsematrix &a, const real_1d_array &b, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrsolvesparse(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), const_cast < alglib_impl::sparsematrix * >(a.c_ptr()), const_cast < alglib_impl::ae_vector * >(b.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrsetcond(const linlsqrstate &state, const double epsa, const double epsb, const ae_int_t maxits, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrsetcond(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), epsa, epsb, maxits, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrresults(const linlsqrstate &state, real_1d_array &x, linlsqrreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrresults(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::linlsqrreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void linlsqrsetxrep(const linlsqrstate &state, const bool needxrep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrsetxrep(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), needxrep, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

ae_int_t linlsqrpeekiterationscount(const linlsqrstate &s, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return 0;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::ae_int_t result = alglib_impl::linlsqrpeekiterationscount(const_cast < alglib_impl::linlsqrstate * >(s.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return *(reinterpret_cast < ae_int_t * >(&result));
}

void linlsqrrequesttermination(const linlsqrstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::linlsqrrequesttermination(const_cast < alglib_impl::linlsqrstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

// === NLEQ Package ===
//
DefClass(nleqstate, AndD DecVal(needf) AndD DecVal(needfij) AndD DecVal(xupdated) AndD DecVal(f) AndD DecVar(fi) AndD DecVar(j) AndD DecVar(x))

//
DefClass(nleqreport, AndD DecVal(iterationscount) AndD DecVal(nfunc) AndD DecVal(njac) AndD DecVal(terminationtype))

void nleqcreatelm(const ae_int_t n, const ae_int_t m, const real_1d_array &x, nleqstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqcreatelm(n, m, const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::nleqstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}
#if !defined(AE_NO_EXCEPTIONS)
void nleqcreatelm(const ae_int_t m, const real_1d_array &x, nleqstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   ae_int_t n;

   n = x.length();
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump))
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqcreatelm(n, m, const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::nleqstate * >(state.c_ptr()), &_alglib_env_state);

   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}
#endif

void nleqsetcond(const nleqstate &state, const double epsf, const ae_int_t maxits, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqsetcond(const_cast < alglib_impl::nleqstate * >(state.c_ptr()), epsf, maxits, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void nleqsetxrep(const nleqstate &state, const bool needxrep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqsetxrep(const_cast < alglib_impl::nleqstate * >(state.c_ptr()), needxrep, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void nleqsetstpmax(const nleqstate &state, const double stpmax, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqsetstpmax(const_cast < alglib_impl::nleqstate * >(state.c_ptr()), stpmax, &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

bool nleqiteration(const nleqstate &state, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return 0;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   bool result = alglib_impl::nleqiteration(const_cast < alglib_impl::nleqstate * >(state.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return *(reinterpret_cast < bool *>(&result));
}

// This family of functions is used to launcn iterations of nonlinear solver
//
// These functions accept following parameters:
//     state   -   algorithm state
//     func    -   callback which calculates function (or merit function)
//                 value func at given point x
//     jac     -   callback which calculates function vector fi[]
//                 and Jacobian jac at given point x
//     rep     -   optional callback which is called after each iteration
//                 can be NULL
//     ptr     -   optional pointer which is passed to func/grad/hess/jac/rep
//                 can be NULL
// ALGLIB: Copyright 20.03.2009 by Sergey Bochkanov
void nleqsolve(nleqstate &state, void (*func)(const real_1d_array &x, double &func, void *ptr), void (*jac)(const real_1d_array &x, real_1d_array &fi, real_2d_array &jac, void *ptr), void (*rep)(const real_1d_array &x, double func, void *ptr), void *ptr, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::ae_assert(func != NULL, "ALGLIB: error in 'nleqsolve()' (func is NULL)", &_alglib_env_state);
   alglib_impl::ae_assert(jac != NULL, "ALGLIB: error in 'nleqsolve()' (jac is NULL)", &_alglib_env_state);
   while (alglib_impl::nleqiteration(state.c_ptr(), &_alglib_env_state)) {
      _ALGLIB_CALLBACK_EXCEPTION_GUARD_BEGIN if (state.needf) {
         func(state.x, state.f, ptr);
         continue;
      }
      if (state.needfij) {
         jac(state.x, state.fi, state.j, ptr);
         continue;
      }
      if (state.xupdated) {
         if (rep != NULL)
            rep(state.x, state.f, ptr);
         continue;
      }
      goto lbl_no_callback;
      _ALGLIB_CALLBACK_EXCEPTION_GUARD_END lbl_no_callback:alglib_impl::ae_assert(false, "ALGLIB: error in 'nleqsolve' (some derivatives were not provided?)", &_alglib_env_state);
   }
   alglib_impl::ae_state_clear(&_alglib_env_state);
}

void nleqresults(const nleqstate &state, real_1d_array &x, nleqreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqresults(const_cast < alglib_impl::nleqstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::nleqreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void nleqresultsbuf(const nleqstate &state, real_1d_array &x, nleqreport &rep, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqresultsbuf(const_cast < alglib_impl::nleqstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), const_cast < alglib_impl::nleqreport * >(rep.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}

void nleqrestartfrom(const nleqstate &state, const real_1d_array &x, const xparams _xparams) {
   jmp_buf _break_jump;
   alglib_impl::ae_state _alglib_env_state;
   alglib_impl::ae_state_init(&_alglib_env_state);
   if (setjmp(_break_jump)) {
#if !defined(AE_NO_EXCEPTIONS)
      _ALGLIB_CPP_EXCEPTION(_alglib_env_state.error_msg);
#else
      _ALGLIB_SET_ERROR_FLAG(_alglib_env_state.error_msg);
      return;
#endif
   }
   ae_state_set_break_jump(&_alglib_env_state, &_break_jump);
   if (_xparams.flags != 0x0)
      ae_state_set_flags(&_alglib_env_state, _xparams.flags);
   alglib_impl::nleqrestartfrom(const_cast < alglib_impl::nleqstate * >(state.c_ptr()), const_cast < alglib_impl::ae_vector * >(x.c_ptr()), &_alglib_env_state);
   alglib_impl::ae_state_clear(&_alglib_env_state);
   return;
}
} // end of namespace alglib

// Implementation of the computational core.
namespace alglib_impl {
// === POLYNOMIALSOLVER Package ===

// === DIRECTDENSESOLVERS Package ===
static void directdensesolvers_rmatrixlusolveinternal(RMatrix *lua, ZVector *p, ae_int_t n, RMatrix *a, bool havea, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state);
static void directdensesolvers_spdmatrixcholeskysolveinternal(RMatrix *cha, ae_int_t n, bool isupper, RMatrix *a, bool havea, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state);
static void directdensesolvers_cmatrixlusolveinternal(CMatrix *lua, ZVector *p, ae_int_t n, CMatrix *a, bool havea, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state);
static void directdensesolvers_hpdmatrixcholeskysolveinternal(CMatrix *cha, ae_int_t n, bool isupper, CMatrix *a, bool havea, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state);
static ae_int_t directdensesolvers_densesolverrfsmax(ae_int_t n, double r1, double rinf, ae_state *_state);
static ae_int_t directdensesolvers_densesolverrfsmaxv2(ae_int_t n, double r2, ae_state *_state);
static void directdensesolvers_rbasiclusolve(RMatrix *lua, ZVector *p, ae_int_t n, RVector *xb, ae_state *_state);
static void directdensesolvers_spdbasiccholeskysolve(RMatrix *cha, ae_int_t n, bool isupper, RVector *xb, ae_state *_state);
static void directdensesolvers_cbasiclusolve(CMatrix *lua, ZVector *p, ae_int_t n, CVector *xb, ae_state *_state);
static void directdensesolvers_hpdbasiccholeskysolve(CMatrix *cha, ae_int_t n, bool isupper, CVector *xb, ae_state *_state);

// === DIRECTSPARSESOLVERS Package ===

// === ITERATIVESPARSE Package ===
static bool iterativesparse_sparsesolveriteration(sparsesolverstate *state, ae_state *_state);
static void iterativesparse_clearrequestfields(sparsesolverstate *state, ae_state *_state);
static void iterativesparse_clearreportfields(sparsesolverstate *state, ae_state *_state);

// === LINCG Package ===
static double lincg_defaultprecision = 1.0E-6;
static void lincg_clearrfields(lincgstate *state, ae_state *_state);
static void lincg_updateitersdata(lincgstate *state, ae_state *_state);

// === LINLSQR Package ===
static double linlsqr_atol = 1.0E-6;
static double linlsqr_btol = 1.0E-6;
static void linlsqr_clearrfields(linlsqrstate *state, ae_state *_state);

// === NLEQ Package ===
static void nleq_clearrequestfields(nleqstate *state, ae_state *_state);
static bool nleq_increaselambda(double *lambdav, double *nu, double lambdaup, ae_state *_state);
static void nleq_decreaselambda(double *lambdav, double *nu, double lambdadown, ae_state *_state);

// === POLYNOMIALSOLVER Package ===
// Polynomial root finding.
//
// This function returns all roots of the polynomial
//     P(x) = a0 + a1*x + a2*x^2 + ... + an*x^n
// Both real and complex roots are returned (see below).
//
// INPUT PARAMETERS:
//     A       -   array[N+1], polynomial coefficients:
//                 * A[0] is constant term
//                 * A[N] is a coefficient of X^N
//     N       -   polynomial degree
//
// OUTPUT PARAMETERS:
//     X       -   array of complex roots:
//                 * for isolated real root, X[I] is strictly real: IMAGE(X[I])=0
//                 * complex roots are always returned in pairs - roots occupy
//                   positions I and I+1, with:
//                   * X[I+1]=Conj(X[I])
//                   * IMAGE(X[I]) > 0
//                   * IMAGE(X[I+1]) = -IMAGE(X[I]) < 0
//                 * multiple real roots may have non-zero imaginary part due
//                   to roundoff errors. There is no reliable way to distinguish
//                   real root of multiplicity 2 from two  complex  roots  in
//                   the presence of roundoff errors.
//     Rep     -   report, additional information, following fields are set:
//                 * Rep.MaxErr - max( |P(xi)| )  for  i=0..N-1.  This  field
//                   allows to quickly estimate "quality" of the roots  being
//                   returned.
//
// NOTE:   this function uses companion matrix method to find roots. In  case
//         internal EVD  solver  fails  do  find  eigenvalues,  exception  is
//         generated.
//
// NOTE:   roots are not "polished" and  no  matrix  balancing  is  performed
//         for them.
// ALGLIB: Copyright 24.02.2014 by Sergey Bochkanov
// API: void polynomialsolve(const real_1d_array &a, const ae_int_t n, complex_1d_array &x, polynomialsolverreport &rep, const xparams _xparams = xdefault);
void polynomialsolve(RVector *a, ae_int_t n, CVector *x, polynomialsolverreport *rep, ae_state *_state) {
   ae_frame _frame_block;
   ae_vector _a;
   ae_matrix c;
   ae_matrix vl;
   ae_matrix vr;
   ae_vector wr;
   ae_vector wi;
   ae_int_t i;
   ae_int_t j;
   bool status;
   ae_int_t nz;
   ae_int_t ne;
   ae_complex v;
   ae_complex vv;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   memset(&c, 0, sizeof(c));
   memset(&vl, 0, sizeof(vl));
   memset(&vr, 0, sizeof(vr));
   memset(&wr, 0, sizeof(wr));
   memset(&wi, 0, sizeof(wi));
   ae_vector_init_copy(&_a, a, _state, true);
   a = &_a;
   ae_vector_clear(x);
   _polynomialsolverreport_clear(rep);
   ae_matrix_init(&c, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&vl, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&vr, 0, 0, DT_REAL, _state, true);
   ae_vector_init(&wr, 0, DT_REAL, _state, true);
   ae_vector_init(&wi, 0, DT_REAL, _state, true);

   ae_assert(n > 0, "PolynomialSolve: N<=0", _state);
   ae_assert(a->cnt >= n + 1, "PolynomialSolve: Length(A)<N+1", _state);
   ae_assert(isfinitevector(a, n + 1, _state), "PolynomialSolve: A contains infitite numbers", _state);
   ae_assert(ae_fp_neq(a->ptr.p_double[n], (double)(0)), "PolynomialSolve: A[N]=0", _state);

// Prepare
   ae_vector_set_length(x, n, _state);

// Normalize A:
// * analytically determine NZ zero roots
// * quick exit for NZ=N
// * make residual NE-th degree polynomial monic
//   (here NE=N-NZ)
   nz = 0;
   while (nz < n && ae_fp_eq(a->ptr.p_double[nz], (double)(0))) {
      nz = nz + 1;
   }
   ne = n - nz;
   for (i = nz; i <= n; i++) {
      a->ptr.p_double[i - nz] = a->ptr.p_double[i] / a->ptr.p_double[n];
   }

// For NZ<N, build companion matrix and find NE non-zero roots
   if (ne > 0) {
      ae_matrix_set_length(&c, ne, ne, _state);
      for (i = 0; i <= ne - 1; i++) {
         for (j = 0; j <= ne - 1; j++) {
            c.ptr.pp_double[i][j] = (double)(0);
         }
      }
      c.ptr.pp_double[0][ne - 1] = -a->ptr.p_double[0];
      for (i = 1; i <= ne - 1; i++) {
         c.ptr.pp_double[i][i - 1] = (double)(1);
         c.ptr.pp_double[i][ne - 1] = -a->ptr.p_double[i];
      }
      status = rmatrixevd(&c, ne, 0, &wr, &wi, &vl, &vr, _state);
      ae_assert(status, "PolynomialSolve: inernal error - EVD solver failed", _state);
      for (i = 0; i <= ne - 1; i++) {
         x->ptr.p_complex[i].x = wr.ptr.p_double[i];
         x->ptr.p_complex[i].y = wi.ptr.p_double[i];
      }
   }
// Remaining NZ zero roots
   for (i = ne; i <= n - 1; i++) {
      x->ptr.p_complex[i] = ae_complex_from_i(0);
   }

// Rep
   rep->maxerr = (double)(0);
   for (i = 0; i <= ne - 1; i++) {
      v = ae_complex_from_i(0);
      vv = ae_complex_from_i(1);
      for (j = 0; j <= ne; j++) {
         v = ae_c_add(v, ae_c_mul_d(vv, a->ptr.p_double[j]));
         vv = ae_c_mul(vv, x->ptr.p_complex[i]);
      }
      rep->maxerr = ae_maxreal(rep->maxerr, ae_c_abs(v, _state), _state);
   }
   ae_frame_leave(_state);
}

void _polynomialsolverreport_init(void *_p, ae_state *_state, bool make_automatic) {
   polynomialsolverreport *p = (polynomialsolverreport *) _p;
   ae_touch_ptr((void *)p);
}

void _polynomialsolverreport_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   polynomialsolverreport *dst = (polynomialsolverreport *) _dst;
   polynomialsolverreport *src = (polynomialsolverreport *) _src;
   dst->maxerr = src->maxerr;
}

void _polynomialsolverreport_clear(void *_p) {
   polynomialsolverreport *p = (polynomialsolverreport *) _p;
   ae_touch_ptr((void *)p);
}

void _polynomialsolverreport_destroy(void *_p) {
   polynomialsolverreport *p = (polynomialsolverreport *) _p;
   ae_touch_ptr((void *)p);
}

// === DIRECTDENSESOLVERS Package ===
// Dense solver for A*x=b with N*N real matrix A and N*1 real vectorx  x  and
// b. This is "slow-but-feature rich" version of the  linear  solver.  Faster
// version is RMatrixSolveFast() function.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * iterative refinement
// * O(N^3) complexity
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear  system
//            ! and  performs  iterative   refinement,   which   results   in
//            ! significant performance penalty  when  compared  with  "fast"
//            ! version  which  just  performs  LU  decomposition  and  calls
//            ! triangular solver.
//            !
//            ! This  performance  penalty  is  especially  visible  in   the
//            ! multithreaded mode, because both condition number  estimation
//            ! and   iterative    refinement   are   inherently   sequential
//            ! calculations. It is also very significant on small matrices.
//            !
//            ! Thus, if you need high performance and if you are pretty sure
//            ! that your system is well conditioned, we  strongly  recommend
//            ! you to use faster solver, RMatrixSolveFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void rmatrixsolve(const real_2d_array &a, const ae_int_t n, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams = xdefault);
void rmatrixsolve(RMatrix *a, ae_int_t n, RVector *b, ae_int_t *info, densesolverreport *rep, RVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_REAL, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_move(&bm.ptr.pp_double[0][0], bm.stride, &b->ptr.p_double[0], 1, ae_v_len(0, n - 1));
   rmatrixsolvem(a, n, &bm, 1, true, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_move(&x->ptr.p_double[0], 1, &xm.ptr.pp_double[0][0], xm.stride, ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense solver.
//
// This  subroutine  solves  a  system  A*x=b,  where A is NxN non-denegerate
// real matrix, x  and  b  are  vectors.  This is a "fast" version of  linear
// solver which does NOT provide  any  additional  functions  like  condition
// number estimation or iterative refinement.
//
// Algorithm features:
// * efficient algorithm O(N^3) complexity
// * no performance overhead from additional functionality
//
// If you need condition number estimation or iterative refinement, use  more
// feature-rich version - RMatrixSolve().
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 16.03.2015 by Sergey Bochkanov
// API: void rmatrixsolvefast(const real_2d_array &a, const ae_int_t n, const real_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void rmatrixsolvefast(RMatrix *a, ae_int_t n, RVector *b, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   ae_int_t i;
   ae_int_t j;
   ae_vector p;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   memset(&p, 0, sizeof(p));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;
   ae_vector_init(&p, 0, DT_INT, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   rmatrixlu(a, n, n, &p, _state);
   for (i = 0; i <= n - 1; i++) {
      if (ae_fp_eq(a->ptr.pp_double[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            b->ptr.p_double[j] = 0.0;
         }
         *info = -3;
         ae_frame_leave(_state);
         return;
      }
   }
   directdensesolvers_rbasiclusolve(a, &p, n, b, _state);
   *info = 1;
   ae_frame_leave(_state);
}

// Dense solver.
//
// Similar to RMatrixSolve() but solves task with multiple right parts (where
// b and x are NxM matrices). This is  "slow-but-robust"  version  of  linear
// solver with additional functionality  like  condition  number  estimation.
// There also exists faster version - RMatrixSolveMFast().
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * optional iterative refinement
// * O(N^3+M*N^2) complexity
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear  system
//            ! and  performs  iterative   refinement,   which   results   in
//            ! significant performance penalty  when  compared  with  "fast"
//            ! version  which  just  performs  LU  decomposition  and  calls
//            ! triangular solver.
//            !
//            ! This  performance  penalty  is  especially  visible  in   the
//            ! multithreaded mode, because both condition number  estimation
//            ! and   iterative    refinement   are   inherently   sequential
//            ! calculations. It also very significant on small matrices.
//            !
//            ! Thus, if you need high performance and if you are pretty sure
//            ! that your system is well conditioned, we  strongly  recommend
//            ! you to use faster solver, RMatrixSolveMFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//     RFS     -   iterative refinement switch:
//                 * True - refinement is used.
//                   Less performance, more precision.
//                 * False - refinement is not used.
//                   More performance, less precision.
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is ill conditioned or singular.
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void rmatrixsolvem(const real_2d_array &a, const ae_int_t n, const real_2d_array &b, const ae_int_t m, const bool rfs, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams = xdefault);
void rmatrixsolvem(RMatrix *a, ae_int_t n, RMatrix *b, ae_int_t m, bool rfs, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix da;
   ae_matrix emptya;
   ae_vector p;
   ae_int_t i;

   ae_frame_make(_state, &_frame_block);
   memset(&da, 0, sizeof(da));
   memset(&emptya, 0, sizeof(emptya));
   memset(&p, 0, sizeof(p));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&da, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&emptya, 0, 0, DT_REAL, _state, true);
   ae_vector_init(&p, 0, DT_INT, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&da, n, n, _state);

// 1. factorize matrix
// 3. solve
   for (i = 0; i <= n - 1; i++) {
      ae_v_move(&da.ptr.pp_double[i][0], 1, &a->ptr.pp_double[i][0], 1, ae_v_len(0, n - 1));
   }
   rmatrixlu(&da, n, n, &p, _state);
   if (rfs) {
      directdensesolvers_rmatrixlusolveinternal(&da, &p, n, a, true, b, m, info, rep, x, _state);
   } else {
      directdensesolvers_rmatrixlusolveinternal(&da, &p, n, &emptya, false, b, m, info, rep, x, _state);
   }
   ae_frame_leave(_state);
}

// Dense solver.
//
// Similar to RMatrixSolve() but solves task with multiple right parts (where
// b and x are NxM matrices). This is "fast" version of linear  solver  which
// does NOT offer additional functions like condition  number  estimation  or
// iterative refinement.
//
// Algorithm features:
// * O(N^3+M*N^2) complexity
// * no additional functionality, highest performance
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//     RFS     -   iterative refinement switch:
//                 * True - refinement is used.
//                   Less performance, more precision.
//                 * False - refinement is not used.
//                   More performance, less precision.
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     B       -   array[N]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void rmatrixsolvemfast(const real_2d_array &a, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void rmatrixsolvemfast(RMatrix *a, ae_int_t n, RMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   double v;
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;
   ae_vector p;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   memset(&p, 0, sizeof(p));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;
   ae_vector_init(&p, 0, DT_INT, _state, true);

// Check for exact degeneracy
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   rmatrixlu(a, n, n, &p, _state);
   for (i = 0; i <= n - 1; i++) {
      if (ae_fp_eq(a->ptr.pp_double[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            for (k = 0; k <= m - 1; k++) {
               b->ptr.pp_double[j][k] = 0.0;
            }
         }
         *info = -3;
         ae_frame_leave(_state);
         return;
      }
   }

// Solve with TRSM()
   for (i = 0; i <= n - 1; i++) {
      if (p.ptr.p_int[i] != i) {
         for (j = 0; j <= m - 1; j++) {
            v = b->ptr.pp_double[i][j];
            b->ptr.pp_double[i][j] = b->ptr.pp_double[p.ptr.p_int[i]][j];
            b->ptr.pp_double[p.ptr.p_int[i]][j] = v;
         }
      }
   }
   rmatrixlefttrsm(n, m, a, 0, 0, false, true, 0, b, 0, 0, _state);
   rmatrixlefttrsm(n, m, a, 0, 0, true, false, 0, b, 0, 0, _state);
   *info = 1;
   ae_frame_leave(_state);
}

// Dense solver.
//
// This  subroutine  solves  a  system  A*x=b,  where A is NxN non-denegerate
// real matrix given by its LU decomposition, x and b are real vectors.  This
// is "slow-but-robust" version of the linear LU-based solver. Faster version
// is RMatrixLUSolveFast() function.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(N^2) complexity
// * condition number estimation
//
// No iterative refinement  is provided because exact form of original matrix
// is not known to subroutine. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which results in 10-15x  performance  penalty  when  compared
//            ! with "fast" version which just calls triangular solver.
//            !
//            ! This performance penalty is insignificant  when compared with
//            ! cost of large LU decomposition.  However,  if you  call  this
//            ! function many times for the same  left  side,  this  overhead
//            ! BECOMES significant. It  also  becomes significant for small-
//            ! scale problems.
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! RMatrixLUSolveFast() function.
//
// INPUT PARAMETERS
//     LUA     -   array[N,N], LU decomposition, RMatrixLU result
//     P       -   array[N], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[N], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void rmatrixlusolve(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams = xdefault);
void rmatrixlusolve(RMatrix *lua, ZVector *p, ae_int_t n, RVector *b, ae_int_t *info, densesolverreport *rep, RVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_REAL, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_move(&bm.ptr.pp_double[0][0], bm.stride, &b->ptr.p_double[0], 1, ae_v_len(0, n - 1));
   rmatrixlusolvem(lua, p, n, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_move(&x->ptr.p_double[0], 1, &xm.ptr.pp_double[0][0], xm.stride, ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense solver.
//
// This  subroutine  solves  a  system  A*x=b,  where A is NxN non-denegerate
// real matrix given by its LU decomposition, x and b are real vectors.  This
// is "fast-without-any-checks" version of the linear LU-based solver. Slower
// but more robust version is RMatrixLUSolve() function.
//
// Algorithm features:
// * O(N^2) complexity
// * fast algorithm without ANY additional checks, just triangular solver
//
// INPUT PARAMETERS
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, RMatrixLU result
//     P       -   array[0..N-1], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 18.03.2015 by Sergey Bochkanov
// API: void rmatrixlusolvefast(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void rmatrixlusolvefast(RMatrix *lua, ZVector *p, ae_int_t n, RVector *b, ae_int_t *info, ae_state *_state) {
   ae_int_t i;
   ae_int_t j;

   *info = 0;

   if (n <= 0) {
      *info = -1;
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      if (ae_fp_eq(lua->ptr.pp_double[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            b->ptr.p_double[j] = 0.0;
         }
         *info = -3;
         return;
      }
   }
   directdensesolvers_rbasiclusolve(lua, p, n, b, _state);
   *info = 1;
}

// Dense solver.
//
// Similar to RMatrixLUSolve() but solves  task  with  multiple  right  parts
// (where b and x are NxM matrices). This  is  "robust-but-slow"  version  of
// LU-based solver which performs additional  checks  for  non-degeneracy  of
// inputs (condition number estimation). If you need  best  performance,  use
// "fast-without-any-checks" version, RMatrixLUSolveMFast().
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(M*N^2) complexity
// * condition number estimation
//
// No iterative refinement  is provided because exact form of original matrix
// is not known to subroutine. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant  performance   penalty   when
//            ! compared with "fast"  version  which  just  calls  triangular
//            ! solver.
//            !
//            ! This performance penalty is especially apparent when you  use
//            ! ALGLIB parallel capabilities (condition number estimation  is
//            ! inherently  sequential).  It   also   becomes significant for
//            ! small-scale problems.
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! RMatrixLUSolveMFast() function.
//
// INPUT PARAMETERS
//     LUA     -   array[N,N], LU decomposition, RMatrixLU result
//     P       -   array[N], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N,M], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void rmatrixlusolvem(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams = xdefault);
void rmatrixlusolvem(RMatrix *lua, ZVector *p, ae_int_t n, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix emptya;

   ae_frame_make(_state, &_frame_block);
   memset(&emptya, 0, sizeof(emptya));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&emptya, 0, 0, DT_REAL, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
// solve
   directdensesolvers_rmatrixlusolveinternal(lua, p, n, &emptya, false, b, m, info, rep, x, _state);
   ae_frame_leave(_state);
}

// Dense solver.
//
// Similar to RMatrixLUSolve() but solves  task  with  multiple  right parts,
// where b and x are NxM matrices.  This is "fast-without-any-checks" version
// of LU-based solver. It does not estimate  condition number  of  a  system,
// so it is extremely fast. If you need better detection  of  near-degenerate
// cases, use RMatrixLUSolveM() function.
//
// Algorithm features:
// * O(M*N^2) complexity
// * fast algorithm without ANY additional checks, just triangular solver
//
// INPUT PARAMETERS:
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, RMatrixLU result
//     P       -   array[0..N-1], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS:
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N,M]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 18.03.2015 by Sergey Bochkanov
// API: void rmatrixlusolvemfast(const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void rmatrixlusolvemfast(RMatrix *lua, ZVector *p, ae_int_t n, RMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   double v;
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;

   *info = 0;

// Check for exact degeneracy
   if (n <= 0 || m <= 0) {
      *info = -1;
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      if (ae_fp_eq(lua->ptr.pp_double[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            for (k = 0; k <= m - 1; k++) {
               b->ptr.pp_double[j][k] = 0.0;
            }
         }
         *info = -3;
         return;
      }
   }

// Solve with TRSM()
   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] != i) {
         for (j = 0; j <= m - 1; j++) {
            v = b->ptr.pp_double[i][j];
            b->ptr.pp_double[i][j] = b->ptr.pp_double[p->ptr.p_int[i]][j];
            b->ptr.pp_double[p->ptr.p_int[i]][j] = v;
         }
      }
   }
   rmatrixlefttrsm(n, m, lua, 0, 0, false, true, 0, b, 0, 0, _state);
   rmatrixlefttrsm(n, m, lua, 0, 0, true, false, 0, b, 0, 0, _state);
   *info = 1;
}

// Dense solver.
//
// This  subroutine  solves  a  system  A*x=b,  where BOTH ORIGINAL A AND ITS
// LU DECOMPOSITION ARE KNOWN. You can use it if for some  reasons  you  have
// both A and its LU decomposition.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * iterative refinement
// * O(N^2) complexity
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, RMatrixLU result
//     P       -   array[0..N-1], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void rmatrixmixedsolve(const real_2d_array &a, const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams = xdefault);
void rmatrixmixedsolve(RMatrix *a, RMatrix *lua, ZVector *p, ae_int_t n, RVector *b, ae_int_t *info, densesolverreport *rep, RVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_REAL, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_move(&bm.ptr.pp_double[0][0], bm.stride, &b->ptr.p_double[0], 1, ae_v_len(0, n - 1));
   rmatrixmixedsolvem(a, lua, p, n, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_move(&x->ptr.p_double[0], 1, &xm.ptr.pp_double[0][0], xm.stride, ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense solver.
//
// Similar to RMatrixMixedSolve() but  solves task with multiple right  parts
// (where b and x are NxM matrices).
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * iterative refinement
// * O(M*N^2) complexity
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, RMatrixLU result
//     P       -   array[0..N-1], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N,M], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void rmatrixmixedsolvem(const real_2d_array &a, const real_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams = xdefault);
void rmatrixmixedsolvem(RMatrix *a, RMatrix *lua, ZVector *p, ae_int_t n, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state) {

   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      return;
   }
// solve
   directdensesolvers_rmatrixlusolveinternal(lua, p, n, a, true, b, m, info, rep, x, _state);
}

// Complex dense solver for A*X=B with N*N  complex  matrix  A,  N*M  complex
// matrices  X  and  B.  "Slow-but-feature-rich"   version   which   provides
// additional functions, at the cost of slower  performance.  Faster  version
// may be invoked with CMatrixSolveMFast() function.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * iterative refinement
// * O(N^3+M*N^2) complexity
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear  system
//            ! and  performs  iterative   refinement,   which   results   in
//            ! significant performance penalty  when  compared  with  "fast"
//            ! version  which  just  performs  LU  decomposition  and  calls
//            ! triangular solver.
//            !
//            ! This  performance  penalty  is  especially  visible  in   the
//            ! multithreaded mode, because both condition number  estimation
//            ! and   iterative    refinement   are   inherently   sequential
//            ! calculations.
//            !
//            ! Thus, if you need high performance and if you are pretty sure
//            ! that your system is well conditioned, we  strongly  recommend
//            ! you to use faster solver, CMatrixSolveMFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//     RFS     -   iterative refinement switch:
//                 * True - refinement is used.
//                   Less performance, more precision.
//                 * False - refinement is not used.
//                   More performance, less precision.
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N,M], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixsolvem(const complex_2d_array &a, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, const bool rfs, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams = xdefault);
void cmatrixsolvem(CMatrix *a, ae_int_t n, CMatrix *b, ae_int_t m, bool rfs, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix da;
   ae_matrix emptya;
   ae_vector p;
   ae_int_t i;

   ae_frame_make(_state, &_frame_block);
   memset(&da, 0, sizeof(da));
   memset(&emptya, 0, sizeof(emptya));
   memset(&p, 0, sizeof(p));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&da, 0, 0, DT_COMPLEX, _state, true);
   ae_matrix_init(&emptya, 0, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&p, 0, DT_INT, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&da, n, n, _state);

// factorize, solve
   for (i = 0; i <= n - 1; i++) {
      ae_v_cmove(&da.ptr.pp_complex[i][0], 1, &a->ptr.pp_complex[i][0], 1, "N", ae_v_len(0, n - 1));
   }
   cmatrixlu(&da, n, n, &p, _state);
   if (rfs) {
      directdensesolvers_cmatrixlusolveinternal(&da, &p, n, a, true, b, m, info, rep, x, _state);
   } else {
      directdensesolvers_cmatrixlusolveinternal(&da, &p, n, &emptya, false, b, m, info, rep, x, _state);
   }
   ae_frame_leave(_state);
}

// Complex dense solver for A*X=B with N*N  complex  matrix  A,  N*M  complex
// matrices  X  and  B.  "Fast-but-lightweight" version which  provides  just
// triangular solver - and no additional functions like iterative  refinement
// or condition number estimation.
//
// Algorithm features:
// * O(N^3+M*N^2) complexity
// * no additional time consuming functions
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS:
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N,M]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 16.03.2015 by Sergey Bochkanov
// API: void cmatrixsolvemfast(const complex_2d_array &a, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void cmatrixsolvemfast(CMatrix *a, ae_int_t n, CMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   ae_complex v;
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;
   ae_vector p;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   memset(&p, 0, sizeof(p));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;
   ae_vector_init(&p, 0, DT_INT, _state, true);

// Check for exact degeneracy
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   cmatrixlu(a, n, n, &p, _state);
   for (i = 0; i <= n - 1; i++) {
      if (ae_c_eq_d(a->ptr.pp_complex[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            for (k = 0; k <= m - 1; k++) {
               b->ptr.pp_complex[j][k] = ae_complex_from_d(0.0);
            }
         }
         *info = -3;
         ae_frame_leave(_state);
         return;
      }
   }

// Solve with TRSM()
   for (i = 0; i <= n - 1; i++) {
      if (p.ptr.p_int[i] != i) {
         for (j = 0; j <= m - 1; j++) {
            v = b->ptr.pp_complex[i][j];
            b->ptr.pp_complex[i][j] = b->ptr.pp_complex[p.ptr.p_int[i]][j];
            b->ptr.pp_complex[p.ptr.p_int[i]][j] = v;
         }
      }
   }
   cmatrixlefttrsm(n, m, a, 0, 0, false, true, 0, b, 0, 0, _state);
   cmatrixlefttrsm(n, m, a, 0, 0, true, false, 0, b, 0, 0, _state);
   *info = 1;
   ae_frame_leave(_state);
}

// Complex dense solver for A*x=B with N*N complex matrix A and  N*1  complex
// vectors x and b. "Slow-but-feature-rich" version of the solver.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * iterative refinement
// * O(N^3) complexity
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear  system
//            ! and  performs  iterative   refinement,   which   results   in
//            ! significant performance penalty  when  compared  with  "fast"
//            ! version  which  just  performs  LU  decomposition  and  calls
//            ! triangular solver.
//            !
//            ! This  performance  penalty  is  especially  visible  in   the
//            ! multithreaded mode, because both condition number  estimation
//            ! and   iterative    refinement   are   inherently   sequential
//            ! calculations.
//            !
//            ! Thus, if you need high performance and if you are pretty sure
//            ! that your system is well conditioned, we  strongly  recommend
//            ! you to use faster solver, CMatrixSolveFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixsolve(const complex_2d_array &a, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams = xdefault);
void cmatrixsolve(CMatrix *a, ae_int_t n, CVector *b, ae_int_t *info, densesolverreport *rep, CVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_COMPLEX, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_COMPLEX, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_cmove(&bm.ptr.pp_complex[0][0], bm.stride, &b->ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
   cmatrixsolvem(a, n, &bm, 1, true, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_cmove(&x->ptr.p_complex[0], 1, &xm.ptr.pp_complex[0][0], xm.stride, "N", ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Complex dense solver for A*x=B with N*N complex matrix A and  N*1  complex
// vectors x and b. "Fast-but-lightweight" version of the solver.
//
// Algorithm features:
// * O(N^3) complexity
// * no additional time consuming features, just triangular solver
//
// INPUT PARAMETERS:
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS:
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixsolvefast(const complex_2d_array &a, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void cmatrixsolvefast(CMatrix *a, ae_int_t n, CVector *b, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   ae_int_t i;
   ae_int_t j;
   ae_vector p;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   memset(&p, 0, sizeof(p));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;
   ae_vector_init(&p, 0, DT_INT, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   cmatrixlu(a, n, n, &p, _state);
   for (i = 0; i <= n - 1; i++) {
      if (ae_c_eq_d(a->ptr.pp_complex[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            b->ptr.p_complex[j] = ae_complex_from_d(0.0);
         }
         *info = -3;
         ae_frame_leave(_state);
         return;
      }
   }
   directdensesolvers_cbasiclusolve(a, &p, n, b, _state);
   *info = 1;
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N complex A given by its  LU  decomposition,
// and N*M matrices X and B (multiple right sides).   "Slow-but-feature-rich"
// version of the solver.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(M*N^2) complexity
// * condition number estimation
//
// No iterative refinement  is provided because exact form of original matrix
// is not known to subroutine. Use CMatrixSolve or CMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant  performance   penalty   when
//            ! compared with "fast"  version  which  just  calls  triangular
//            ! solver.
//            !
//            ! This performance penalty is especially apparent when you  use
//            ! ALGLIB parallel capabilities (condition number estimation  is
//            ! inherently  sequential).  It   also   becomes significant for
//            ! small-scale problems.
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! CMatrixLUSolveMFast() function.
//
// INPUT PARAMETERS
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, RMatrixLU result
//     P       -   array[0..N-1], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N,M], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixlusolvem(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams = xdefault);
void cmatrixlusolvem(CMatrix *lua, ZVector *p, ae_int_t n, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix emptya;

   ae_frame_make(_state, &_frame_block);
   memset(&emptya, 0, sizeof(emptya));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&emptya, 0, 0, DT_COMPLEX, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
// solve
   directdensesolvers_cmatrixlusolveinternal(lua, p, n, &emptya, false, b, m, info, rep, x, _state);
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N complex A given by its  LU  decomposition,
// and N*M matrices X and B (multiple  right  sides).  "Fast-but-lightweight"
// version of the solver.
//
// Algorithm features:
// * O(M*N^2) complexity
// * no additional time-consuming features
//
// INPUT PARAMETERS
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, RMatrixLU result
//     P       -   array[0..N-1], pivots array, RMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N,M]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixlusolvemfast(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void cmatrixlusolvemfast(CMatrix *lua, ZVector *p, ae_int_t n, CMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   ae_complex v;
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;

   *info = 0;

// Check for exact degeneracy
   if (n <= 0 || m <= 0) {
      *info = -1;
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      if (ae_c_eq_d(lua->ptr.pp_complex[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            for (k = 0; k <= m - 1; k++) {
               b->ptr.pp_complex[j][k] = ae_complex_from_d(0.0);
            }
         }
         *info = -3;
         return;
      }
   }

// Solve with TRSM()
   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] != i) {
         for (j = 0; j <= m - 1; j++) {
            v = b->ptr.pp_complex[i][j];
            b->ptr.pp_complex[i][j] = b->ptr.pp_complex[p->ptr.p_int[i]][j];
            b->ptr.pp_complex[p->ptr.p_int[i]][j] = v;
         }
      }
   }
   cmatrixlefttrsm(n, m, lua, 0, 0, false, true, 0, b, 0, 0, _state);
   cmatrixlefttrsm(n, m, lua, 0, 0, true, false, 0, b, 0, 0, _state);
   *info = 1;
}

// Complex dense linear solver for A*x=b with complex N*N A  given  by its LU
// decomposition and N*1 vectors x and b. This is  "slow-but-robust"  version
// of  the  complex  linear  solver  with  additional  features   which   add
// significant performance overhead. Faster version  is  CMatrixLUSolveFast()
// function.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(N^2) complexity
// * condition number estimation
//
// No iterative refinement is provided because exact form of original matrix
// is not known to subroutine. Use CMatrixSolve or CMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which results in 10-15x  performance  penalty  when  compared
//            ! with "fast" version which just calls triangular solver.
//            !
//            ! This performance penalty is insignificant  when compared with
//            ! cost of large LU decomposition.  However,  if you  call  this
//            ! function many times for the same  left  side,  this  overhead
//            ! BECOMES significant. It  also  becomes significant for small-
//            ! scale problems.
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! CMatrixLUSolveFast() function.
//
// INPUT PARAMETERS
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, CMatrixLU result
//     P       -   array[0..N-1], pivots array, CMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixlusolve(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams = xdefault);
void cmatrixlusolve(CMatrix *lua, ZVector *p, ae_int_t n, CVector *b, ae_int_t *info, densesolverreport *rep, CVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_COMPLEX, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_COMPLEX, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_cmove(&bm.ptr.pp_complex[0][0], bm.stride, &b->ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
   cmatrixlusolvem(lua, p, n, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_cmove(&x->ptr.p_complex[0], 1, &xm.ptr.pp_complex[0][0], xm.stride, "N", ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Complex dense linear solver for A*x=b with N*N complex A given by  its  LU
// decomposition and N*1 vectors x and b. This is  fast  lightweight  version
// of solver, which is significantly faster than CMatrixLUSolve(),  but  does
// not provide additional information (like condition numbers).
//
// Algorithm features:
// * O(N^2) complexity
// * no additional time-consuming features, just triangular solver
//
// INPUT PARAMETERS
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, CMatrixLU result
//     P       -   array[0..N-1], pivots array, CMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is exactly singular (ill conditioned matrices
//                         are not recognized).
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N]:
//                 * info>0    =>  overwritten by solution
//                 * info=-3   =>  filled by zeros
//
// NOTE: unlike  CMatrixLUSolve(),  this   function   does   NOT   check  for
//       near-degeneracy of input matrix. It  checks  for  EXACT  degeneracy,
//       because this check is easy to do. However,  very  badly  conditioned
//       matrices may went unnoticed.
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixlusolvefast(const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void cmatrixlusolvefast(CMatrix *lua, ZVector *p, ae_int_t n, CVector *b, ae_int_t *info, ae_state *_state) {
   ae_int_t i;
   ae_int_t j;

   *info = 0;

   if (n <= 0) {
      *info = -1;
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      if (ae_c_eq_d(lua->ptr.pp_complex[i][i], (double)(0))) {
         for (j = 0; j <= n - 1; j++) {
            b->ptr.p_complex[j] = ae_complex_from_d(0.0);
         }
         *info = -3;
         return;
      }
   }
   directdensesolvers_cbasiclusolve(lua, p, n, b, _state);
   *info = 1;
}

// Dense solver. Same as RMatrixMixedSolveM(), but for complex matrices.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * iterative refinement
// * O(M*N^2) complexity
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, CMatrixLU result
//     P       -   array[0..N-1], pivots array, CMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N,M], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixmixedsolvem(const complex_2d_array &a, const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams = xdefault);
void cmatrixmixedsolvem(CMatrix *a, CMatrix *lua, ZVector *p, ae_int_t n, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state) {

   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      return;
   }
// solve
   directdensesolvers_cmatrixlusolveinternal(lua, p, n, a, true, b, m, info, rep, x, _state);
}

// Dense solver. Same as RMatrixMixedSolve(), but for complex matrices.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * iterative refinement
// * O(N^2) complexity
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     LUA     -   array[0..N-1,0..N-1], LU decomposition, CMatrixLU result
//     P       -   array[0..N-1], pivots array, CMatrixLU result
//     N       -   size of A
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or exactly singular.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void cmatrixmixedsolve(const complex_2d_array &a, const complex_2d_array &lua, const integer_1d_array &p, const ae_int_t n, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams = xdefault);
void cmatrixmixedsolve(CMatrix *a, CMatrix *lua, ZVector *p, ae_int_t n, CVector *b, ae_int_t *info, densesolverreport *rep, CVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_COMPLEX, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_COMPLEX, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_cmove(&bm.ptr.pp_complex[0][0], bm.stride, &b->ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
   cmatrixmixedsolvem(a, lua, p, n, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_cmove(&x->ptr.p_complex[0], 1, &xm.ptr.pp_complex[0][0], xm.stride, "N", ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N symmetric positive definite matrix A,  and
// N*M vectors X and B. It is "slow-but-feature-rich" version of the solver.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * O(N^3+M*N^2) complexity
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant   performance   penalty  when
//            ! compared with "fast" version  which  just  performs  Cholesky
//            ! decomposition and calls triangular solver.
//            !
//            ! This  performance  penalty  is  especially  visible  in   the
//            ! multithreaded mode, because both condition number  estimation
//            ! and   iterative    refinement   are   inherently   sequential
//            ! calculations.
//            !
//            ! Thus, if you need high performance and if you are pretty sure
//            ! that your system is well conditioned, we  strongly  recommend
//            ! you to use faster solver, SPDMatrixSolveMFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or non-SPD.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N,M], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void spdmatrixsolvem(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams = xdefault);
void spdmatrixsolvem(RMatrix *a, ae_int_t n, bool isupper, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix da;
   ae_int_t i;
   ae_int_t j;
   ae_int_t j1;
   ae_int_t j2;

   ae_frame_make(_state, &_frame_block);
   memset(&da, 0, sizeof(da));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&da, 0, 0, DT_REAL, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&da, n, n, _state);

// factorize
// solve
   for (i = 0; i <= n - 1; i++) {
      if (isupper) {
         j1 = i;
         j2 = n - 1;
      } else {
         j1 = 0;
         j2 = i;
      }
      ae_v_move(&da.ptr.pp_double[i][j1], 1, &a->ptr.pp_double[i][j1], 1, ae_v_len(j1, j2));
   }
   if (!spdmatrixcholesky(&da, n, isupper, _state)) {
      ae_matrix_set_length(x, n, m, _state);
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            x->ptr.pp_double[i][j] = (double)(0);
         }
      }
      rep->r1 = (double)(0);
      rep->rinf = (double)(0);
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   *info = 1;
   directdensesolvers_spdmatrixcholeskysolveinternal(&da, n, isupper, a, true, b, m, info, rep, x, _state);
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N symmetric positive definite matrix A,  and
// N*M vectors X and B. It is "fast-but-lightweight" version of the solver.
//
// Algorithm features:
// * O(N^3+M*N^2) complexity
// * matrix is represented by its upper or lower triangle
// * no additional time consuming features
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular
//                 * -1    N<=0 was passed
//                 *  1    task was solved
//     B       -   array[N,M], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 17.03.2015 by Sergey Bochkanov
// API: void spdmatrixsolvemfast(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void spdmatrixsolvemfast(RMatrix *a, ae_int_t n, bool isupper, RMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   ae_int_t i;
   ae_int_t j;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   if (!spdmatrixcholesky(a, n, isupper, _state)) {
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            b->ptr.pp_double[i][j] = 0.0;
         }
      }
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   if (isupper) {
      rmatrixlefttrsm(n, m, a, 0, 0, true, false, 1, b, 0, 0, _state);
      rmatrixlefttrsm(n, m, a, 0, 0, true, false, 0, b, 0, 0, _state);
   } else {
      rmatrixlefttrsm(n, m, a, 0, 0, false, false, 0, b, 0, 0, _state);
      rmatrixlefttrsm(n, m, a, 0, 0, false, false, 1, b, 0, 0, _state);
   }
   ae_frame_leave(_state);
}

// Dense linear solver for A*x=b with N*N real  symmetric  positive  definite
// matrix A,  N*1 vectors x and b.  "Slow-but-feature-rich"  version  of  the
// solver.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * O(N^3) complexity
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant   performance   penalty  when
//            ! compared with "fast" version  which  just  performs  Cholesky
//            ! decomposition and calls triangular solver.
//            !
//            ! This  performance  penalty  is  especially  visible  in   the
//            ! multithreaded mode, because both condition number  estimation
//            ! and   iterative    refinement   are   inherently   sequential
//            ! calculations.
//            !
//            ! Thus, if you need high performance and if you are pretty sure
//            ! that your system is well conditioned, we  strongly  recommend
//            ! you to use faster solver, SPDMatrixSolveFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    matrix is very badly conditioned or non-SPD.
//                 * -1    N<=0 was passed
//                 *  1    task is solved (but matrix A may be ill-conditioned,
//                         check R1/RInf parameters for condition numbers).
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void spdmatrixsolve(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams = xdefault);
void spdmatrixsolve(RMatrix *a, ae_int_t n, bool isupper, RVector *b, ae_int_t *info, densesolverreport *rep, RVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_REAL, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_move(&bm.ptr.pp_double[0][0], bm.stride, &b->ptr.p_double[0], 1, ae_v_len(0, n - 1));
   spdmatrixsolvem(a, n, isupper, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_move(&x->ptr.p_double[0], 1, &xm.ptr.pp_double[0][0], xm.stride, ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense linear solver for A*x=b with N*N real  symmetric  positive  definite
// matrix A,  N*1 vectors x and  b.  "Fast-but-lightweight"  version  of  the
// solver.
//
// Algorithm features:
// * O(N^3) complexity
// * matrix is represented by its upper or lower triangle
// * no additional time consuming features like condition number estimation
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or non-SPD
//                 * -1    N<=0 was passed
//                 *  1    task was solved
//     B       -   array[N], it contains:
//                 * info>0    =>  solution
//                 * info=-3   =>  filled by zeros
// ALGLIB: Copyright 17.03.2015 by Sergey Bochkanov
// API: void spdmatrixsolvefast(const real_2d_array &a, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void spdmatrixsolvefast(RMatrix *a, ae_int_t n, bool isupper, RVector *b, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   ae_int_t i;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   if (!spdmatrixcholesky(a, n, isupper, _state)) {
      for (i = 0; i <= n - 1; i++) {
         b->ptr.p_double[i] = 0.0;
      }
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   directdensesolvers_spdbasiccholeskysolve(a, n, isupper, b, _state);
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N symmetric positive definite matrix A given
// by its Cholesky decomposition, and N*M vectors X and B. It  is  "slow-but-
// feature-rich" version of the solver which estimates  condition  number  of
// the system.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(M*N^2) complexity
// * condition number estimation
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant  performance   penalty   when
//            ! compared with "fast"  version  which  just  calls  triangular
//            ! solver. Amount of  overhead  introduced  depends  on  M  (the
//            ! larger - the more efficient).
//            !
//            ! This performance penalty is insignificant  when compared with
//            ! cost of large LU decomposition.  However,  if you  call  this
//            ! function many times for the same  left  side,  this  overhead
//            ! BECOMES significant. It  also  becomes significant for small-
//            ! scale problems (N<50).
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! SPDMatrixCholeskySolveMFast() function.
//
// INPUT PARAMETERS
//     CHA     -   array[0..N-1,0..N-1], Cholesky decomposition,
//                 SPDMatrixCholesky result
//     N       -   size of CHA
//     IsUpper -   what half of CHA is provided
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or badly conditioned
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task was solved
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N]:
//                 * for info>0 contains solution
//                 * for info=-3 filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void spdmatrixcholeskysolvem(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, real_2d_array &x, const xparams _xparams = xdefault);
void spdmatrixcholeskysolvem(RMatrix *cha, ae_int_t n, bool isupper, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix emptya;

   ae_frame_make(_state, &_frame_block);
   memset(&emptya, 0, sizeof(emptya));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&emptya, 0, 0, DT_REAL, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
// solve
   directdensesolvers_spdmatrixcholeskysolveinternal(cha, n, isupper, &emptya, false, b, m, info, rep, x, _state);
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N symmetric positive definite matrix A given
// by its Cholesky decomposition, and N*M vectors X and B. It  is  "fast-but-
// lightweight" version of  the  solver  which  just  solves  linear  system,
// without any additional functions.
//
// Algorithm features:
// * O(M*N^2) complexity
// * matrix is represented by its upper or lower triangle
// * no additional functionality
//
// INPUT PARAMETERS
//     CHA     -   array[N,N], Cholesky decomposition,
//                 SPDMatrixCholesky result
//     N       -   size of CHA
//     IsUpper -   what half of CHA is provided
//     B       -   array[N,M], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or badly conditioned
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task was solved
//     B       -   array[N]:
//                 * for info>0 overwritten by solution
//                 * for info=-3 filled by zeros
// ALGLIB: Copyright 18.03.2015 by Sergey Bochkanov
// API: void spdmatrixcholeskysolvemfast(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void spdmatrixcholeskysolvemfast(RMatrix *cha, ae_int_t n, bool isupper, RMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;

   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      return;
   }
   for (k = 0; k <= n - 1; k++) {
      if (ae_fp_eq(cha->ptr.pp_double[k][k], 0.0)) {
         for (i = 0; i <= n - 1; i++) {
            for (j = 0; j <= m - 1; j++) {
               b->ptr.pp_double[i][j] = 0.0;
            }
         }
         *info = -3;
         return;
      }
   }
   if (isupper) {
      rmatrixlefttrsm(n, m, cha, 0, 0, true, false, 1, b, 0, 0, _state);
      rmatrixlefttrsm(n, m, cha, 0, 0, true, false, 0, b, 0, 0, _state);
   } else {
      rmatrixlefttrsm(n, m, cha, 0, 0, false, false, 0, b, 0, 0, _state);
      rmatrixlefttrsm(n, m, cha, 0, 0, false, false, 1, b, 0, 0, _state);
   }
}

// Dense solver for A*x=b with N*N symmetric positive definite matrix A given
// by its Cholesky decomposition, and N*1 real vectors x and b. This is "slow-
// but-feature-rich"  version  of  the  solver  which,  in  addition  to  the
// solution, performs condition number estimation.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(N^2) complexity
// * condition number estimation
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which results in 10-15x  performance  penalty  when  compared
//            ! with "fast" version which just calls triangular solver.
//            !
//            ! This performance penalty is insignificant  when compared with
//            ! cost of large LU decomposition.  However,  if you  call  this
//            ! function many times for the same  left  side,  this  overhead
//            ! BECOMES significant. It  also  becomes significant for small-
//            ! scale problems (N<50).
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! SPDMatrixCholeskySolveFast() function.
//
// INPUT PARAMETERS
//     CHA     -   array[N,N], Cholesky decomposition,
//                 SPDMatrixCholesky result
//     N       -   size of A
//     IsUpper -   what half of CHA is provided
//     B       -   array[N], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or ill conditioned
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N]:
//                 * for info>0  - solution
//                 * for info=-3 - filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void spdmatrixcholeskysolve(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, densesolverreport &rep, real_1d_array &x, const xparams _xparams = xdefault);
void spdmatrixcholeskysolve(RMatrix *cha, ae_int_t n, bool isupper, RVector *b, ae_int_t *info, densesolverreport *rep, RVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_REAL, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_move(&bm.ptr.pp_double[0][0], bm.stride, &b->ptr.p_double[0], 1, ae_v_len(0, n - 1));
   spdmatrixcholeskysolvem(cha, n, isupper, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_move(&x->ptr.p_double[0], 1, &xm.ptr.pp_double[0][0], xm.stride, ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense solver for A*x=b with N*N symmetric positive definite matrix A given
// by its Cholesky decomposition, and N*1 real vectors x and b. This is "fast-
// but-lightweight" version of the solver.
//
// Algorithm features:
// * O(N^2) complexity
// * matrix is represented by its upper or lower triangle
// * no additional features
//
// INPUT PARAMETERS
//     CHA     -   array[N,N], Cholesky decomposition,
//                 SPDMatrixCholesky result
//     N       -   size of A
//     IsUpper -   what half of CHA is provided
//     B       -   array[N], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or ill conditioned
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N]:
//                 * for info>0  - overwritten by solution
//                 * for info=-3 - filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void spdmatrixcholeskysolvefast(const real_2d_array &cha, const ae_int_t n, const bool isupper, const real_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void spdmatrixcholeskysolvefast(RMatrix *cha, ae_int_t n, bool isupper, RVector *b, ae_int_t *info, ae_state *_state) {
   ae_int_t i;
   ae_int_t k;

   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      return;
   }
   for (k = 0; k <= n - 1; k++) {
      if (ae_fp_eq(cha->ptr.pp_double[k][k], 0.0)) {
         for (i = 0; i <= n - 1; i++) {
            b->ptr.p_double[i] = 0.0;
         }
         *info = -3;
         return;
      }
   }
   directdensesolvers_spdbasiccholeskysolve(cha, n, isupper, b, _state);
}

// Dense solver for A*X=B, with N*N Hermitian positive definite matrix A  and
// N*M  complex  matrices  X  and  B.  "Slow-but-feature-rich" version of the
// solver.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * O(N^3+M*N^2) complexity
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant  performance   penalty   when
//            ! compared with "fast"  version  which  just  calls  triangular
//            ! solver.
//            !
//            ! This performance penalty is especially apparent when you  use
//            ! ALGLIB parallel capabilities (condition number estimation  is
//            ! inherently  sequential).  It   also   becomes significant for
//            ! small-scale problems (N<100).
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! HPDMatrixSolveMFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   same as in RMatrixSolve.
//                 Returns -3 for non-HPD matrices.
//     Rep     -   same as in RMatrixSolve
//     X       -   same as in RMatrixSolve
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void hpdmatrixsolvem(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams = xdefault);
void hpdmatrixsolvem(CMatrix *a, ae_int_t n, bool isupper, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix da;
   ae_int_t i;
   ae_int_t j;
   ae_int_t j1;
   ae_int_t j2;

   ae_frame_make(_state, &_frame_block);
   memset(&da, 0, sizeof(da));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&da, 0, 0, DT_COMPLEX, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&da, n, n, _state);

// factorize matrix, solve
   for (i = 0; i <= n - 1; i++) {
      if (isupper) {
         j1 = i;
         j2 = n - 1;
      } else {
         j1 = 0;
         j2 = i;
      }
      ae_v_cmove(&da.ptr.pp_complex[i][j1], 1, &a->ptr.pp_complex[i][j1], 1, "N", ae_v_len(j1, j2));
   }
   if (!hpdmatrixcholesky(&da, n, isupper, _state)) {
      ae_matrix_set_length(x, n, m, _state);
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            x->ptr.pp_complex[i][j] = ae_complex_from_i(0);
         }
      }
      rep->r1 = (double)(0);
      rep->rinf = (double)(0);
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   *info = 1;
   directdensesolvers_hpdmatrixcholeskysolveinternal(&da, n, isupper, a, true, b, m, info, rep, x, _state);
   ae_frame_leave(_state);
}

// Dense solver for A*X=B, with N*N Hermitian positive definite matrix A  and
// N*M complex matrices X and B. "Fast-but-lightweight" version of the solver.
//
// Algorithm features:
// * O(N^3+M*N^2) complexity
// * matrix is represented by its upper or lower triangle
// * no additional time consuming features like condition number estimation
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1,0..M-1], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly  singular or is not positive definite.
//                         B is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[0..N-1]:
//                 * overwritten by solution
//                 * zeros, if problem was not solved
// ALGLIB: Copyright 17.03.2015 by Sergey Bochkanov
// API: void hpdmatrixsolvemfast(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void hpdmatrixsolvemfast(CMatrix *a, ae_int_t n, bool isupper, CMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   ae_int_t i;
   ae_int_t j;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   if (!hpdmatrixcholesky(a, n, isupper, _state)) {
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            b->ptr.pp_complex[i][j] = ae_complex_from_d(0.0);
         }
      }
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   if (isupper) {
      cmatrixlefttrsm(n, m, a, 0, 0, true, false, 2, b, 0, 0, _state);
      cmatrixlefttrsm(n, m, a, 0, 0, true, false, 0, b, 0, 0, _state);
   } else {
      cmatrixlefttrsm(n, m, a, 0, 0, false, false, 0, b, 0, 0, _state);
      cmatrixlefttrsm(n, m, a, 0, 0, false, false, 2, b, 0, 0, _state);
   }
   ae_frame_leave(_state);
}

// Dense solver for A*x=b, with N*N Hermitian positive definite matrix A, and
// N*1 complex vectors  x  and  b.  "Slow-but-feature-rich"  version  of  the
// solver.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * condition number estimation
// * O(N^3) complexity
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant   performance   penalty  when
//            ! compared with "fast" version  which  just  performs  Cholesky
//            ! decomposition and calls triangular solver.
//            !
//            ! This  performance  penalty  is  especially  visible  in   the
//            ! multithreaded mode, because both condition number  estimation
//            ! and   iterative    refinement   are   inherently   sequential
//            ! calculations.
//            !
//            ! Thus, if you need high performance and if you are pretty sure
//            ! that your system is well conditioned, we  strongly  recommend
//            ! you to use faster solver, HPDMatrixSolveFast() function.
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   same as in RMatrixSolve
//                 Returns -3 for non-HPD matrices.
//     Rep     -   same as in RMatrixSolve
//     X       -   same as in RMatrixSolve
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void hpdmatrixsolve(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams = xdefault);
void hpdmatrixsolve(CMatrix *a, ae_int_t n, bool isupper, CVector *b, ae_int_t *info, densesolverreport *rep, CVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_COMPLEX, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_COMPLEX, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_cmove(&bm.ptr.pp_complex[0][0], bm.stride, &b->ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
   hpdmatrixsolvem(a, n, isupper, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_cmove(&x->ptr.p_complex[0], 1, &xm.ptr.pp_complex[0][0], xm.stride, "N", ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense solver for A*x=b, with N*N Hermitian positive definite matrix A, and
// N*1 complex vectors  x  and  b.  "Fast-but-lightweight"  version  of   the
// solver without additional functions.
//
// Algorithm features:
// * O(N^3) complexity
// * matrix is represented by its upper or lower triangle
// * no additional time consuming functions
//
// INPUT PARAMETERS
//     A       -   array[0..N-1,0..N-1], system matrix
//     N       -   size of A
//     IsUpper -   what half of A is provided
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or not positive definite
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task was solved
//     B       -   array[0..N-1]:
//                 * overwritten by solution
//                 * zeros, if A is exactly singular (diagonal of its LU
//                   decomposition has exact zeros).
// ALGLIB: Copyright 17.03.2015 by Sergey Bochkanov
// API: void hpdmatrixsolvefast(const complex_2d_array &a, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void hpdmatrixsolvefast(CMatrix *a, ae_int_t n, bool isupper, CVector *b, ae_int_t *info, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix _a;
   ae_int_t i;

   ae_frame_make(_state, &_frame_block);
   memset(&_a, 0, sizeof(_a));
   ae_matrix_init_copy(&_a, a, _state, true);
   a = &_a;
   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   if (!hpdmatrixcholesky(a, n, isupper, _state)) {
      for (i = 0; i <= n - 1; i++) {
         b->ptr.p_complex[i] = ae_complex_from_d(0.0);
      }
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   directdensesolvers_hpdbasiccholeskysolve(a, n, isupper, b, _state);
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N Hermitian positive definite matrix A given
// by its Cholesky decomposition and N*M complex matrices X  and  B.  This is
// "slow-but-feature-rich" version of the solver which, in  addition  to  the
// solution, estimates condition number of the system.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(M*N^2) complexity
// * condition number estimation
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which  results  in  significant  performance   penalty   when
//            ! compared with "fast"  version  which  just  calls  triangular
//            ! solver. Amount of  overhead  introduced  depends  on  M  (the
//            ! larger - the more efficient).
//            !
//            ! This performance penalty is insignificant  when compared with
//            ! cost of large Cholesky decomposition.  However,  if  you call
//            ! this  function  many  times  for  the same  left  side,  this
//            ! overhead BECOMES significant. It  also   becomes  significant
//            ! for small-scale problems (N<50).
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! HPDMatrixCholeskySolveMFast() function.
//
//
// INPUT PARAMETERS
//     CHA     -   array[N,N], Cholesky decomposition,
//                 HPDMatrixCholesky result
//     N       -   size of CHA
//     IsUpper -   what half of CHA is provided
//     B       -   array[N,M], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS:
//     Info    -   return code:
//                 * -3    A is singular, or VERY close to singular.
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task was solved
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N]:
//                 * for info>0 contains solution
//                 * for info=-3 filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void hpdmatrixcholeskysolvem(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, densesolverreport &rep, complex_2d_array &x, const xparams _xparams = xdefault);
void hpdmatrixcholeskysolvem(CMatrix *cha, ae_int_t n, bool isupper, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix emptya;

   ae_frame_make(_state, &_frame_block);
   memset(&emptya, 0, sizeof(emptya));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_matrix_init(&emptya, 0, 0, DT_COMPLEX, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
// 1. scale matrix, max(|U[i,j]|)
// 2. factorize scaled matrix
// 3. solve
   directdensesolvers_hpdmatrixcholeskysolveinternal(cha, n, isupper, &emptya, false, b, m, info, rep, x, _state);
   ae_frame_leave(_state);
}

// Dense solver for A*X=B with N*N Hermitian positive definite matrix A given
// by its Cholesky decomposition and N*M complex matrices X  and  B.  This is
// "fast-but-lightweight" version of the solver.
//
// Algorithm features:
// * O(M*N^2) complexity
// * matrix is represented by its upper or lower triangle
// * no additional time-consuming features
//
// INPUT PARAMETERS
//     CHA     -   array[N,N], Cholesky decomposition,
//                 HPDMatrixCholesky result
//     N       -   size of CHA
//     IsUpper -   what half of CHA is provided
//     B       -   array[N,M], right part
//     M       -   right part size
//
// OUTPUT PARAMETERS:
//     Info    -   return code:
//                 * -3    A is singular, or VERY close to singular.
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task was solved
//     B       -   array[N]:
//                 * for info>0 overwritten by solution
//                 * for info=-3 filled by zeros
// ALGLIB: Copyright 18.03.2015 by Sergey Bochkanov
// API: void hpdmatrixcholeskysolvemfast(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_2d_array &b, const ae_int_t m, ae_int_t &info, const xparams _xparams = xdefault);
void hpdmatrixcholeskysolvemfast(CMatrix *cha, ae_int_t n, bool isupper, CMatrix *b, ae_int_t m, ae_int_t *info, ae_state *_state) {
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;

   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      return;
   }
   for (k = 0; k <= n - 1; k++) {
      if (ae_fp_eq(cha->ptr.pp_complex[k][k].x, 0.0) && ae_fp_eq(cha->ptr.pp_complex[k][k].y, 0.0)) {
         for (i = 0; i <= n - 1; i++) {
            for (j = 0; j <= m - 1; j++) {
               b->ptr.pp_complex[i][j] = ae_complex_from_d(0.0);
            }
         }
         *info = -3;
         return;
      }
   }
   if (isupper) {
      cmatrixlefttrsm(n, m, cha, 0, 0, true, false, 2, b, 0, 0, _state);
      cmatrixlefttrsm(n, m, cha, 0, 0, true, false, 0, b, 0, 0, _state);
   } else {
      cmatrixlefttrsm(n, m, cha, 0, 0, false, false, 0, b, 0, 0, _state);
      cmatrixlefttrsm(n, m, cha, 0, 0, false, false, 2, b, 0, 0, _state);
   }
}

// Dense solver for A*x=b with N*N Hermitian positive definite matrix A given
// by its Cholesky decomposition, and N*1 complex vectors x and  b.  This  is
// "slow-but-feature-rich" version of the solver  which  estimates  condition
// number of the system.
//
// Algorithm features:
// * automatic detection of degenerate cases
// * O(N^2) complexity
// * condition number estimation
// * matrix is represented by its upper or lower triangle
//
// No iterative refinement is provided because such partial representation of
// matrix does not allow efficient calculation of extra-precise  matrix-vector
// products for large matrices. Use RMatrixSolve or RMatrixMixedSolve  if  you
// need iterative refinement.
//
// IMPORTANT: ! this function is NOT the most efficient linear solver provided
//            ! by ALGLIB. It estimates condition  number  of  linear system,
//            ! which results in 10-15x  performance  penalty  when  compared
//            ! with "fast" version which just calls triangular solver.
//            !
//            ! This performance penalty is insignificant  when compared with
//            ! cost of large LU decomposition.  However,  if you  call  this
//            ! function many times for the same  left  side,  this  overhead
//            ! BECOMES significant. It  also  becomes significant for small-
//            ! scale problems (N<50).
//            !
//            ! In such cases we strongly recommend you to use faster solver,
//            ! HPDMatrixCholeskySolveFast() function.
//
// INPUT PARAMETERS
//     CHA     -   array[0..N-1,0..N-1], Cholesky decomposition,
//                 SPDMatrixCholesky result
//     N       -   size of A
//     IsUpper -   what half of CHA is provided
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or ill conditioned
//                         X is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     Rep     -   additional report, following fields are set:
//                 * rep.r1    condition number in 1-norm
//                 * rep.rinf  condition number in inf-norm
//     X       -   array[N]:
//                 * for info>0  - solution
//                 * for info=-3 - filled by zeros
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
// API: void hpdmatrixcholeskysolve(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, densesolverreport &rep, complex_1d_array &x, const xparams _xparams = xdefault);
void hpdmatrixcholeskysolve(CMatrix *cha, ae_int_t n, bool isupper, CVector *b, ae_int_t *info, densesolverreport *rep, CVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_matrix bm;
   ae_matrix xm;

   ae_frame_make(_state, &_frame_block);
   memset(&bm, 0, sizeof(bm));
   memset(&xm, 0, sizeof(xm));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_vector_clear(x);
   ae_matrix_init(&bm, 0, 0, DT_COMPLEX, _state, true);
   ae_matrix_init(&xm, 0, 0, DT_COMPLEX, _state, true);

   if (n <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(&bm, n, 1, _state);
   ae_v_cmove(&bm.ptr.pp_complex[0][0], bm.stride, &b->ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
   hpdmatrixcholeskysolvem(cha, n, isupper, &bm, 1, info, rep, &xm, _state);
   ae_vector_set_length(x, n, _state);
   ae_v_cmove(&x->ptr.p_complex[0], 1, &xm.ptr.pp_complex[0][0], xm.stride, "N", ae_v_len(0, n - 1));
   ae_frame_leave(_state);
}

// Dense solver for A*x=b with N*N Hermitian positive definite matrix A given
// by its Cholesky decomposition, and N*1 complex vectors x and  b.  This  is
// "fast-but-lightweight" version of the solver.
//
// Algorithm features:
// * O(N^2) complexity
// * matrix is represented by its upper or lower triangle
// * no additional time-consuming features
//
// INPUT PARAMETERS
//     CHA     -   array[0..N-1,0..N-1], Cholesky decomposition,
//                 SPDMatrixCholesky result
//     N       -   size of A
//     IsUpper -   what half of CHA is provided
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -3    A is is exactly singular or ill conditioned
//                         B is filled by zeros in such cases.
//                 * -1    N<=0 was passed
//                 *  1    task is solved
//     B       -   array[N]:
//                 * for info>0  - overwritten by solution
//                 * for info=-3 - filled by zeros
// ALGLIB: Copyright 18.03.2015 by Sergey Bochkanov
// API: void hpdmatrixcholeskysolvefast(const complex_2d_array &cha, const ae_int_t n, const bool isupper, const complex_1d_array &b, ae_int_t &info, const xparams _xparams = xdefault);
void hpdmatrixcholeskysolvefast(CMatrix *cha, ae_int_t n, bool isupper, CVector *b, ae_int_t *info, ae_state *_state) {
   ae_int_t i;
   ae_int_t k;

   *info = 0;

   *info = 1;
   if (n <= 0) {
      *info = -1;
      return;
   }
   for (k = 0; k <= n - 1; k++) {
      if (ae_fp_eq(cha->ptr.pp_complex[k][k].x, 0.0) && ae_fp_eq(cha->ptr.pp_complex[k][k].y, 0.0)) {
         for (i = 0; i <= n - 1; i++) {
            b->ptr.p_complex[i] = ae_complex_from_d(0.0);
         }
         *info = -3;
         return;
      }
   }
   directdensesolvers_hpdbasiccholeskysolve(cha, n, isupper, b, _state);
}

// Dense solver.
//
// This subroutine finds solution of the linear system A*X=B with non-square,
// possibly degenerate A.  System  is  solved in the least squares sense, and
// general least squares solution  X = X0 + CX*y  which  minimizes |A*X-B| is
// returned. If A is non-degenerate, solution in the usual sense is returned.
//
// Algorithm features:
// * automatic detection (and correct handling!) of degenerate cases
// * iterative refinement
// * O(N^3) complexity
//
// INPUT PARAMETERS
//     A       -   array[0..NRows-1,0..NCols-1], system matrix
//     NRows   -   vertical size of A
//     NCols   -   horizontal size of A
//     B       -   array[0..NCols-1], right part
//     Threshold-  a number in [0,1]. Singular values  beyond  Threshold  are
//                 considered  zero.  Set  it to 0.0, if you don't understand
//                 what it means, so the solver will choose good value on its
//                 own.
//
// OUTPUT PARAMETERS
//     Info    -   return code:
//                 * -4    SVD subroutine failed
//                 * -1    if NRows<=0 or NCols<=0 or Threshold<0 was passed
//                 *  1    if task is solved
//     Rep     -   solver report, see below for more info
//     X       -   array[0..N-1,0..M-1], it contains:
//                 * solution of A*X=B (even for singular A)
//                 * zeros, if SVD subroutine failed
//
// SOLVER REPORT
//
// Subroutine sets following fields of the Rep structure:
// * R2        reciprocal of condition number: 1/cond(A), 2-norm.
// * N         = NCols
// * K         dim(Null(A))
// * CX        array[0..N-1,0..K-1], kernel of A.
//             Columns of CX store such vectors that A*CX[i]=0.
// ALGLIB: Copyright 24.08.2009 by Sergey Bochkanov
// API: void rmatrixsolvels(const real_2d_array &a, const ae_int_t nrows, const ae_int_t ncols, const real_1d_array &b, const double threshold, ae_int_t &info, densesolverlsreport &rep, real_1d_array &x, const xparams _xparams = xdefault);
void rmatrixsolvels(RMatrix *a, ae_int_t nrows, ae_int_t ncols, RVector *b, double threshold, ae_int_t *info, densesolverlsreport *rep, RVector *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_vector sv;
   ae_matrix u;
   ae_matrix vt;
   ae_vector rp;
   ae_vector utb;
   ae_vector sutb;
   ae_vector tmp;
   ae_vector ta;
   ae_vector tx;
   ae_vector buf;
   ae_vector w;
   ae_int_t i;
   ae_int_t j;
   ae_int_t nsv;
   ae_int_t kernelidx;
   double v;
   double verr;
   bool svdfailed;
   bool zeroa;
   ae_int_t rfs;
   ae_int_t nrfs;
   bool terminatenexttime;
   bool smallerr;

   ae_frame_make(_state, &_frame_block);
   memset(&sv, 0, sizeof(sv));
   memset(&u, 0, sizeof(u));
   memset(&vt, 0, sizeof(vt));
   memset(&rp, 0, sizeof(rp));
   memset(&utb, 0, sizeof(utb));
   memset(&sutb, 0, sizeof(sutb));
   memset(&tmp, 0, sizeof(tmp));
   memset(&ta, 0, sizeof(ta));
   memset(&tx, 0, sizeof(tx));
   memset(&buf, 0, sizeof(buf));
   memset(&w, 0, sizeof(w));
   *info = 0;
   _densesolverlsreport_clear(rep);
   ae_vector_clear(x);
   ae_vector_init(&sv, 0, DT_REAL, _state, true);
   ae_matrix_init(&u, 0, 0, DT_REAL, _state, true);
   ae_matrix_init(&vt, 0, 0, DT_REAL, _state, true);
   ae_vector_init(&rp, 0, DT_REAL, _state, true);
   ae_vector_init(&utb, 0, DT_REAL, _state, true);
   ae_vector_init(&sutb, 0, DT_REAL, _state, true);
   ae_vector_init(&tmp, 0, DT_REAL, _state, true);
   ae_vector_init(&ta, 0, DT_REAL, _state, true);
   ae_vector_init(&tx, 0, DT_REAL, _state, true);
   ae_vector_init(&buf, 0, DT_REAL, _state, true);
   ae_vector_init(&w, 0, DT_REAL, _state, true);

   if ((nrows <= 0 || ncols <= 0) || ae_fp_less(threshold, (double)(0))) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   if (ae_fp_eq(threshold, (double)(0))) {
      threshold = 1000 * ae_machineepsilon;
   }
// Factorize A first
   svdfailed = !rmatrixsvd(a, nrows, ncols, 1, 2, 2, &sv, &u, &vt, _state);
   zeroa = ae_fp_eq(sv.ptr.p_double[0], (double)(0));
   if (svdfailed || zeroa) {
      if (svdfailed) {
         *info = -4;
      } else {
         *info = 1;
      }
      ae_vector_set_length(x, ncols, _state);
      for (i = 0; i <= ncols - 1; i++) {
         x->ptr.p_double[i] = (double)(0);
      }
      rep->n = ncols;
      rep->k = ncols;
      ae_matrix_set_length(&rep->cx, ncols, ncols, _state);
      for (i = 0; i <= ncols - 1; i++) {
         for (j = 0; j <= ncols - 1; j++) {
            if (i == j) {
               rep->cx.ptr.pp_double[i][j] = (double)(1);
            } else {
               rep->cx.ptr.pp_double[i][j] = (double)(0);
            }
         }
      }
      rep->r2 = (double)(0);
      ae_frame_leave(_state);
      return;
   }
   nsv = ae_minint(ncols, nrows, _state);
   if (nsv == ncols) {
      rep->r2 = sv.ptr.p_double[nsv - 1] / sv.ptr.p_double[0];
   } else {
      rep->r2 = (double)(0);
   }
   rep->n = ncols;
   *info = 1;

// Iterative refinement of xc combined with solution:
// 1. xc = 0
// 2. calculate r = bc-A*xc using extra-precise dot product
// 3. solve A*y = r
// 4. update x:=x+r
// 5. goto 2
//
// This cycle is executed until one of two things happens:
// 1. maximum number of iterations reached
// 2. last iteration decreased error to the lower limit
   ae_vector_set_length(&utb, nsv, _state);
   ae_vector_set_length(&sutb, nsv, _state);
   ae_vector_set_length(x, ncols, _state);
   ae_vector_set_length(&tmp, ncols, _state);
   ae_vector_set_length(&ta, ncols + 1, _state);
   ae_vector_set_length(&tx, ncols + 1, _state);
   ae_vector_set_length(&buf, ncols + 1, _state);
   for (i = 0; i <= ncols - 1; i++) {
      x->ptr.p_double[i] = (double)(0);
   }
   kernelidx = nsv;
   for (i = 0; i <= nsv - 1; i++) {
      if (ae_fp_less_eq(sv.ptr.p_double[i], threshold * sv.ptr.p_double[0])) {
         kernelidx = i;
         break;
      }
   }
   rep->k = ncols - kernelidx;
   nrfs = directdensesolvers_densesolverrfsmaxv2(ncols, rep->r2, _state);
   terminatenexttime = false;
   ae_vector_set_length(&rp, nrows, _state);
   for (rfs = 0; rfs <= nrfs; rfs++) {
      if (terminatenexttime) {
         break;
      }
   // calculate right part
      if (rfs == 0) {
         ae_v_move(&rp.ptr.p_double[0], 1, &b->ptr.p_double[0], 1, ae_v_len(0, nrows - 1));
      } else {
         smallerr = true;
         for (i = 0; i <= nrows - 1; i++) {
            ae_v_move(&ta.ptr.p_double[0], 1, &a->ptr.pp_double[i][0], 1, ae_v_len(0, ncols - 1));
            ta.ptr.p_double[ncols] = (double)(-1);
            ae_v_move(&tx.ptr.p_double[0], 1, &x->ptr.p_double[0], 1, ae_v_len(0, ncols - 1));
            tx.ptr.p_double[ncols] = b->ptr.p_double[i];
            xdot(&ta, &tx, ncols + 1, &buf, &v, &verr, _state);
            rp.ptr.p_double[i] = -v;
            smallerr = smallerr && ae_fp_less(ae_fabs(v, _state), 4 * verr);
         }
         if (smallerr) {
            terminatenexttime = true;
         }
      }

   // solve A*dx = rp
      for (i = 0; i <= ncols - 1; i++) {
         tmp.ptr.p_double[i] = (double)(0);
      }
      for (i = 0; i <= nsv - 1; i++) {
         utb.ptr.p_double[i] = (double)(0);
      }
      for (i = 0; i <= nrows - 1; i++) {
         v = rp.ptr.p_double[i];
         ae_v_addd(&utb.ptr.p_double[0], 1, &u.ptr.pp_double[i][0], 1, ae_v_len(0, nsv - 1), v);
      }
      for (i = 0; i <= nsv - 1; i++) {
         if (i < kernelidx) {
            sutb.ptr.p_double[i] = utb.ptr.p_double[i] / sv.ptr.p_double[i];
         } else {
            sutb.ptr.p_double[i] = (double)(0);
         }
      }
      for (i = 0; i <= nsv - 1; i++) {
         v = sutb.ptr.p_double[i];
         ae_v_addd(&tmp.ptr.p_double[0], 1, &vt.ptr.pp_double[i][0], 1, ae_v_len(0, ncols - 1), v);
      }

   // update x:  x:=x+dx
      ae_v_add(&x->ptr.p_double[0], 1, &tmp.ptr.p_double[0], 1, ae_v_len(0, ncols - 1));
   }

// fill CX
   if (rep->k > 0) {
      ae_matrix_set_length(&rep->cx, ncols, rep->k, _state);
      for (i = 0; i <= rep->k - 1; i++) {
         ae_v_move(&rep->cx.ptr.pp_double[0][i], rep->cx.stride, &vt.ptr.pp_double[kernelidx + i][0], 1, ae_v_len(0, ncols - 1));
      }
   }
   ae_frame_leave(_state);
}

// Internal LU solver
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_rmatrixlusolveinternal(RMatrix *lua, ZVector *p, ae_int_t n, RMatrix *a, bool havea, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;
   ae_int_t rfs;
   ae_int_t nrfs;
   ae_vector xc;
   ae_vector y;
   ae_vector bc;
   ae_vector xa;
   ae_vector xb;
   ae_vector tx;
   double v;
   double verr;
   double mxb;
   bool smallerr;
   bool terminatenexttime;

   ae_frame_make(_state, &_frame_block);
   memset(&xc, 0, sizeof(xc));
   memset(&y, 0, sizeof(y));
   memset(&bc, 0, sizeof(bc));
   memset(&xa, 0, sizeof(xa));
   memset(&xb, 0, sizeof(xb));
   memset(&tx, 0, sizeof(tx));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_vector_init(&xc, 0, DT_REAL, _state, true);
   ae_vector_init(&y, 0, DT_REAL, _state, true);
   ae_vector_init(&bc, 0, DT_REAL, _state, true);
   ae_vector_init(&xa, 0, DT_REAL, _state, true);
   ae_vector_init(&xb, 0, DT_REAL, _state, true);
   ae_vector_init(&tx, 0, DT_REAL, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] > n - 1 || p->ptr.p_int[i] < i) {
         *info = -1;
         ae_frame_leave(_state);
         return;
      }
   }
   ae_matrix_set_length(x, n, m, _state);
   ae_vector_set_length(&y, n, _state);
   ae_vector_set_length(&xc, n, _state);
   ae_vector_set_length(&bc, n, _state);
   ae_vector_set_length(&tx, n + 1, _state);
   ae_vector_set_length(&xa, n + 1, _state);
   ae_vector_set_length(&xb, n + 1, _state);

// estimate condition number, test for near singularity
   rep->r1 = rmatrixlurcond1(lua, n, _state);
   rep->rinf = rmatrixlurcondinf(lua, n, _state);
   if (ae_fp_less(rep->r1, rcondthreshold(_state)) || ae_fp_less(rep->rinf, rcondthreshold(_state))) {
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            x->ptr.pp_double[i][j] = (double)(0);
         }
      }
      rep->r1 = (double)(0);
      rep->rinf = (double)(0);
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   *info = 1;

// First stage of solution: rough solution with TRSM()
   mxb = 0.0;
   for (i = 0; i <= n - 1; i++) {
      for (j = 0; j <= m - 1; j++) {
         v = b->ptr.pp_double[i][j];
         mxb = ae_maxreal(mxb, ae_fabs(v, _state), _state);
         x->ptr.pp_double[i][j] = v;
      }
   }
   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] != i) {
         for (j = 0; j <= m - 1; j++) {
            v = x->ptr.pp_double[i][j];
            x->ptr.pp_double[i][j] = x->ptr.pp_double[p->ptr.p_int[i]][j];
            x->ptr.pp_double[p->ptr.p_int[i]][j] = v;
         }
      }
   }
   rmatrixlefttrsm(n, m, lua, 0, 0, false, true, 0, x, 0, 0, _state);
   rmatrixlefttrsm(n, m, lua, 0, 0, true, false, 0, x, 0, 0, _state);

// Second stage: iterative refinement
   if (havea) {
      for (k = 0; k <= m - 1; k++) {
         nrfs = directdensesolvers_densesolverrfsmax(n, rep->r1, rep->rinf, _state);
         terminatenexttime = false;
         for (rfs = 0; rfs <= nrfs - 1; rfs++) {
            if (terminatenexttime) {
               break;
            }
         // generate right part
            smallerr = true;
            ae_v_move(&xb.ptr.p_double[0], 1, &x->ptr.pp_double[0][k], x->stride, ae_v_len(0, n - 1));
            for (i = 0; i <= n - 1; i++) {
               ae_v_move(&xa.ptr.p_double[0], 1, &a->ptr.pp_double[i][0], 1, ae_v_len(0, n - 1));
               xa.ptr.p_double[n] = (double)(-1);
               xb.ptr.p_double[n] = b->ptr.pp_double[i][k];
               xdot(&xa, &xb, n + 1, &tx, &v, &verr, _state);
               y.ptr.p_double[i] = -v;
               smallerr = smallerr && ae_fp_less(ae_fabs(v, _state), 4 * verr);
            }
            if (smallerr) {
               terminatenexttime = true;
            }
         // solve and update
            directdensesolvers_rbasiclusolve(lua, p, n, &y, _state);
            ae_v_add(&x->ptr.pp_double[0][k], x->stride, &y.ptr.p_double[0], 1, ae_v_len(0, n - 1));
         }
      }
   }
   ae_frame_leave(_state);
}

// Internal Cholesky solver
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_spdmatrixcholeskysolveinternal(RMatrix *cha, ae_int_t n, bool isupper, RMatrix *a, bool havea, RMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, RMatrix *x, ae_state *_state) {
   ae_int_t i;
   ae_int_t j;

   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      return;
   }
   ae_matrix_set_length(x, n, m, _state);

// estimate condition number, test for near singularity
   rep->r1 = spdmatrixcholeskyrcond(cha, n, isupper, _state);
   rep->rinf = rep->r1;
   if (ae_fp_less(rep->r1, rcondthreshold(_state))) {
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            x->ptr.pp_double[i][j] = (double)(0);
         }
      }
      rep->r1 = (double)(0);
      rep->rinf = (double)(0);
      *info = -3;
      return;
   }
   *info = 1;

// Solve with TRSM()
   for (i = 0; i <= n - 1; i++) {
      for (j = 0; j <= m - 1; j++) {
         x->ptr.pp_double[i][j] = b->ptr.pp_double[i][j];
      }
   }
   if (isupper) {
      rmatrixlefttrsm(n, m, cha, 0, 0, true, false, 1, x, 0, 0, _state);
      rmatrixlefttrsm(n, m, cha, 0, 0, true, false, 0, x, 0, 0, _state);
   } else {
      rmatrixlefttrsm(n, m, cha, 0, 0, false, false, 0, x, 0, 0, _state);
      rmatrixlefttrsm(n, m, cha, 0, 0, false, false, 1, x, 0, 0, _state);
   }
}

// Internal LU solver
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_cmatrixlusolveinternal(CMatrix *lua, ZVector *p, ae_int_t n, CMatrix *a, bool havea, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t i;
   ae_int_t j;
   ae_int_t k;
   ae_int_t rfs;
   ae_int_t nrfs;
   ae_vector xc;
   ae_vector y;
   ae_vector bc;
   ae_vector xa;
   ae_vector xb;
   ae_vector tx;
   ae_vector tmpbuf;
   ae_complex v;
   double verr;
   bool smallerr;
   bool terminatenexttime;

   ae_frame_make(_state, &_frame_block);
   memset(&xc, 0, sizeof(xc));
   memset(&y, 0, sizeof(y));
   memset(&bc, 0, sizeof(bc));
   memset(&xa, 0, sizeof(xa));
   memset(&xb, 0, sizeof(xb));
   memset(&tx, 0, sizeof(tx));
   memset(&tmpbuf, 0, sizeof(tmpbuf));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_vector_init(&xc, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&y, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&bc, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&xa, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&xb, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&tx, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&tmpbuf, 0, DT_REAL, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] > n - 1 || p->ptr.p_int[i] < i) {
         *info = -1;
         ae_frame_leave(_state);
         return;
      }
   }
   ae_matrix_set_length(x, n, m, _state);
   ae_vector_set_length(&y, n, _state);
   ae_vector_set_length(&xc, n, _state);
   ae_vector_set_length(&bc, n, _state);
   ae_vector_set_length(&tx, n, _state);
   ae_vector_set_length(&xa, n + 1, _state);
   ae_vector_set_length(&xb, n + 1, _state);
   ae_vector_set_length(&tmpbuf, 2 * n + 2, _state);

// estimate condition number, test for near singularity
   rep->r1 = cmatrixlurcond1(lua, n, _state);
   rep->rinf = cmatrixlurcondinf(lua, n, _state);
   if (ae_fp_less(rep->r1, rcondthreshold(_state)) || ae_fp_less(rep->rinf, rcondthreshold(_state))) {
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            x->ptr.pp_complex[i][j] = ae_complex_from_i(0);
         }
      }
      rep->r1 = (double)(0);
      rep->rinf = (double)(0);
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   *info = 1;

// First phase: solve with TRSM()
   for (i = 0; i <= n - 1; i++) {
      for (j = 0; j <= m - 1; j++) {
         x->ptr.pp_complex[i][j] = b->ptr.pp_complex[i][j];
      }
   }
   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] != i) {
         for (j = 0; j <= m - 1; j++) {
            v = x->ptr.pp_complex[i][j];
            x->ptr.pp_complex[i][j] = x->ptr.pp_complex[p->ptr.p_int[i]][j];
            x->ptr.pp_complex[p->ptr.p_int[i]][j] = v;
         }
      }
   }
   cmatrixlefttrsm(n, m, lua, 0, 0, false, true, 0, x, 0, 0, _state);
   cmatrixlefttrsm(n, m, lua, 0, 0, true, false, 0, x, 0, 0, _state);

// solve
   for (k = 0; k <= m - 1; k++) {
      ae_v_cmove(&bc.ptr.p_complex[0], 1, &b->ptr.pp_complex[0][k], b->stride, "N", ae_v_len(0, n - 1));
      ae_v_cmove(&xc.ptr.p_complex[0], 1, &x->ptr.pp_complex[0][k], x->stride, "N", ae_v_len(0, n - 1));

   // Iterative refinement of xc:
   // * calculate r = bc-A*xc using extra-precise dot product
   // * solve A*y = r
   // * update x:=x+r
   //
   // This cycle is executed until one of two things happens:
   // 1. maximum number of iterations reached
   // 2. last iteration decreased error to the lower limit
      if (havea) {
         nrfs = directdensesolvers_densesolverrfsmax(n, rep->r1, rep->rinf, _state);
         terminatenexttime = false;
         for (rfs = 0; rfs <= nrfs - 1; rfs++) {
            if (terminatenexttime) {
               break;
            }
         // generate right part
            smallerr = true;
            ae_v_cmove(&xb.ptr.p_complex[0], 1, &xc.ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
            for (i = 0; i <= n - 1; i++) {
               ae_v_cmove(&xa.ptr.p_complex[0], 1, &a->ptr.pp_complex[i][0], 1, "N", ae_v_len(0, n - 1));
               xa.ptr.p_complex[n] = ae_complex_from_i(-1);
               xb.ptr.p_complex[n] = bc.ptr.p_complex[i];
               xcdot(&xa, &xb, n + 1, &tmpbuf, &v, &verr, _state);
               y.ptr.p_complex[i] = ae_c_neg(v);
               smallerr = smallerr && ae_fp_less(ae_c_abs(v, _state), 4 * verr);
            }
            if (smallerr) {
               terminatenexttime = true;
            }
         // solve and update
            directdensesolvers_cbasiclusolve(lua, p, n, &y, _state);
            ae_v_cadd(&xc.ptr.p_complex[0], 1, &y.ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
         }
      }
   // Store xc.
   // Post-scale result.
      ae_v_cmove(&x->ptr.pp_complex[0][k], x->stride, &xc.ptr.p_complex[0], 1, "N", ae_v_len(0, n - 1));
   }
   ae_frame_leave(_state);
}

// Internal Cholesky solver
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_hpdmatrixcholeskysolveinternal(CMatrix *cha, ae_int_t n, bool isupper, CMatrix *a, bool havea, CMatrix *b, ae_int_t m, ae_int_t *info, densesolverreport *rep, CMatrix *x, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t i;
   ae_int_t j;
   ae_vector xc;
   ae_vector y;
   ae_vector bc;
   ae_vector xa;
   ae_vector xb;
   ae_vector tx;

   ae_frame_make(_state, &_frame_block);
   memset(&xc, 0, sizeof(xc));
   memset(&y, 0, sizeof(y));
   memset(&bc, 0, sizeof(bc));
   memset(&xa, 0, sizeof(xa));
   memset(&xb, 0, sizeof(xb));
   memset(&tx, 0, sizeof(tx));
   *info = 0;
   _densesolverreport_clear(rep);
   ae_matrix_clear(x);
   ae_vector_init(&xc, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&y, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&bc, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&xa, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&xb, 0, DT_COMPLEX, _state, true);
   ae_vector_init(&tx, 0, DT_COMPLEX, _state, true);

// prepare: check inputs, allocate space...
   if (n <= 0 || m <= 0) {
      *info = -1;
      ae_frame_leave(_state);
      return;
   }
   ae_matrix_set_length(x, n, m, _state);
   ae_vector_set_length(&y, n, _state);
   ae_vector_set_length(&xc, n, _state);
   ae_vector_set_length(&bc, n, _state);
   ae_vector_set_length(&tx, n + 1, _state);
   ae_vector_set_length(&xa, n + 1, _state);
   ae_vector_set_length(&xb, n + 1, _state);

// estimate condition number, test for near singularity
   rep->r1 = hpdmatrixcholeskyrcond(cha, n, isupper, _state);
   rep->rinf = rep->r1;
   if (ae_fp_less(rep->r1, rcondthreshold(_state))) {
      for (i = 0; i <= n - 1; i++) {
         for (j = 0; j <= m - 1; j++) {
            x->ptr.pp_complex[i][j] = ae_complex_from_i(0);
         }
      }
      rep->r1 = (double)(0);
      rep->rinf = (double)(0);
      *info = -3;
      ae_frame_leave(_state);
      return;
   }
   *info = 1;

// solve
   for (i = 0; i <= n - 1; i++) {
      for (j = 0; j <= m - 1; j++) {
         x->ptr.pp_complex[i][j] = b->ptr.pp_complex[i][j];
      }
   }
   if (isupper) {
      cmatrixlefttrsm(n, m, cha, 0, 0, true, false, 2, x, 0, 0, _state);
      cmatrixlefttrsm(n, m, cha, 0, 0, true, false, 0, x, 0, 0, _state);
   } else {
      cmatrixlefttrsm(n, m, cha, 0, 0, false, false, 0, x, 0, 0, _state);
      cmatrixlefttrsm(n, m, cha, 0, 0, false, false, 2, x, 0, 0, _state);
   }
   ae_frame_leave(_state);
}

// Internal subroutine.
// Returns maximum count of RFS iterations as function of:
// 1. machine epsilon
// 2. task size.
// 3. condition number
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static ae_int_t directdensesolvers_densesolverrfsmax(ae_int_t n, double r1, double rinf, ae_state *_state) {
   ae_int_t result;

   result = 5;
   return result;
}

// Internal subroutine.
// Returns maximum count of RFS iterations as function of:
// 1. machine epsilon
// 2. task size.
// 3. norm-2 condition number
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static ae_int_t directdensesolvers_densesolverrfsmaxv2(ae_int_t n, double r2, ae_state *_state) {
   ae_int_t result;

   result = directdensesolvers_densesolverrfsmax(n, (double)(0), (double)(0), _state);
   return result;
}

// Basic LU solver for PLU*x = y.
//
// This subroutine assumes that:
// * A=PLU is well-conditioned, so no zero divisions or overflow may occur
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_rbasiclusolve(RMatrix *lua, ZVector *p, ae_int_t n, RVector *xb, ae_state *_state) {
   ae_int_t i;
   double v;

   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] != i) {
         v = xb->ptr.p_double[i];
         xb->ptr.p_double[i] = xb->ptr.p_double[p->ptr.p_int[i]];
         xb->ptr.p_double[p->ptr.p_int[i]] = v;
      }
   }
   for (i = 1; i <= n - 1; i++) {
      v = ae_v_dotproduct(&lua->ptr.pp_double[i][0], 1, &xb->ptr.p_double[0], 1, ae_v_len(0, i - 1));
      xb->ptr.p_double[i] = xb->ptr.p_double[i] - v;
   }
   xb->ptr.p_double[n - 1] = xb->ptr.p_double[n - 1] / lua->ptr.pp_double[n - 1][n - 1];
   for (i = n - 2; i >= 0; i--) {
      v = ae_v_dotproduct(&lua->ptr.pp_double[i][i + 1], 1, &xb->ptr.p_double[i + 1], 1, ae_v_len(i + 1, n - 1));
      xb->ptr.p_double[i] = (xb->ptr.p_double[i] - v) / lua->ptr.pp_double[i][i];
   }
}

// Basic Cholesky solver for ScaleA*Cholesky(A)'*x = y.
//
// This subroutine assumes that:
// * A*ScaleA is well scaled
// * A is well-conditioned, so no zero divisions or overflow may occur
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_spdbasiccholeskysolve(RMatrix *cha, ae_int_t n, bool isupper, RVector *xb, ae_state *_state) {
   ae_int_t i;
   double v;

// A = L*L' or A=U'*U
   if (isupper) {

   // Solve U'*y=b first.
      for (i = 0; i <= n - 1; i++) {
         xb->ptr.p_double[i] = xb->ptr.p_double[i] / cha->ptr.pp_double[i][i];
         if (i < n - 1) {
            v = xb->ptr.p_double[i];
            ae_v_subd(&xb->ptr.p_double[i + 1], 1, &cha->ptr.pp_double[i][i + 1], 1, ae_v_len(i + 1, n - 1), v);
         }
      }

   // Solve U*x=y then.
      for (i = n - 1; i >= 0; i--) {
         if (i < n - 1) {
            v = ae_v_dotproduct(&cha->ptr.pp_double[i][i + 1], 1, &xb->ptr.p_double[i + 1], 1, ae_v_len(i + 1, n - 1));
            xb->ptr.p_double[i] = xb->ptr.p_double[i] - v;
         }
         xb->ptr.p_double[i] = xb->ptr.p_double[i] / cha->ptr.pp_double[i][i];
      }
   } else {

   // Solve L*y=b first
      for (i = 0; i <= n - 1; i++) {
         if (i > 0) {
            v = ae_v_dotproduct(&cha->ptr.pp_double[i][0], 1, &xb->ptr.p_double[0], 1, ae_v_len(0, i - 1));
            xb->ptr.p_double[i] = xb->ptr.p_double[i] - v;
         }
         xb->ptr.p_double[i] = xb->ptr.p_double[i] / cha->ptr.pp_double[i][i];
      }

   // Solve L'*x=y then.
      for (i = n - 1; i >= 0; i--) {
         xb->ptr.p_double[i] = xb->ptr.p_double[i] / cha->ptr.pp_double[i][i];
         if (i > 0) {
            v = xb->ptr.p_double[i];
            ae_v_subd(&xb->ptr.p_double[0], 1, &cha->ptr.pp_double[i][0], 1, ae_v_len(0, i - 1), v);
         }
      }
   }
}

// Basic LU solver for ScaleA*PLU*x = y.
//
// This subroutine assumes that:
// * L is well-scaled, and it is U which needs scaling by ScaleA.
// * A=PLU is well-conditioned, so no zero divisions or overflow may occur
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_cbasiclusolve(CMatrix *lua, ZVector *p, ae_int_t n, CVector *xb, ae_state *_state) {
   ae_int_t i;
   ae_complex v;

   for (i = 0; i <= n - 1; i++) {
      if (p->ptr.p_int[i] != i) {
         v = xb->ptr.p_complex[i];
         xb->ptr.p_complex[i] = xb->ptr.p_complex[p->ptr.p_int[i]];
         xb->ptr.p_complex[p->ptr.p_int[i]] = v;
      }
   }
   for (i = 1; i <= n - 1; i++) {
      v = ae_v_cdotproduct(&lua->ptr.pp_complex[i][0], 1, "N", &xb->ptr.p_complex[0], 1, "N", ae_v_len(0, i - 1));
      xb->ptr.p_complex[i] = ae_c_sub(xb->ptr.p_complex[i], v);
   }
   xb->ptr.p_complex[n - 1] = ae_c_div(xb->ptr.p_complex[n - 1], lua->ptr.pp_complex[n - 1][n - 1]);
   for (i = n - 2; i >= 0; i--) {
      v = ae_v_cdotproduct(&lua->ptr.pp_complex[i][i + 1], 1, "N", &xb->ptr.p_complex[i + 1], 1, "N", ae_v_len(i + 1, n - 1));
      xb->ptr.p_complex[i] = ae_c_div(ae_c_sub(xb->ptr.p_complex[i], v), lua->ptr.pp_complex[i][i]);
   }
}

// Basic Cholesky solver for ScaleA*Cholesky(A)'*x = y.
//
// This subroutine assumes that:
// * A*ScaleA is well scaled
// * A is well-conditioned, so no zero divisions or overflow may occur
// ALGLIB: Copyright 27.01.2010 by Sergey Bochkanov
static void directdensesolvers_hpdbasiccholeskysolve(CMatrix *cha, ae_int_t n, bool isupper, CVector *xb, ae_state *_state) {
   ae_int_t i;
   ae_complex v;

// A = L*L' or A=U'*U
   if (isupper) {

   // Solve U'*y=b first.
      for (i = 0; i <= n - 1; i++) {
         xb->ptr.p_complex[i] = ae_c_div(xb->ptr.p_complex[i], ae_c_conj(cha->ptr.pp_complex[i][i], _state));
         if (i < n - 1) {
            v = xb->ptr.p_complex[i];
            ae_v_csubc(&xb->ptr.p_complex[i + 1], 1, &cha->ptr.pp_complex[i][i + 1], 1, "Conj", ae_v_len(i + 1, n - 1), v);
         }
      }

   // Solve U*x=y then.
      for (i = n - 1; i >= 0; i--) {
         if (i < n - 1) {
            v = ae_v_cdotproduct(&cha->ptr.pp_complex[i][i + 1], 1, "N", &xb->ptr.p_complex[i + 1], 1, "N", ae_v_len(i + 1, n - 1));
            xb->ptr.p_complex[i] = ae_c_sub(xb->ptr.p_complex[i], v);
         }
         xb->ptr.p_complex[i] = ae_c_div(xb->ptr.p_complex[i], cha->ptr.pp_complex[i][i]);
      }
   } else {

   // Solve L*y=b first
      for (i = 0; i <= n - 1; i++) {
         if (i > 0) {
            v = ae_v_cdotproduct(&cha->ptr.pp_complex[i][0], 1, "N", &xb->ptr.p_complex[0], 1, "N", ae_v_len(0, i - 1));
            xb->ptr.p_complex[i] = ae_c_sub(xb->ptr.p_complex[i], v);
         }
         xb->ptr.p_complex[i] = ae_c_div(xb->ptr.p_complex[i], cha->ptr.pp_complex[i][i]);
      }

   // Solve L'*x=y then.
      for (i = n - 1; i >= 0; i--) {
         xb->ptr.p_complex[i] = ae_c_div(xb->ptr.p_complex[i], ae_c_conj(cha->ptr.pp_complex[i][i], _state));
         if (i > 0) {
            v = xb->ptr.p_complex[i];
            ae_v_csubc(&xb->ptr.p_complex[0], 1, &cha->ptr.pp_complex[i][0], 1, "Conj", ae_v_len(0, i - 1), v);
         }
      }
   }
}

void _densesolverreport_init(void *_p, ae_state *_state, bool make_automatic) {
   densesolverreport *p = (densesolverreport *) _p;
   ae_touch_ptr((void *)p);
}

void _densesolverreport_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   densesolverreport *dst = (densesolverreport *) _dst;
   densesolverreport *src = (densesolverreport *) _src;
   dst->r1 = src->r1;
   dst->rinf = src->rinf;
}

void _densesolverreport_clear(void *_p) {
   densesolverreport *p = (densesolverreport *) _p;
   ae_touch_ptr((void *)p);
}

void _densesolverreport_destroy(void *_p) {
   densesolverreport *p = (densesolverreport *) _p;
   ae_touch_ptr((void *)p);
}

void _densesolverlsreport_init(void *_p, ae_state *_state, bool make_automatic) {
   densesolverlsreport *p = (densesolverlsreport *) _p;
   ae_touch_ptr((void *)p);
   ae_matrix_init(&p->cx, 0, 0, DT_REAL, _state, make_automatic);
}

void _densesolverlsreport_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   densesolverlsreport *dst = (densesolverlsreport *) _dst;
   densesolverlsreport *src = (densesolverlsreport *) _src;
   dst->r2 = src->r2;
   ae_matrix_init_copy(&dst->cx, &src->cx, _state, make_automatic);
   dst->n = src->n;
   dst->k = src->k;
}

void _densesolverlsreport_clear(void *_p) {
   densesolverlsreport *p = (densesolverlsreport *) _p;
   ae_touch_ptr((void *)p);
   ae_matrix_clear(&p->cx);
}

void _densesolverlsreport_destroy(void *_p) {
   densesolverlsreport *p = (densesolverlsreport *) _p;
   ae_touch_ptr((void *)p);
   ae_matrix_destroy(&p->cx);
}

// === DIRECTSPARSESOLVERS Package ===
// Sparse linear solver for A*x=b with N*N  sparse  real  symmetric  positive
// definite matrix A, N*1 vectors x and b.
//
// This solver  converts  input  matrix  to  SKS  format,  performs  Cholesky
// factorization using  SKS  Cholesky  subroutine  (works  well  for  limited
// bandwidth matrices) and uses sparse triangular solvers to get solution  of
// the original system.
//
// INPUT PARAMETERS
//     A       -   sparse matrix, must be NxN exactly
//     IsUpper -   which half of A is provided (another half is ignored)
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     X       -   array[N], it contains:
//                 * rep.terminationtype>0    =>  solution
//                 * rep.terminationtype=-3   =>  filled by zeros
//     Rep     -   solver report, following fields are set:
//                 * rep.terminationtype - solver status; >0 for success,
//                   set to -3 on failure (degenerate or non-SPD system).
// ALGLIB: Copyright 26.12.2017 by Sergey Bochkanov
// API: void sparsespdsolvesks(const sparsematrix &a, const bool isupper, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsespdsolvesks(sparsematrix *a, bool isupper, RVector *b, RVector *x, sparsesolverreport *rep, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t i;
   sparsematrix a2;
   ae_int_t n;

   ae_frame_make(_state, &_frame_block);
   memset(&a2, 0, sizeof(a2));
   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);
   _sparsematrix_init(&a2, _state, true);

   n = sparsegetnrows(a, _state);
   ae_assert(n > 0, "SparseSPDSolveSKS: N<=0", _state);
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSPDSolveSKS: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSPDSolveSKS: cols(A)!=N", _state);
   ae_assert(b->cnt >= n, "SparseSPDSolveSKS: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSPDSolveSKS: B contains infinities or NANs", _state);
   initsparsesolverreport(rep, _state);
   ae_vector_set_length(x, n, _state);
   sparsecopytosks(a, &a2, _state);
   if (!sparsecholeskyskyline(&a2, n, isupper, _state)) {
      rep->terminationtype = -3;
      for (i = 0; i <= n - 1; i++) {
         x->ptr.p_double[i] = (double)(0);
      }
      ae_frame_leave(_state);
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      x->ptr.p_double[i] = b->ptr.p_double[i];
   }
   if (isupper) {
      sparsetrsv(&a2, isupper, false, 1, x, _state);
      sparsetrsv(&a2, isupper, false, 0, x, _state);
   } else {
      sparsetrsv(&a2, isupper, false, 0, x, _state);
      sparsetrsv(&a2, isupper, false, 1, x, _state);
   }
   rep->terminationtype = 1;
   ae_frame_leave(_state);
}

// Sparse linear solver for A*x=b with N*N  sparse  real  symmetric  positive
// definite matrix A, N*1 vectors x and b.
//
// This solver  converts  input  matrix  to  CRS  format,  performs  Cholesky
// factorization using supernodal Cholesky  decomposition  with  permutation-
// reducing ordering and uses sparse triangular solver to get solution of the
// original system.
//
// INPUT PARAMETERS
//     A       -   sparse matrix, must be NxN exactly
//     IsUpper -   which half of A is provided (another half is ignored)
//     B       -   array[N], right part
//
// OUTPUT PARAMETERS
//     X       -   array[N], it contains:
//                 * rep.terminationtype>0    =>  solution
//                 * rep.terminationtype=-3   =>  filled by zeros
//     Rep     -   solver report, following fields are set:
//                 * rep.terminationtype - solver status; >0 for success,
//                   set to -3 on failure (degenerate or non-SPD system).
// ALGLIB: Copyright 26.12.2017 by Sergey Bochkanov
// API: void sparsespdsolve(const sparsematrix &a, const bool isupper, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsespdsolve(sparsematrix *a, bool isupper, RVector *b, RVector *x, sparsesolverreport *rep, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t i;
   ae_int_t j;
   sparsematrix a2;
   ae_int_t n;
   double v;
   ae_vector p;

   ae_frame_make(_state, &_frame_block);
   memset(&a2, 0, sizeof(a2));
   memset(&p, 0, sizeof(p));
   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);
   _sparsematrix_init(&a2, _state, true);
   ae_vector_init(&p, 0, DT_INT, _state, true);

   n = sparsegetnrows(a, _state);
   ae_assert(n > 0, "SparseSPDSolve: N<=0", _state);
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSPDSolve: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSPDSolve: cols(A)!=N", _state);
   ae_assert(b->cnt >= n, "SparseSPDSolve: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSPDSolve: B contains infinities or NANs", _state);
   initsparsesolverreport(rep, _state);
   sparsecopytocrs(a, &a2, _state);
   if (!sparsecholeskyp(&a2, isupper, &p, _state)) {
      rep->terminationtype = -3;
      rsetallocv(n, 0.0, x, _state);
      ae_frame_leave(_state);
      return;
   }
   rcopyallocv(n, b, x, _state);
   for (i = 0; i <= n - 1; i++) {
      j = p.ptr.p_int[i];
      v = x->ptr.p_double[i];
      x->ptr.p_double[i] = x->ptr.p_double[j];
      x->ptr.p_double[j] = v;
   }
   if (isupper) {
      sparsetrsv(&a2, isupper, false, 1, x, _state);
      sparsetrsv(&a2, isupper, false, 0, x, _state);
   } else {
      sparsetrsv(&a2, isupper, false, 0, x, _state);
      sparsetrsv(&a2, isupper, false, 1, x, _state);
   }
   for (i = n - 1; i >= 0; i--) {
      j = p.ptr.p_int[i];
      v = x->ptr.p_double[i];
      x->ptr.p_double[i] = x->ptr.p_double[j];
      x->ptr.p_double[j] = v;
   }
   rep->terminationtype = 1;
   ae_frame_leave(_state);
}

// Sparse linear solver for A*x=b with N*N real  symmetric  positive definite
// matrix A given by its Cholesky decomposition, and N*1 vectors x and b.
//
// IMPORTANT: this solver requires input matrix to be in  the  SKS  (Skyline)
//            or CRS (compressed row storage) format. An  exception  will  be
//            generated if you pass matrix in some other format.
//
// INPUT PARAMETERS
//     A       -   sparse NxN matrix stored in CRs or SKS format, must be NxN
//                 exactly
//     IsUpper -   which half of A is provided (another half is ignored)
//     B       -   array[N], right part
//
// OUTPUT PARAMETERS
//     X       -   array[N], it contains:
//                 * rep.terminationtype>0    =>  solution
//                 * rep.terminationtype=-3   =>  filled by zeros
//     Rep     -   solver report, following fields are set:
//                 * rep.terminationtype - solver status; >0 for success,
//                   set to -3 on failure (degenerate or non-SPD system).
// ALGLIB: Copyright 26.12.2017 by Sergey Bochkanov
// API: void sparsespdcholeskysolve(const sparsematrix &a, const bool isupper, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsespdcholeskysolve(sparsematrix *a, bool isupper, RVector *b, RVector *x, sparsesolverreport *rep, ae_state *_state) {
   ae_int_t i;
   ae_int_t n;

   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);

   n = sparsegetnrows(a, _state);
   ae_assert(n > 0, "SparseSPDCholeskySolve: N<=0", _state);
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSPDCholeskySolve: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSPDCholeskySolve: cols(A)!=N", _state);
   ae_assert(sparseissks(a, _state) || sparseiscrs(a, _state), "SparseSPDCholeskySolve: A is not an SKS/CRS matrix", _state);
   ae_assert(b->cnt >= n, "SparseSPDCholeskySolve: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSPDCholeskySolve: B contains infinities or NANs", _state);
   initsparsesolverreport(rep, _state);
   ae_vector_set_length(x, n, _state);
   for (i = 0; i <= n - 1; i++) {
      if (ae_fp_eq(sparseget(a, i, i, _state), 0.0)) {
         rep->terminationtype = -3;
         for (i = 0; i <= n - 1; i++) {
            x->ptr.p_double[i] = (double)(0);
         }
         return;
      }
   }
   for (i = 0; i <= n - 1; i++) {
      x->ptr.p_double[i] = b->ptr.p_double[i];
   }
   if (isupper) {
      sparsetrsv(a, isupper, false, 1, x, _state);
      sparsetrsv(a, isupper, false, 0, x, _state);
   } else {
      sparsetrsv(a, isupper, false, 0, x, _state);
      sparsetrsv(a, isupper, false, 1, x, _state);
   }
   rep->terminationtype = 1;
}

// Sparse linear solver for A*x=b with general (nonsymmetric) N*N sparse real
// matrix A, N*1 vectors x and b.
//
// This solver converts input matrix to CRS format, performs LU factorization
// and uses sparse triangular solvers to get solution of the original system.
//
// INPUT PARAMETERS
//     A       -   sparse matrix, must be NxN exactly, any storage format
//     N       -   size of A, N>0
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     X       -   array[N], it contains:
//                 * rep.terminationtype>0    =>  solution
//                 * rep.terminationtype=-3   =>  filled by zeros
//     Rep     -   solver report, following fields are set:
//                 * rep.terminationtype - solver status; >0 for success,
//                   set to -3 on failure (degenerate system).
// ALGLIB: Copyright 26.12.2017 by Sergey Bochkanov
// API: void sparsesolve(const sparsematrix &a, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsesolve(sparsematrix *a, RVector *b, RVector *x, sparsesolverreport *rep, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t i;
   ae_int_t j;
   ae_int_t n;
   double v;
   sparsematrix a2;
   ae_vector pivp;
   ae_vector pivq;

   ae_frame_make(_state, &_frame_block);
   memset(&a2, 0, sizeof(a2));
   memset(&pivp, 0, sizeof(pivp));
   memset(&pivq, 0, sizeof(pivq));
   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);
   _sparsematrix_init(&a2, _state, true);
   ae_vector_init(&pivp, 0, DT_INT, _state, true);
   ae_vector_init(&pivq, 0, DT_INT, _state, true);

   n = sparsegetnrows(a, _state);
   ae_assert(n > 0, "SparseSolve: N<=0", _state);
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSolve: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSolve: cols(A)!=N", _state);
   ae_assert(b->cnt >= n, "SparseSolve: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSolve: B contains infinities or NANs", _state);
   initsparsesolverreport(rep, _state);
   ae_vector_set_length(x, n, _state);
   sparsecopytocrs(a, &a2, _state);
   if (!sparselu(&a2, 0, &pivp, &pivq, _state)) {
      rep->terminationtype = -3;
      for (i = 0; i <= n - 1; i++) {
         x->ptr.p_double[i] = (double)(0);
      }
      ae_frame_leave(_state);
      return;
   }
   for (i = 0; i <= n - 1; i++) {
      x->ptr.p_double[i] = b->ptr.p_double[i];
   }
   for (i = 0; i <= n - 1; i++) {
      j = pivp.ptr.p_int[i];
      v = x->ptr.p_double[i];
      x->ptr.p_double[i] = x->ptr.p_double[j];
      x->ptr.p_double[j] = v;
   }
   sparsetrsv(&a2, false, true, 0, x, _state);
   sparsetrsv(&a2, true, false, 0, x, _state);
   for (i = n - 1; i >= 0; i--) {
      j = pivq.ptr.p_int[i];
      v = x->ptr.p_double[i];
      x->ptr.p_double[i] = x->ptr.p_double[j];
      x->ptr.p_double[j] = v;
   }
   rep->terminationtype = 1;
   ae_frame_leave(_state);
}

// Sparse linear solver for A*x=b with general (nonsymmetric) N*N sparse real
// matrix A given by its LU factorization, N*1 vectors x and b.
//
// IMPORTANT: this solver requires input matrix  to  be  in  the  CRS  sparse
//            storage format. An exception will  be  generated  if  you  pass
//            matrix in some other format (HASH or SKS).
//
// INPUT PARAMETERS
//     A       -   LU factorization of the sparse matrix, must be NxN exactly
//                 in CRS storage format
//     P, Q    -   pivot indexes from LU factorization
//     N       -   size of A, N>0
//     B       -   array[0..N-1], right part
//
// OUTPUT PARAMETERS
//     X       -   array[N], it contains:
//                 * rep.terminationtype>0    =>  solution
//                 * rep.terminationtype=-3   =>  filled by zeros
//     Rep     -   solver report, following fields are set:
//                 * rep.terminationtype - solver status; >0 for success,
//                   set to -3 on failure (degenerate system).
// ALGLIB: Copyright 26.12.2017 by Sergey Bochkanov
// API: void sparselusolve(const sparsematrix &a, const integer_1d_array &p, const integer_1d_array &q, const real_1d_array &b, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparselusolve(sparsematrix *a, ZVector *p, ZVector *q, RVector *b, RVector *x, sparsesolverreport *rep, ae_state *_state) {
   ae_int_t i;
   ae_int_t j;
   double v;
   ae_int_t n;

   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);

   n = sparsegetnrows(a, _state);
   ae_assert(n > 0, "SparseLUSolve: N<=0", _state);
   ae_assert(sparsegetnrows(a, _state) == n, "SparseLUSolve: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseLUSolve: cols(A)!=N", _state);
   ae_assert(sparseiscrs(a, _state), "SparseLUSolve: A is not an SKS matrix", _state);
   ae_assert(b->cnt >= n, "SparseLUSolve: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseLUSolve: B contains infinities or NANs", _state);
   ae_assert(p->cnt >= n, "SparseLUSolve: length(P)<N", _state);
   ae_assert(q->cnt >= n, "SparseLUSolve: length(Q)<N", _state);
   for (i = 0; i <= n - 1; i++) {
      ae_assert(p->ptr.p_int[i] >= i && p->ptr.p_int[i] < n, "SparseLUSolve: P is corrupted", _state);
      ae_assert(q->ptr.p_int[i] >= i && q->ptr.p_int[i] < n, "SparseLUSolve: Q is corrupted", _state);
   }
   initsparsesolverreport(rep, _state);
   ae_vector_set_length(x, n, _state);
   for (i = 0; i <= n - 1; i++) {
      if (a->didx.ptr.p_int[i] == a->uidx.ptr.p_int[i] || a->vals.ptr.p_double[a->didx.ptr.p_int[i]] == 0.0) {
         rep->terminationtype = -3;
         for (i = 0; i <= n - 1; i++) {
            x->ptr.p_double[i] = (double)(0);
         }
         return;
      }
   }
   for (i = 0; i <= n - 1; i++) {
      x->ptr.p_double[i] = b->ptr.p_double[i];
   }
   for (i = 0; i <= n - 1; i++) {
      j = p->ptr.p_int[i];
      v = x->ptr.p_double[i];
      x->ptr.p_double[i] = x->ptr.p_double[j];
      x->ptr.p_double[j] = v;
   }
   sparsetrsv(a, false, true, 0, x, _state);
   sparsetrsv(a, true, false, 0, x, _state);
   for (i = n - 1; i >= 0; i--) {
      j = q->ptr.p_int[i];
      v = x->ptr.p_double[i];
      x->ptr.p_double[i] = x->ptr.p_double[j];
      x->ptr.p_double[j] = v;
   }
   rep->terminationtype = 1;
}

// Reset report fields
// ALGLIB: Copyright 26.12.2017 by Sergey Bochkanov
void initsparsesolverreport(sparsesolverreport *rep, ae_state *_state) {

   rep->terminationtype = 0;
   rep->nmv = 0;
   rep->iterationscount = 0;
   rep->r2 = (double)(0);
}

void _sparsesolverreport_init(void *_p, ae_state *_state, bool make_automatic) {
   sparsesolverreport *p = (sparsesolverreport *) _p;
   ae_touch_ptr((void *)p);
}

void _sparsesolverreport_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   sparsesolverreport *dst = (sparsesolverreport *) _dst;
   sparsesolverreport *src = (sparsesolverreport *) _src;
   dst->terminationtype = src->terminationtype;
   dst->nmv = src->nmv;
   dst->iterationscount = src->iterationscount;
   dst->r2 = src->r2;
}

void _sparsesolverreport_clear(void *_p) {
   sparsesolverreport *p = (sparsesolverreport *) _p;
   ae_touch_ptr((void *)p);
}

void _sparsesolverreport_destroy(void *_p) {
   sparsesolverreport *p = (sparsesolverreport *) _p;
   ae_touch_ptr((void *)p);
}

// === ITERATIVESPARSE Package ===
// Solving sparse symmetric linear system A*x=b using GMRES(k) method. Sparse
// symmetric A is given by its lower or upper triangle.
//
// NOTE: use SparseSolveGMRES() to solve system with nonsymmetric A.
//
// This function provides convenience API for an 'expert' interface  provided
// by SparseSolverState class. Use SparseSolver  API  if  you  need  advanced
// functions like providing initial point, using out-of-core API and so on.
//
// INPUT PARAMETERS:
//     A       -   sparse symmetric NxN matrix in any sparse storage  format.
//                 Using CRS format is recommended because it avoids internal
//                 conversion.
//                 An exception will be generated if  A  is  not  NxN  matrix
//                 (where  N  is  a  size   specified  during  solver  object
//                 creation).
//     IsUpper -   whether upper or lower triangle of A is used:
//                 * IsUpper=True  => only upper triangle is used and lower
//                                    triangle is not referenced at all
//                 * IsUpper=False => only lower triangle is used and upper
//                                    triangle is not referenced at all
//     B       -   right part, array[N]
//     K       -   k parameter for  GMRES(k), k>=0.  Zero  value  means  that
//                 algorithm will choose it automatically.
//     EpsF    -   stopping condition, EpsF>=0. The algorithm will stop  when
//                 residual will decrease below EpsF*|B|. Having EpsF=0 means
//                 that this stopping condition is ignored.
//     MaxIts  -   stopping condition, MaxIts>=0.  The  algorithm  will  stop
//                 after performing MaxIts iterations. Zero  value  means  no
//                 limit.
//
// NOTE: having both EpsF=0 and MaxIts=0 means that stopping criteria will be
//       chosen automatically.
//
// OUTPUT PARAMETERS:
//     X       -   array[N], the solution
//     Rep     -   solution report:
//                 * Rep.TerminationType completion code:
//                     * -5    CG method was used for a matrix which  is  not
//                             positive definite
//                     * -4    overflow/underflow during solution
//                             (ill conditioned problem)
//                     *  1    ||residual||<=EpsF*||b||
//                     *  5    MaxIts steps was taken
//                     *  7    rounding errors prevent further progress,
//                             best point found is returned
//                     *  8    the  algorithm  was  terminated   early  with
//                             SparseSolverRequestTermination() being called
//                             from other thread.
//                 * Rep.IterationsCount contains iterations count
//                 * Rep.NMV contains number of matrix-vector calculations
//                 * Rep.R2 contains squared residual
// ALGLIB: Copyright 25.09.2021 by Sergey Bochkanov
// API: void sparsesolvesymmetricgmres(const sparsematrix &a, const bool isupper, const real_1d_array &b, const ae_int_t k, const double epsf, const ae_int_t maxits, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsesolvesymmetricgmres(sparsematrix *a, bool isupper, RVector *b, ae_int_t k, double epsf, ae_int_t maxits, RVector *x, sparsesolverreport *rep, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t n;
   sparsematrix convbuf;
   sparsesolverstate solver;

   ae_frame_make(_state, &_frame_block);
   memset(&convbuf, 0, sizeof(convbuf));
   memset(&solver, 0, sizeof(solver));
   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);
   _sparsematrix_init(&convbuf, _state, true);
   _sparsesolverstate_init(&solver, _state, true);

   n = sparsegetnrows(a, _state);

// Test inputs
   ae_assert(n >= 1, "SparseSolveSymmetricGMRES: tried to automatically detect N from sizeof(A), got nonpositive size", _state);
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSolveSymmetricGMRES: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSolveSymmetricGMRES: cols(A)!=N", _state);
   ae_assert(b->cnt >= n, "SparseSolveSymmetricGMRES: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSolveSymmetricGMRES: B contains NAN/INF", _state);
   ae_assert(ae_isfinite(epsf, _state) && ae_fp_greater_eq(epsf, (double)(0)), "SparseSolveSymmetricGMRES: EpsF<0 or infinite", _state);
   ae_assert(maxits >= 0, "SparseSolveSymmetricGMRES: MaxIts<0", _state);
   if (ae_fp_eq(epsf, (double)(0)) && maxits == 0) {
      epsf = 1.0E-6;
   }
// If A is non-CRS, perform conversion
   if (!sparseiscrs(a, _state)) {
      sparsecopytocrsbuf(a, &convbuf, _state);
      sparsesolvesymmetricgmres(&convbuf, isupper, b, k, epsf, maxits, x, rep, _state);
      ae_frame_leave(_state);
      return;
   }
// Solve using temporary solver object
   sparsesolvercreate(n, &solver, _state);
   sparsesolversetalgogmres(&solver, k, _state);
   sparsesolversetcond(&solver, epsf, maxits, _state);
   sparsesolversolvesymmetric(&solver, a, isupper, b, _state);
   sparsesolverresults(&solver, x, rep, _state);
   ae_frame_leave(_state);
}

// Solving sparse linear system A*x=b using GMRES(k) method.
//
// This function provides convenience API for an 'expert' interface  provided
// by SparseSolverState class. Use SparseSolver  API  if  you  need  advanced
// functions like providing initial point, using out-of-core API and so on.
//
// INPUT PARAMETERS:
//     A       -   sparse NxN matrix in any sparse storage format. Using  CRS
//                 format   is   recommended   because   it  avoids  internal
//                 conversion.
//                 An exception will be generated if  A  is  not  NxN  matrix
//                 (where  N  is  a  size   specified  during  solver  object
//                 creation).
//     B       -   right part, array[N]
//     K       -   k parameter for  GMRES(k), k>=0.  Zero  value  means  that
//                 algorithm will choose it automatically.
//     EpsF    -   stopping condition, EpsF>=0. The algorithm will stop  when
//                 residual will decrease below EpsF*|B|. Having EpsF=0 means
//                 that this stopping condition is ignored.
//     MaxIts  -   stopping condition, MaxIts>=0.  The  algorithm  will  stop
//                 after performing MaxIts iterations. Zero  value  means  no
//                 limit.
//
// NOTE: having both EpsF=0 and MaxIts=0 means that stopping criteria will be
//       chosen automatically.
//
// OUTPUT PARAMETERS:
//     X       -   array[N], the solution
//     Rep     -   solution report:
//                 * Rep.TerminationType completion code:
//                     * -5    CG method was used for a matrix which  is  not
//                             positive definite
//                     * -4    overflow/underflow during solution
//                             (ill conditioned problem)
//                     *  1    ||residual||<=EpsF*||b||
//                     *  5    MaxIts steps was taken
//                     *  7    rounding errors prevent further progress,
//                             best point found is returned
//                     *  8    the  algorithm  was  terminated   early  with
//                             SparseSolverRequestTermination() being called
//                             from other thread.
//                 * Rep.IterationsCount contains iterations count
//                 * Rep.NMV contains number of matrix-vector calculations
//                 * Rep.R2 contains squared residual
// ALGLIB: Copyright 25.09.2021 by Sergey Bochkanov
// API: void sparsesolvegmres(const sparsematrix &a, const real_1d_array &b, const ae_int_t k, const double epsf, const ae_int_t maxits, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsesolvegmres(sparsematrix *a, RVector *b, ae_int_t k, double epsf, ae_int_t maxits, RVector *x, sparsesolverreport *rep, ae_state *_state) {
   ae_frame _frame_block;
   ae_int_t n;
   sparsematrix convbuf;
   sparsesolverstate solver;

   ae_frame_make(_state, &_frame_block);
   memset(&convbuf, 0, sizeof(convbuf));
   memset(&solver, 0, sizeof(solver));
   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);
   _sparsematrix_init(&convbuf, _state, true);
   _sparsesolverstate_init(&solver, _state, true);

   n = sparsegetnrows(a, _state);

// Test inputs
   ae_assert(n >= 1, "SparseSolveGMRES: tried to automatically detect N from sizeof(A), got nonpositive size", _state);
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSolveGMRES: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSolveGMRES: cols(A)!=N", _state);
   ae_assert(b->cnt >= n, "SparseSolveGMRES: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSolveGMRES: B contains NAN/INF", _state);
   ae_assert(ae_isfinite(epsf, _state) && ae_fp_greater_eq(epsf, (double)(0)), "SparseSolveGMRES: EpsF<0 or infinite", _state);
   ae_assert(maxits >= 0, "SparseSolveGMRES: MaxIts<0", _state);
   if (ae_fp_eq(epsf, (double)(0)) && maxits == 0) {
      epsf = 1.0E-6;
   }
// If A is non-CRS, perform conversion
   if (!sparseiscrs(a, _state)) {
      sparsecopytocrsbuf(a, &convbuf, _state);
      sparsesolvegmres(&convbuf, b, k, epsf, maxits, x, rep, _state);
      ae_frame_leave(_state);
      return;
   }
// Solve using temporary solver object
   sparsesolvercreate(n, &solver, _state);
   sparsesolversetalgogmres(&solver, k, _state);
   sparsesolversetcond(&solver, epsf, maxits, _state);
   sparsesolversolve(&solver, a, b, _state);
   sparsesolverresults(&solver, x, rep, _state);
   ae_frame_leave(_state);
}

// This function initializes sparse linear iterative solver object.
//
// This solver can be used  to  solve  nonsymmetric  and  symmetric  positive
// definite NxN (square) linear systems.
//
// The solver provides  'expert'  API  which  allows  advanced  control  over
// algorithms being used, including ability to get progress report, terminate
// long-running solver from other thread, out-of-core solution and so on.
//
// NOTE: there are also convenience  functions  that  allows  quick  one-line
//       access to the solvers:
//       * SparseSolveCG() to solve SPD linear systems
//       * SparseSolveGMRES() to solve unsymmetric linear systems.
//
// NOTE: if you want to solve MxN (rectangular) linear problem  you  may  use
//       LinLSQR solver provided by ALGLIB.
//
// USAGE (A is given by the SparseMatrix structure):
//
//     1. User initializes algorithm state with SparseSolverCreate() call
//     2. User  selects   algorithm  with one of the SparseSolverSetAlgo???()
//        functions. By default, GMRES(k) is used with automatically chosen k
//     3. Optionally, user tunes solver parameters, sets starting point, etc.
//     4. Depending on whether system is symmetric or not, user calls:
//        * SparseSolverSolveSymmetric() for a  symmetric system given by its
//          lower or upper triangle
//        * SparseSolverSolve() for a nonsymmetric system or a symmetric  one
//          given by the full matrix
//     5. User calls SparseSolverResults() to get the solution
//
//     It is possible to call SparseSolverSolve???() again to  solve  another
//     task with same dimensionality but different matrix and/or  right  part
//     without reinitializing SparseSolverState structure.
//
// USAGE (out-of-core mode):
//
//     1. User initializes algorithm state with SparseSolverCreate() call
//     2. User  selects   algorithm  with one of the SparseSolverSetAlgo???()
//        functions. By default, GMRES(k) is used with automatically chosen k
//     3. Optionally, user tunes solver parameters, sets starting point, etc.
//     4. After that user should work with out-of-core interface  in  a  loop
//        like one given below:
//
//         > alglib.sparsesolveroocstart(state)
//         > while alglib.sparsesolverooccontinue(state) do
//         >     alglib.sparsesolveroocgetrequestinfo(state, out RequestType)
//         >     alglib.sparsesolveroocgetrequestdata(state, out X)
//         >     if RequestType=0 then
//         >         [calculate  Y=A*X, with X=R^N]
//         >     alglib.sparsesolveroocsendresult(state, in Y)
//         > alglib.sparsesolveroocstop(state, out X, out Report)
//
// INPUT PARAMETERS:
//     N       -   problem dimensionality (fixed at start-up)
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolvercreate(const ae_int_t n, sparsesolverstate &state, const xparams _xparams = xdefault);
void sparsesolvercreate(ae_int_t n, sparsesolverstate *state, ae_state *_state) {

   _sparsesolverstate_clear(state);

   ae_assert(n >= 1, "SparseSolverCreate: N<=0", _state);
   state->n = n;
   state->running = false;
   state->userterminationneeded = false;
   rsetallocv(state->n, 0.0, &state->x0, _state);
   rsetallocv(state->n, 0.0, &state->x, _state);
   rsetallocv(state->n, 0.0, &state->ax, _state);
   rsetallocv(state->n, 0.0, &state->xf, _state);
   rsetallocv(state->n, 0.0, &state->b, _state);
   rsetallocv(state->n, 0.0, &state->wrkb, _state);
   state->reply1 = 0.0;
   sparsesolversetxrep(state, false, _state);
   sparsesolversetcond(state, 0.0, 0, _state);
   sparsesolversetalgogmres(state, 0, _state);
   iterativesparse_clearrequestfields(state, _state);
   iterativesparse_clearreportfields(state, _state);
}

// This function sets the solver algorithm to GMRES(k).
//
// NOTE: if you do not need advanced functionality of the  SparseSolver  API,
//       you   may   use   convenience   functions   SparseSolveGMRES()   and
//       SparseSolveSymmetricGMRES().
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     K       -   GMRES parameter, K>=0:
//                 * recommended values are in 10..100 range
//                 * larger values up to N are possible but have little sense
//                   - the algorithm will be slower than any dense solver.
//                 * values above N are truncated down to N
//                 * zero value means that  default  value  is  chosen.  This
//                   value is 50 in the current version, but  it  may  change
//                   in future ALGLIB releases.
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolversetalgogmres(const sparsesolverstate &state, const ae_int_t k, const xparams _xparams = xdefault);
void sparsesolversetalgogmres(sparsesolverstate *state, ae_int_t k, ae_state *_state) {

   ae_assert(k >= 0, "SparseSolverSetAlgoGMRESK: K<0", _state);
   state->algotype = 0;
   if (k == 0) {
      k = 50;
   }
   state->gmresk = ae_minint(k, state->n, _state);
}

// This function sets starting point.
// By default, zero starting point is used.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     X       -   starting point, array[N]
//
// OUTPUT PARAMETERS:
//     State   -   new starting point was set
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolversetstartingpoint(const sparsesolverstate &state, const real_1d_array &x, const xparams _xparams = xdefault);
void sparsesolversetstartingpoint(sparsesolverstate *state, RVector *x, ae_state *_state) {

   ae_assert(state->n <= x->cnt, "SparseSolverSetStartingPoint: Length(X)<N", _state);
   ae_assert(isfinitevector(x, state->n, _state), "SparseSolverSetStartingPoint: X contains infinite or NaN values!", _state);
   rcopyv(state->n, x, &state->x0, _state);
}

// This function sets stopping criteria.
//
// INPUT PARAMETERS:
//     EpsF    -   algorithm will be stopped if norm of residual is less than
//                 EpsF*||b||.
//     MaxIts  -   algorithm will be stopped if number of iterations is  more
//                 than MaxIts.
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//
// NOTES:
// If  both  EpsF  and  MaxIts  are  zero then small EpsF will be set to small
// value.
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void sparsesolversetcond(const sparsesolverstate &state, const double epsf, const ae_int_t maxits, const xparams _xparams = xdefault);
void sparsesolversetcond(sparsesolverstate *state, double epsf, ae_int_t maxits, ae_state *_state) {

   ae_assert(ae_isfinite(epsf, _state) && ae_fp_greater_eq(epsf, (double)(0)), "SparseSolverSetCond: EpsF is negative or contains infinite or NaN values", _state);
   ae_assert(maxits >= 0, "SparseSolverSetCond: MaxIts is negative", _state);
   if (ae_fp_eq(epsf, (double)(0)) && maxits == 0) {
      state->epsf = 1.0E-6;
      state->maxits = 0;
   } else {
      state->epsf = epsf;
      state->maxits = maxits;
   }
}

// Procedure for  the  solution of A*x=b with sparse symmetric A given by its
// lower or upper triangle.
//
// This function will work with any solver algorithm  being   used,  SPD  one
// (like CG) or not (like GMRES). Using unsymmetric solvers (like  GMRES)  on
// SPD problems is suboptimal, but still possible.
//
// NOTE: the  solver  behavior is ill-defined  for  a  situation  when a  SPD
//       solver is used on indefinite matrix. It  may solve the problem up to
//       desired precision (sometimes, rarely)  or  return  with  error  code
//       signalling violation of underlying assumptions.
//
// INPUT PARAMETERS:
//     State   -   algorithm state
//     A       -   sparse symmetric NxN matrix in any sparse storage  format.
//                 Using CRS format is recommended because it avoids internal
//                 conversion.
//                 An exception will be generated if  A  is  not  NxN  matrix
//                 (where  N  is  a  size   specified  during  solver  object
//                 creation).
//     IsUpper -   whether upper or lower triangle of A is used:
//                 * IsUpper=True  => only upper triangle is used and lower
//                                    triangle is not referenced at all
//                 * IsUpper=False => only lower triangle is used and upper
//                                    triangle is not referenced at all
//     B       -   right part, array[N]
//
// RESULT:
//     This function returns no result.
//     You can get the solution by calling SparseSolverResults()
// ALGLIB: Copyright 25.09.2021 by Sergey Bochkanov
// API: void sparsesolversolvesymmetric(const sparsesolverstate &state, const sparsematrix &a, const bool isupper, const real_1d_array &b, const xparams _xparams = xdefault);
void sparsesolversolvesymmetric(sparsesolverstate *state, sparsematrix *a, bool isupper, RVector *b, ae_state *_state) {
   ae_int_t n;

   n = state->n;

// Test inputs
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSolverSolveSymmetric: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSolverSolveSymmetric: cols(A)!=N", _state);
   ae_assert(b->cnt >= n, "SparseSolverSolveSymmetric: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSolverSolveSymmetric: B contains NAN/INF", _state);

// If A is non-CRS, perform conversion
   if (!sparseiscrs(a, _state)) {
      sparsecopytocrsbuf(a, &state->convbuf, _state);
      sparsesolversolvesymmetric(state, &state->convbuf, isupper, b, _state);
      return;
   }
// Solve using out-of-core API
   sparsesolveroocstart(state, b, _state);
   while (sparsesolverooccontinue(state, _state)) {
      if (state->requesttype == -1) {

      // Skip location reports
         continue;
      }
      ae_assert(state->requesttype == 0, "SparseSolverSolveSymmetric: integrity check 7372 failed", _state);
      sparsesmv(a, isupper, &state->x, &state->ax, _state);
   }
}

// Procedure for the solution of A*x=b with sparse nonsymmetric A
//
// IMPORTANT: this function will work with any solver algorithm  being  used,
//            symmetric solver like CG,  or  not.  However,  using  symmetric
//            solvers on nonsymmetric problems is  dangerous.  It  may  solve
//            the problem up  to  desired  precision  (sometimes,  rarely) or
//            terminate with error code signalling  violation  of  underlying
//            assumptions.
//
// INPUT PARAMETERS:
//     State   -   algorithm state
//     A       -   sparse NxN matrix in any sparse storage  format.
//                 Using CRS format is recommended because it avoids internal
//                 conversion.
//                 An exception will be generated if  A  is  not  NxN  matrix
//                 (where  N  is  a  size   specified  during  solver  object
//                 creation).
//     B       -   right part, array[N]
//
// RESULT:
//     This function returns no result.
//     You can get the solution by calling SparseSolverResults()
// ALGLIB: Copyright 25.09.2021 by Sergey Bochkanov
// API: void sparsesolversolve(const sparsesolverstate &state, const sparsematrix &a, const real_1d_array &b, const xparams _xparams = xdefault);
void sparsesolversolve(sparsesolverstate *state, sparsematrix *a, RVector *b, ae_state *_state) {
   ae_int_t n;

   n = state->n;

// Test inputs
   ae_assert(sparsegetnrows(a, _state) == n, "SparseSolverSolve: rows(A)!=N", _state);
   ae_assert(sparsegetncols(a, _state) == n, "SparseSolverSolve: cols(A)!=N", _state);
   ae_assert(b->cnt >= n, "SparseSolverSolve: length(B)<N", _state);
   ae_assert(isfinitevector(b, n, _state), "SparseSolverSolve: B contains NAN/INF", _state);

// If A is non-CRS, perform conversion
   if (!sparseiscrs(a, _state)) {
      sparsecopytocrsbuf(a, &state->convbuf, _state);
      sparsesolversolve(state, &state->convbuf, b, _state);
      return;
   }
// Solve using out-of-core API
   sparsesolveroocstart(state, b, _state);
   while (sparsesolverooccontinue(state, _state)) {
      if (state->requesttype == -1) {

      // Skip location reports
         continue;
      }
      ae_assert(state->requesttype == 0, "SparseSolverSolve: integrity check 7372 failed", _state);
      sparsemv(a, &state->x, &state->ax, _state);
   }
}

// Sparse solver results.
//
// This function must be called after calling one of the SparseSolverSolve()
// functions.
//
// INPUT PARAMETERS:
//     State   -   algorithm state
//
// OUTPUT PARAMETERS:
//     X       -   array[N], solution
//     Rep     -   solution report:
//                 * Rep.TerminationType completion code:
//                     * -5    CG method was used for a matrix which  is  not
//                             positive definite
//                     * -4    overflow/underflow during solution
//                             (ill conditioned problem)
//                     *  1    ||residual||<=EpsF*||b||
//                     *  5    MaxIts steps was taken
//                     *  7    rounding errors prevent further progress,
//                             best point found is returned
//                     *  8    the  algorithm  was  terminated   early  with
//                             SparseSolverRequestTermination() being called
//                             from other thread.
//                 * Rep.IterationsCount contains iterations count
//                 * Rep.NMV contains number of matrix-vector calculations
//                 * Rep.R2 contains squared residual
// s
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void sparsesolverresults(const sparsesolverstate &state, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsesolverresults(sparsesolverstate *state, RVector *x, sparsesolverreport *rep, ae_state *_state) {

   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);

   sparsesolveroocstop(state, x, rep, _state);
}

// This function turns on/off reporting during out-of-core processing.
//
// When the solver works in the out-of-core mode, it  can  be  configured  to
// report its progress by returning current location. These location  reports
// are implemented as a special kind of the out-of-core request:
// * SparseSolverOOCGetRequestInfo() returns -1
// * SparseSolverOOCGetRequestData() returns current location
// * SparseSolverOOCGetRequestData1() returns squared norm of the residual
// * SparseSolverOOCSendResult() shall NOT be called
//
// This function has no effect when SparseSolverSolve() is used because  this
// function has no method of reporting its progress.
//
// NOTE: when used with GMRES(k), this function reports progress  every  k-th
//       iteration.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     NeedXRep-   whether iteration reports are needed or not
// ALGLIB: Copyright 01.10.2021 by Sergey Bochkanov
// API: void sparsesolversetxrep(const sparsesolverstate &state, const bool needxrep, const xparams _xparams = xdefault);
void sparsesolversetxrep(sparsesolverstate *state, bool needxrep, ae_state *_state) {

   state->xrep = needxrep;
}

// This function initiates out-of-core mode of the sparse solver.  It  should
// be used in conjunction with other out-of-core-related  functions  of  this
// subspackage in a loop like one given below:
//
// > alglib.sparsesolveroocstart(state)
// > while alglib.sparsesolverooccontinue(state) do
// >     alglib.sparsesolveroocgetrequestinfo(state, out RequestType)
// >     alglib.sparsesolveroocgetrequestdata(state, out X)
// >     if RequestType=0 then
// >         [calculate  Y=A*X, with X=R^N]
// >     alglib.sparsesolveroocsendresult(state, in Y)
// > alglib.sparsesolveroocstop(state, out X, out Report)
//
// INPUT PARAMETERS:
//     State       -   solver object
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolveroocstart(const sparsesolverstate &state, const real_1d_array &b, const xparams _xparams = xdefault);
void sparsesolveroocstart(sparsesolverstate *state, RVector *b, ae_state *_state) {

   ae_vector_set_length(&state->rstate.ia, 0 + 1, _state);
   ae_vector_set_length(&state->rstate.ra, 2 + 1, _state);
   state->rstate.stage = -1;
   iterativesparse_clearrequestfields(state, _state);
   iterativesparse_clearreportfields(state, _state);
   state->running = true;
   state->userterminationneeded = false;
   rcopyv(state->n, b, &state->b, _state);
}

// This function performs iterative solution of  the  linear  system  in  the
// out-of-core mode. It should be used in conjunction with other out-of-core-
// related functions of this subspackage in a loop like one given below:
//
// > alglib.sparsesolveroocstart(state)
// > while alglib.sparsesolverooccontinue(state) do
// >     alglib.sparsesolveroocgetrequestinfo(state, out RequestType)
// >     alglib.sparsesolveroocgetrequestdata(state, out X)
// >     if RequestType=0 then
// >         [calculate  Y=A*X, with X=R^N]
// >     alglib.sparsesolveroocsendresult(state, in Y)
// > alglib.sparsesolveroocstop(state, out X, out Report)
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: bool sparsesolverooccontinue(const sparsesolverstate &state, const xparams _xparams = xdefault);
bool sparsesolverooccontinue(sparsesolverstate *state, ae_state *_state) {
   bool result;

   ae_assert(state->running, "SparseSolverContinue: the solver is not running", _state);
   result = iterativesparse_sparsesolveriteration(state, _state);
   state->running = result;
   return result;
}

// This function is used to retrieve information  about  out-of-core  request
// sent by the solver:
// * RequestType=0  means that matrix-vector products A*x is requested
// * RequestType=-1 means that solver reports its progress; this  request  is
//   returned only when reports are activated wit SparseSolverSetXRep().
//
// This function returns just request type; in order  to  get contents of the
// trial vector, use sparsesolveroocgetrequestdata().
//
// It should be used in conjunction with other out-of-core-related  functions
// of this subspackage in a loop like one given below:
//
// > alglib.sparsesolveroocstart(state)
// > while alglib.sparsesolverooccontinue(state) do
// >     alglib.sparsesolveroocgetrequestinfo(state, out RequestType)
// >     alglib.sparsesolveroocgetrequestdata(state, out X)
// >     if RequestType=0 then
// >         [calculate  Y=A*X, with X=R^N]
// >     alglib.sparsesolveroocsendresult(state, in Y)
// > alglib.sparsesolveroocstop(state, out X, out Report)
//
// INPUT PARAMETERS:
//     State           -   solver running in out-of-core mode
//
// OUTPUT PARAMETERS:
//     RequestType     -   type of the request to process:
//                         * 0   for matrix-vector product A*x, with A  being
//                           NxN system matrix  and X being N-dimensional
//                           vector
//                         *-1   for location and residual report
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolveroocgetrequestinfo(const sparsesolverstate &state, ae_int_t &requesttype, const xparams _xparams = xdefault);
void sparsesolveroocgetrequestinfo(sparsesolverstate *state, ae_int_t *requesttype, ae_state *_state) {

   *requesttype = 0;

   ae_assert(state->running, "SparseSolverOOCGetRequestInfo: the solver is not running", _state);
   *requesttype = state->requesttype;
}

// This function is used  to  retrieve  vector  associated  with  out-of-core
// request sent by the solver to user code. Depending  on  the  request  type
// (returned by the SparseSolverOOCGetRequestInfo()) this  vector  should  be
// multiplied by A or subjected to another processing.
//
// It should be used in conjunction with other out-of-core-related  functions
// of this subspackage in a loop like one given below:
//
// > alglib.sparsesolveroocstart(state)
// > while alglib.sparsesolverooccontinue(state) do
// >     alglib.sparsesolveroocgetrequestinfo(state, out RequestType)
// >     alglib.sparsesolveroocgetrequestdata(state, out X)
// >     if RequestType=0 then
// >         [calculate  Y=A*X, with X=R^N]
// >     alglib.sparsesolveroocsendresult(state, in Y)
// > alglib.sparsesolveroocstop(state, out X, out Report)
//
// INPUT PARAMETERS:
//     State           -   solver running in out-of-core mode
//     X               -   possibly  preallocated   storage;  reallocated  if
//                         needed, left unchanged, if large enough  to  store
//                         request data.
//
// OUTPUT PARAMETERS:
//     X               -   array[N] or larger, leading N elements are  filled
//                         with vector X.
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolveroocgetrequestdata(const sparsesolverstate &state, real_1d_array &x, const xparams _xparams = xdefault);
void sparsesolveroocgetrequestdata(sparsesolverstate *state, RVector *x, ae_state *_state) {

   ae_assert(state->running, "SparseSolverOOCGetRequestInfo: the solver is not running", _state);
   rcopyallocv(state->n, &state->x, x, _state);
}

// This function is used to retrieve scalar value associated with out-of-core
// request sent by the solver to user code. In  the  current  ALGLIB  version
// this function is used to retrieve squared residual  norm  during  progress
// reports.
//
// INPUT PARAMETERS:
//     State           -   solver running in out-of-core mode
//
// OUTPUT PARAMETERS:
//     V               -   scalar value associated with the current request
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolveroocgetrequestdata1(const sparsesolverstate &state, double &v, const xparams _xparams = xdefault);
void sparsesolveroocgetrequestdata1(sparsesolverstate *state, double *v, ae_state *_state) {

   *v = 0;

   ae_assert(state->running, "SparseSolverOOCGetRequestInfo: the solver is not running", _state);
   *v = state->reply1;
}

// This function is used to send user reply to out-of-core  request  sent  by
// the solver. Usually it is product A*x for vector X returned by the solver.
//
// It should be used in conjunction with other out-of-core-related  functions
// of this subspackage in a loop like one given below:
//
// > alglib.sparsesolveroocstart(state)
// > while alglib.sparsesolverooccontinue(state) do
// >     alglib.sparsesolveroocgetrequestinfo(state, out RequestType)
// >     alglib.sparsesolveroocgetrequestdata(state, out X)
// >     if RequestType=0 then
// >         [calculate  Y=A*X, with X=R^N]
// >     alglib.sparsesolveroocsendresult(state, in Y)
// > alglib.sparsesolveroocstop(state, out X, out Report)
//
// INPUT PARAMETERS:
//     State           -   solver running in out-of-core mode
//     AX              -   array[N] or larger, leading N elements contain A*x
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolveroocsendresult(const sparsesolverstate &state, const real_1d_array &ax, const xparams _xparams = xdefault);
void sparsesolveroocsendresult(sparsesolverstate *state, RVector *ax, ae_state *_state) {

   ae_assert(state->running, "SparseSolverOOCSendResult: the solver is not running", _state);
   ae_assert(state->requesttype == 0, "SparseSolverOOCSendResult: this request type does not accept replies", _state);
   rcopyv(state->n, ax, &state->ax, _state);
}

// This  function  finalizes out-of-core mode of the linear solver. It should
// be used in conjunction with other out-of-core-related  functions  of  this
// subspackage in a loop like one given below:
//
// > alglib.sparsesolveroocstart(state)
// > while alglib.sparsesolverooccontinue(state) do
// >     alglib.sparsesolveroocgetrequestinfo(state, out RequestType)
// >     alglib.sparsesolveroocgetrequestdata(state, out X)
// >     if RequestType=0 then
// >         [calculate  Y=A*X, with X=R^N]
// >     alglib.sparsesolveroocsendresult(state, in Y)
// > alglib.sparsesolveroocstop(state, out X, out Report)
//
// INPUT PARAMETERS:
//     State       -   solver state
//
// OUTPUT PARAMETERS:
//     X       -   array[N], the solution.
//                 Zero-filled on the failure (Rep.TerminationType<0).
//     Rep     -   report with additional info:
//                 * Rep.TerminationType completion code:
//                     * -5    CG method was used for a matrix which  is  not
//                             positive definite
//                     * -4    overflow/underflow during solution
//                             (ill conditioned problem)
//                     *  1    ||residual||<=EpsF*||b||
//                     *  5    MaxIts steps was taken
//                     *  7    rounding errors prevent further progress,
//                             best point found is returned
//                     *  8    the  algorithm  was  terminated   early  with
//                             SparseSolverRequestTermination() being called
//                             from other thread.
//                 * Rep.IterationsCount contains iterations count
//                 * Rep.NMV contains number of matrix-vector calculations
//                 * Rep.R2 contains squared residual
// ALGLIB: Copyright 24.09.2021 by Sergey Bochkanov
// API: void sparsesolveroocstop(const sparsesolverstate &state, real_1d_array &x, sparsesolverreport &rep, const xparams _xparams = xdefault);
void sparsesolveroocstop(sparsesolverstate *state, RVector *x, sparsesolverreport *rep, ae_state *_state) {

   ae_vector_clear(x);
   _sparsesolverreport_clear(rep);

   ae_assert(!state->running, "SparseSolverOOCStop: the solver is still running", _state);
   ae_vector_set_length(x, state->n, _state);
   rcopyv(state->n, &state->xf, x, _state);
   initsparsesolverreport(rep, _state);
   rep->iterationscount = state->repiterationscount;
   rep->nmv = state->repnmv;
   rep->terminationtype = state->repterminationtype;
   rep->r2 = state->repr2;
}

// This subroutine submits request for termination of the running solver.  It
// can be called from some other thread which wants the   solver to terminate
// or when processing an out-of-core request.
//
// As result, solver  stops  at  point  which  was  "current  accepted"  when
// the termination request was submitted and returns error code 8 (successful
// termination).  Such   termination   is  a smooth  process  which  properly
// deallocates all temporaries.
//
// INPUT PARAMETERS:
//     State   -   solver structure
//
// NOTE: calling this function on solver which is NOT running  will  have  no
//       effect.
//
// NOTE: multiple calls to this function are possible. First call is counted,
//       subsequent calls are silently ignored.
//
// NOTE: solver clears termination flag on its start, it means that  if  some
//       other thread will request termination too soon, its request will went
//       unnoticed.
// ALGLIB: Copyright 01.10.2021 by Sergey Bochkanov
// API: void sparsesolverrequesttermination(const sparsesolverstate &state, const xparams _xparams = xdefault);
void sparsesolverrequesttermination(sparsesolverstate *state, ae_state *_state) {

   state->userterminationneeded = true;
}

// Reverse communication sparse iteration subroutine
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
static bool iterativesparse_sparsesolveriteration(sparsesolverstate *state, ae_state *_state) {
   ae_int_t outeridx;
   double res;
   double prevres;
   double res0;
   bool result;

// Reverse communication preparations
// I know it looks ugly, but it works the same way
// anywhere from C++ to Python.
//
// This code initializes locals by:
// * random values determined during code
//   generation - on first subroutine call
// * values from previous call - on subsequent calls
   if (state->rstate.stage >= 0) {
      outeridx = state->rstate.ia.ptr.p_int[0];
      res = state->rstate.ra.ptr.p_double[0];
      prevres = state->rstate.ra.ptr.p_double[1];
      res0 = state->rstate.ra.ptr.p_double[2];
   } else {
      outeridx = 359;
      res = -58;
      prevres = -919;
      res0 = -909;
   }
   if (state->rstate.stage == 0) {
      goto lbl_0;
   }
   if (state->rstate.stage == 1) {
      goto lbl_1;
   }
   if (state->rstate.stage == 2) {
      goto lbl_2;
   }
   if (state->rstate.stage == 3) {
      goto lbl_3;
   }
   if (state->rstate.stage == 4) {
      goto lbl_4;
   }
// Routine body
   state->running = true;
   iterativesparse_clearrequestfields(state, _state);
   iterativesparse_clearreportfields(state, _state);

// GMRES?
   if (state->algotype != 0) {
      goto lbl_5;
   }
   if (ae_fp_neq(rdotv2(state->n, &state->x0, _state), (double)(0))) {
      goto lbl_7;
   }
// Starting point is default one (zero), quick initialization
   rsetv(state->n, 0.0, &state->xf, _state);
   rcopyv(state->n, &state->b, &state->wrkb, _state);
   goto lbl_8;
lbl_7:

// Non-zero starting point is provided,
   rcopyv(state->n, &state->x0, &state->xf, _state);
   state->requesttype = 0;
   rcopyv(state->n, &state->x0, &state->x, _state);
   state->rstate.stage = 0;
   goto lbl_rcomm;
lbl_0:
   state->requesttype = -999;
   state->repnmv = state->repnmv + 1;
   rcopyv(state->n, &state->b, &state->wrkb, _state);
   raddv(state->n, -1.0, &state->ax, &state->wrkb, _state);
lbl_8:
   outeridx = 0;
   state->repterminationtype = 5;
   state->repr2 = rdotv2(state->n, &state->wrkb, _state);
   res0 = ae_sqrt(rdotv2(state->n, &state->b, _state), _state);
   res = ae_sqrt(state->repr2, _state);
   if (!state->xrep) {
      goto lbl_9;
   }
// Report initial point
   state->requesttype = -1;
   state->reply1 = res * res;
   rcopyv(state->n, &state->xf, &state->x, _state);
   state->rstate.stage = 1;
   goto lbl_rcomm;
lbl_1:
   state->requesttype = -999;
lbl_9:
lbl_11:
   if (!(ae_fp_greater(res, (double)(0)) && (state->maxits == 0 || state->repiterationscount < state->maxits))) {
      goto lbl_12;
   }
// Solve with GMRES(k) for current residual.
//
// We set EpsF-based stopping condition for GMRES(k). It allows us
// to quickly detect sufficient decrease in the residual. We still
// have to recompute residual after the GMRES round because residuals
// computed by GMRES are different from the true one (due to restarts).
//
// However, checking residual decrease within GMRES still gives us
// an opportunity to stop early without waiting for GMRES round to
// complete.
   fblsgmrescreate(&state->wrkb, state->n, state->gmresk, &state->gmressolver, _state);
   state->gmressolver.epsres = state->epsf * res0 / res;
lbl_13:
   if (!fblsgmresiteration(&state->gmressolver, _state)) {
      goto lbl_14;
   }
   state->requesttype = 0;
   rcopyv(state->n, &state->gmressolver.x, &state->x, _state);
   state->rstate.stage = 2;
   goto lbl_rcomm;
lbl_2:
   state->requesttype = -999;
   rcopyv(state->n, &state->ax, &state->gmressolver.ax, _state);
   state->repnmv = state->repnmv + 1;
   if (state->userterminationneeded) {

   // User requested termination
      state->repterminationtype = 8;
      result = false;
      return result;
   }
   goto lbl_13;
lbl_14:
   state->repiterationscount = state->repiterationscount + state->gmressolver.itsperformed;
   raddv(state->n, 1.0, &state->gmressolver.xs, &state->xf, _state);

// Update residual, evaluate residual decrease, terminate if needed
   state->requesttype = 0;
   rcopyv(state->n, &state->xf, &state->x, _state);
   state->rstate.stage = 3;
   goto lbl_rcomm;
lbl_3:
   state->requesttype = -999;
   state->repnmv = state->repnmv + 1;
   rcopyv(state->n, &state->b, &state->wrkb, _state);
   raddv(state->n, -1.0, &state->ax, &state->wrkb, _state);
   state->repr2 = rdotv2(state->n, &state->wrkb, _state);
   prevres = res;
   res = ae_sqrt(state->repr2, _state);
   if (!state->xrep) {
      goto lbl_15;
   }
// Report initial point
   state->requesttype = -1;
   state->reply1 = res * res;
   rcopyv(state->n, &state->xf, &state->x, _state);
   state->rstate.stage = 4;
   goto lbl_rcomm;
lbl_4:
   state->requesttype = -999;
lbl_15:
   if (ae_fp_less_eq(res, state->epsf * res0)) {

   // Residual decrease condition met, stopping
      state->repterminationtype = 1;
      goto lbl_12;
   }
   if (ae_fp_greater_eq(res, prevres * (1 - ae_sqrt(ae_machineepsilon, _state)))) {

   // The algorithm stagnated
      state->repterminationtype = 7;
      goto lbl_12;
   }
   if (state->userterminationneeded) {

   // User requested termination
      state->repterminationtype = 8;
      result = false;
      return result;
   }
   outeridx = outeridx + 1;
   goto lbl_11;
lbl_12:
   result = false;
   return result;
lbl_5:
   ae_assert(false, "SparseSolverIteration: integrity check failed (unexpected algo)", _state);
   result = false;
   return result;

// Saving state
lbl_rcomm:
   result = true;
   state->rstate.ia.ptr.p_int[0] = outeridx;
   state->rstate.ra.ptr.p_double[0] = res;
   state->rstate.ra.ptr.p_double[1] = prevres;
   state->rstate.ra.ptr.p_double[2] = res0;
   return result;
}

// Clears request fileds (to be sure that we don't forgot to clear something)
static void iterativesparse_clearrequestfields(sparsesolverstate *state, ae_state *_state) {

   state->requesttype = -999;
}

// Clears report fileds (to be sure that we don't forgot to clear something)
static void iterativesparse_clearreportfields(sparsesolverstate *state, ae_state *_state) {

   state->repiterationscount = 0;
   state->repnmv = 0;
   state->repterminationtype = 0;
   state->repr2 = (double)(0);
}

void _sparsesolverstate_init(void *_p, ae_state *_state, bool make_automatic) {
   sparsesolverstate *p = (sparsesolverstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_init(&p->x0, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->b, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->xf, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->x, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->ax, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->wrkb, 0, DT_REAL, _state, make_automatic);
   _sparsematrix_init(&p->convbuf, _state, make_automatic);
   _fblsgmresstate_init(&p->gmressolver, _state, make_automatic);
   _rcommstate_init(&p->rstate, _state, make_automatic);
}

void _sparsesolverstate_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   sparsesolverstate *dst = (sparsesolverstate *) _dst;
   sparsesolverstate *src = (sparsesolverstate *) _src;
   dst->n = src->n;
   ae_vector_init_copy(&dst->x0, &src->x0, _state, make_automatic);
   dst->epsf = src->epsf;
   dst->maxits = src->maxits;
   dst->algotype = src->algotype;
   dst->gmresk = src->gmresk;
   dst->xrep = src->xrep;
   dst->running = src->running;
   dst->userterminationneeded = src->userterminationneeded;
   ae_vector_init_copy(&dst->b, &src->b, _state, make_automatic);
   ae_vector_init_copy(&dst->xf, &src->xf, _state, make_automatic);
   dst->repiterationscount = src->repiterationscount;
   dst->repnmv = src->repnmv;
   dst->repterminationtype = src->repterminationtype;
   dst->repr2 = src->repr2;
   dst->requesttype = src->requesttype;
   ae_vector_init_copy(&dst->x, &src->x, _state, make_automatic);
   ae_vector_init_copy(&dst->ax, &src->ax, _state, make_automatic);
   dst->reply1 = src->reply1;
   ae_vector_init_copy(&dst->wrkb, &src->wrkb, _state, make_automatic);
   _sparsematrix_init_copy(&dst->convbuf, &src->convbuf, _state, make_automatic);
   _fblsgmresstate_init_copy(&dst->gmressolver, &src->gmressolver, _state, make_automatic);
   _rcommstate_init_copy(&dst->rstate, &src->rstate, _state, make_automatic);
}

void _sparsesolverstate_clear(void *_p) {
   sparsesolverstate *p = (sparsesolverstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_clear(&p->x0);
   ae_vector_clear(&p->b);
   ae_vector_clear(&p->xf);
   ae_vector_clear(&p->x);
   ae_vector_clear(&p->ax);
   ae_vector_clear(&p->wrkb);
   _sparsematrix_clear(&p->convbuf);
   _fblsgmresstate_clear(&p->gmressolver);
   _rcommstate_clear(&p->rstate);
}

void _sparsesolverstate_destroy(void *_p) {
   sparsesolverstate *p = (sparsesolverstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_destroy(&p->x0);
   ae_vector_destroy(&p->b);
   ae_vector_destroy(&p->xf);
   ae_vector_destroy(&p->x);
   ae_vector_destroy(&p->ax);
   ae_vector_destroy(&p->wrkb);
   _sparsematrix_destroy(&p->convbuf);
   _fblsgmresstate_destroy(&p->gmressolver);
   _rcommstate_destroy(&p->rstate);
}

// === LINCG Package ===
// This function initializes linear CG Solver. This solver is used  to  solve
// symmetric positive definite problems. If you want  to  solve  nonsymmetric
// (or non-positive definite) problem you may use LinLSQR solver provided  by
// ALGLIB.
//
// USAGE:
// 1. User initializes algorithm state with LinCGCreate() call
// 2. User tunes solver parameters with  LinCGSetCond() and other functions
// 3. Optionally, user sets starting point with LinCGSetStartingPoint()
// 4. User  calls LinCGSolveSparse() function which takes algorithm state and
//    SparseMatrix object.
// 5. User calls LinCGResults() to get solution
// 6. Optionally, user may call LinCGSolveSparse()  again  to  solve  another
//    problem  with different matrix and/or right part without reinitializing
//    LinCGState structure.
//
// INPUT PARAMETERS:
//     N       -   problem dimension, N>0
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgcreate(const ae_int_t n, lincgstate &state, const xparams _xparams = xdefault);
void lincgcreate(ae_int_t n, lincgstate *state, ae_state *_state) {
   ae_int_t i;

   _lincgstate_clear(state);

   ae_assert(n > 0, "LinCGCreate: N<=0", _state);
   state->n = n;
   state->prectype = 0;
   state->itsbeforerestart = n;
   state->itsbeforerupdate = 10;
   state->epsf = lincg_defaultprecision;
   state->maxits = 0;
   state->xrep = false;
   state->running = false;

// * allocate arrays
// * set RX to NAN (just for the case user calls Results() without
//   calling SolveSparse()
// * set starting point to zero
// * we do NOT initialize B here because we assume that user should
//   initializate it using LinCGSetB() function. In case he forgets
//   to do so, exception will be thrown in the LinCGIteration().
   ae_vector_set_length(&state->rx, state->n, _state);
   ae_vector_set_length(&state->startx, state->n, _state);
   ae_vector_set_length(&state->b, state->n, _state);
   for (i = 0; i <= state->n - 1; i++) {
      state->rx.ptr.p_double[i] = _state->v_nan;
      state->startx.ptr.p_double[i] = 0.0;
      state->b.ptr.p_double[i] = (double)(0);
   }
   ae_vector_set_length(&state->cx, state->n, _state);
   ae_vector_set_length(&state->p, state->n, _state);
   ae_vector_set_length(&state->r, state->n, _state);
   ae_vector_set_length(&state->cr, state->n, _state);
   ae_vector_set_length(&state->z, state->n, _state);
   ae_vector_set_length(&state->cz, state->n, _state);
   ae_vector_set_length(&state->x, state->n, _state);
   ae_vector_set_length(&state->mv, state->n, _state);
   ae_vector_set_length(&state->pv, state->n, _state);
   lincg_updateitersdata(state, _state);
   ae_vector_set_length(&state->rstate.ia, 0 + 1, _state);
   ae_vector_set_length(&state->rstate.ra, 2 + 1, _state);
   state->rstate.stage = -1;
}

// This function sets starting point.
// By default, zero starting point is used.
//
// INPUT PARAMETERS:
//     X       -   starting point, array[N]
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgsetstartingpoint(const lincgstate &state, const real_1d_array &x, const xparams _xparams = xdefault);
void lincgsetstartingpoint(lincgstate *state, RVector *x, ae_state *_state) {

   ae_assert(!state->running, "LinCGSetStartingPoint: you can not change starting point because LinCGIteration() function is running", _state);
   ae_assert(state->n <= x->cnt, "LinCGSetStartingPoint: Length(X)<N", _state);
   ae_assert(isfinitevector(x, state->n, _state), "LinCGSetStartingPoint: X contains infinite or NaN values!", _state);
   ae_v_move(&state->startx.ptr.p_double[0], 1, &x->ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
}

// This function sets right part. By default, right part is zero.
//
// INPUT PARAMETERS:
//     B       -   right part, array[N].
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
void lincgsetb(lincgstate *state, RVector *b, ae_state *_state) {

   ae_assert(!state->running, "LinCGSetB: you can not set B, because function LinCGIteration is running!", _state);
   ae_assert(b->cnt >= state->n, "LinCGSetB: Length(B)<N", _state);
   ae_assert(isfinitevector(b, state->n, _state), "LinCGSetB: B contains infinite or NaN values!", _state);
   ae_v_move(&state->b.ptr.p_double[0], 1, &b->ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
}

// This  function  changes  preconditioning  settings  of  LinCGSolveSparse()
// function. By default, SolveSparse() uses diagonal preconditioner,  but  if
// you want to use solver without preconditioning, you can call this function
// which forces solver to use unit matrix for preconditioning.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 19.11.2012 by Sergey Bochkanov
// API: void lincgsetprecunit(const lincgstate &state, const xparams _xparams = xdefault);
void lincgsetprecunit(lincgstate *state, ae_state *_state) {

   ae_assert(!state->running, "LinCGSetPrecUnit: you can not change preconditioner, because function LinCGIteration is running!", _state);
   state->prectype = -1;
}

// This  function  changes  preconditioning  settings  of  LinCGSolveSparse()
// function.  LinCGSolveSparse() will use diagonal of the  system  matrix  as
// preconditioner. This preconditioning mode is active by default.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 19.11.2012 by Sergey Bochkanov
// API: void lincgsetprecdiag(const lincgstate &state, const xparams _xparams = xdefault);
void lincgsetprecdiag(lincgstate *state, ae_state *_state) {

   ae_assert(!state->running, "LinCGSetPrecDiag: you can not change preconditioner, because function LinCGIteration is running!", _state);
   state->prectype = 0;
}

// This function sets stopping criteria.
//
// INPUT PARAMETERS:
//     EpsF    -   algorithm will be stopped if norm of residual is less than
//                 EpsF*||b||.
//     MaxIts  -   algorithm will be stopped if number of iterations is  more
//                 than MaxIts.
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//
// NOTES:
// If  both  EpsF  and  MaxIts  are  zero then small EpsF will be set to small
// value.
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgsetcond(const lincgstate &state, const double epsf, const ae_int_t maxits, const xparams _xparams = xdefault);
void lincgsetcond(lincgstate *state, double epsf, ae_int_t maxits, ae_state *_state) {

   ae_assert(!state->running, "LinCGSetCond: you can not change stopping criteria when LinCGIteration() is running", _state);
   ae_assert(ae_isfinite(epsf, _state) && ae_fp_greater_eq(epsf, (double)(0)), "LinCGSetCond: EpsF is negative or contains infinite or NaN values", _state);
   ae_assert(maxits >= 0, "LinCGSetCond: MaxIts is negative", _state);
   if (ae_fp_eq(epsf, (double)(0)) && maxits == 0) {
      state->epsf = lincg_defaultprecision;
      state->maxits = maxits;
   } else {
      state->epsf = epsf;
      state->maxits = maxits;
   }
}

// Reverse communication version of linear CG.
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
bool lincgiteration(lincgstate *state, ae_state *_state) {
   ae_int_t i;
   double uvar;
   double bnorm;
   double v;
   bool result;

// Reverse communication preparations
// I know it looks ugly, but it works the same way
// anywhere from C++ to Python.
//
// This code initializes locals by:
// * random values determined during code
//   generation - on first subroutine call
// * values from previous call - on subsequent calls
   if (state->rstate.stage >= 0) {
      i = state->rstate.ia.ptr.p_int[0];
      uvar = state->rstate.ra.ptr.p_double[0];
      bnorm = state->rstate.ra.ptr.p_double[1];
      v = state->rstate.ra.ptr.p_double[2];
   } else {
      i = 359;
      uvar = -58;
      bnorm = -919;
      v = -909;
   }
   if (state->rstate.stage == 0) {
      goto lbl_0;
   }
   if (state->rstate.stage == 1) {
      goto lbl_1;
   }
   if (state->rstate.stage == 2) {
      goto lbl_2;
   }
   if (state->rstate.stage == 3) {
      goto lbl_3;
   }
   if (state->rstate.stage == 4) {
      goto lbl_4;
   }
   if (state->rstate.stage == 5) {
      goto lbl_5;
   }
   if (state->rstate.stage == 6) {
      goto lbl_6;
   }
   if (state->rstate.stage == 7) {
      goto lbl_7;
   }
// Routine body
   ae_assert(state->b.cnt > 0, "LinCGIteration: B is not initialized (you must initialize B by LinCGSetB() call", _state);
   state->running = true;
   state->repnmv = 0;
   lincg_clearrfields(state, _state);
   lincg_updateitersdata(state, _state);

// Start 0-th iteration
   ae_v_move(&state->rx.ptr.p_double[0], 1, &state->startx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   state->repnmv = state->repnmv + 1;
   lincg_clearrfields(state, _state);
   state->needvmv = true;
   state->rstate.stage = 0;
   goto lbl_rcomm;
lbl_0:
   state->needvmv = false;
   bnorm = (double)(0);
   state->r2 = (double)(0);
   state->meritfunction = (double)(0);
   for (i = 0; i <= state->n - 1; i++) {
      state->r.ptr.p_double[i] = state->b.ptr.p_double[i] - state->mv.ptr.p_double[i];
      state->r2 = state->r2 + state->r.ptr.p_double[i] * state->r.ptr.p_double[i];
      state->meritfunction = state->meritfunction + state->mv.ptr.p_double[i] * state->rx.ptr.p_double[i] - 2 * state->b.ptr.p_double[i] * state->rx.ptr.p_double[i];
      bnorm = bnorm + state->b.ptr.p_double[i] * state->b.ptr.p_double[i];
   }
   bnorm = ae_sqrt(bnorm, _state);

// Output first report
   if (!state->xrep) {
      goto lbl_8;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   lincg_clearrfields(state, _state);
   state->xupdated = true;
   state->rstate.stage = 1;
   goto lbl_rcomm;
lbl_1:
   state->xupdated = false;
lbl_8:

// Is x0 a solution?
   if (!ae_isfinite(state->r2, _state) || ae_fp_less_eq(ae_sqrt(state->r2, _state), state->epsf * bnorm)) {
      state->running = false;
      if (ae_isfinite(state->r2, _state)) {
         state->repterminationtype = 1;
      } else {
         state->repterminationtype = -4;
      }
      result = false;
      return result;
   }
// Calculate Z and P
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->r.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   state->repnmv = state->repnmv + 1;
   lincg_clearrfields(state, _state);
   state->needprec = true;
   state->rstate.stage = 2;
   goto lbl_rcomm;
lbl_2:
   state->needprec = false;
   for (i = 0; i <= state->n - 1; i++) {
      state->z.ptr.p_double[i] = state->pv.ptr.p_double[i];
      state->p.ptr.p_double[i] = state->z.ptr.p_double[i];
   }

// Other iterations(1..N)
   state->repiterationscount = 0;
lbl_10:
   if (false) {
      goto lbl_11;
   }
   state->repiterationscount = state->repiterationscount + 1;

// Calculate Alpha
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->p.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   state->repnmv = state->repnmv + 1;
   lincg_clearrfields(state, _state);
   state->needvmv = true;
   state->rstate.stage = 3;
   goto lbl_rcomm;
lbl_3:
   state->needvmv = false;
   if (!ae_isfinite(state->vmv, _state) || ae_fp_less_eq(state->vmv, (double)(0))) {

   // a) Overflow when calculating VMV
   // b) non-positive VMV (non-SPD matrix)
      state->running = false;
      if (ae_isfinite(state->vmv, _state)) {
         state->repterminationtype = -5;
      } else {
         state->repterminationtype = -4;
      }
      result = false;
      return result;
   }
   state->alpha = (double)(0);
   for (i = 0; i <= state->n - 1; i++) {
      state->alpha = state->alpha + state->r.ptr.p_double[i] * state->z.ptr.p_double[i];
   }
   state->alpha = state->alpha / state->vmv;
   if (!ae_isfinite(state->alpha, _state)) {

   // Overflow when calculating Alpha
      state->running = false;
      state->repterminationtype = -4;
      result = false;
      return result;
   }
// Next step toward solution
   for (i = 0; i <= state->n - 1; i++) {
      state->cx.ptr.p_double[i] = state->rx.ptr.p_double[i] + state->alpha * state->p.ptr.p_double[i];
   }

// Calculate R:
// * use recurrent relation to update R
// * at every ItsBeforeRUpdate-th iteration recalculate it from scratch, using matrix-vector product
//   in case R grows instead of decreasing, algorithm is terminated with positive completion code
   if (!(state->itsbeforerupdate == 0 || state->repiterationscount % state->itsbeforerupdate != 0)) {
      goto lbl_12;
   }
// Calculate R using recurrent formula
   for (i = 0; i <= state->n - 1; i++) {
      state->cr.ptr.p_double[i] = state->r.ptr.p_double[i] - state->alpha * state->mv.ptr.p_double[i];
      state->x.ptr.p_double[i] = state->cr.ptr.p_double[i];
   }
   goto lbl_13;
lbl_12:

// Calculate R using matrix-vector multiplication
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->cx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   state->repnmv = state->repnmv + 1;
   lincg_clearrfields(state, _state);
   state->needmv = true;
   state->rstate.stage = 4;
   goto lbl_rcomm;
lbl_4:
   state->needmv = false;
   for (i = 0; i <= state->n - 1; i++) {
      state->cr.ptr.p_double[i] = state->b.ptr.p_double[i] - state->mv.ptr.p_double[i];
      state->x.ptr.p_double[i] = state->cr.ptr.p_double[i];
   }

// Calculating merit function
// Check emergency stopping criterion
   v = (double)(0);
   for (i = 0; i <= state->n - 1; i++) {
      v = v + state->mv.ptr.p_double[i] * state->cx.ptr.p_double[i] - 2 * state->b.ptr.p_double[i] * state->cx.ptr.p_double[i];
   }
   if (ae_fp_less(v, state->meritfunction)) {
      goto lbl_14;
   }
   for (i = 0; i <= state->n - 1; i++) {
      if (!ae_isfinite(state->rx.ptr.p_double[i], _state)) {
         state->running = false;
         state->repterminationtype = -4;
         result = false;
         return result;
      }
   }

// output last report
   if (!state->xrep) {
      goto lbl_16;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   lincg_clearrfields(state, _state);
   state->xupdated = true;
   state->rstate.stage = 5;
   goto lbl_rcomm;
lbl_5:
   state->xupdated = false;
lbl_16:
   state->running = false;
   state->repterminationtype = 7;
   result = false;
   return result;
lbl_14:
   state->meritfunction = v;
lbl_13:
   ae_v_move(&state->rx.ptr.p_double[0], 1, &state->cx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));

// calculating RNorm
//
// NOTE: monotonic decrease of R2 is not guaranteed by algorithm.
   state->r2 = (double)(0);
   for (i = 0; i <= state->n - 1; i++) {
      state->r2 = state->r2 + state->cr.ptr.p_double[i] * state->cr.ptr.p_double[i];
   }

// output report
   if (!state->xrep) {
      goto lbl_18;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   lincg_clearrfields(state, _state);
   state->xupdated = true;
   state->rstate.stage = 6;
   goto lbl_rcomm;
lbl_6:
   state->xupdated = false;
lbl_18:

// stopping criterion
// achieved the required precision
   if (!ae_isfinite(state->r2, _state) || ae_fp_less_eq(ae_sqrt(state->r2, _state), state->epsf * bnorm)) {
      state->running = false;
      if (ae_isfinite(state->r2, _state)) {
         state->repterminationtype = 1;
      } else {
         state->repterminationtype = -4;
      }
      result = false;
      return result;
   }
   if (state->repiterationscount >= state->maxits && state->maxits > 0) {
      for (i = 0; i <= state->n - 1; i++) {
         if (!ae_isfinite(state->rx.ptr.p_double[i], _state)) {
            state->running = false;
            state->repterminationtype = -4;
            result = false;
            return result;
         }
      }

   // if X is finite number
      state->running = false;
      state->repterminationtype = 5;
      result = false;
      return result;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->cr.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));

// prepere of parameters for next iteration
   state->repnmv = state->repnmv + 1;
   lincg_clearrfields(state, _state);
   state->needprec = true;
   state->rstate.stage = 7;
   goto lbl_rcomm;
lbl_7:
   state->needprec = false;
   ae_v_move(&state->cz.ptr.p_double[0], 1, &state->pv.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   if (state->repiterationscount % state->itsbeforerestart != 0) {
      state->beta = (double)(0);
      uvar = (double)(0);
      for (i = 0; i <= state->n - 1; i++) {
         state->beta = state->beta + state->cz.ptr.p_double[i] * state->cr.ptr.p_double[i];
         uvar = uvar + state->z.ptr.p_double[i] * state->r.ptr.p_double[i];
      }

   // check that UVar is't INF or is't zero
      if (!ae_isfinite(uvar, _state) || ae_fp_eq(uvar, (double)(0))) {
         state->running = false;
         state->repterminationtype = -4;
         result = false;
         return result;
      }
   // calculate .BETA
      state->beta = state->beta / uvar;

   // check that .BETA neither INF nor NaN
      if (!ae_isfinite(state->beta, _state)) {
         state->running = false;
         state->repterminationtype = -1;
         result = false;
         return result;
      }
      for (i = 0; i <= state->n - 1; i++) {
         state->p.ptr.p_double[i] = state->cz.ptr.p_double[i] + state->beta * state->p.ptr.p_double[i];
      }
   } else {
      ae_v_move(&state->p.ptr.p_double[0], 1, &state->cz.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   }

// prepere data for next iteration
   for (i = 0; i <= state->n - 1; i++) {

   // write (k+1)th iteration to (k )th iteration
      state->r.ptr.p_double[i] = state->cr.ptr.p_double[i];
      state->z.ptr.p_double[i] = state->cz.ptr.p_double[i];
   }
   goto lbl_10;
lbl_11:
   result = false;
   return result;

// Saving state
lbl_rcomm:
   result = true;
   state->rstate.ia.ptr.p_int[0] = i;
   state->rstate.ra.ptr.p_double[0] = uvar;
   state->rstate.ra.ptr.p_double[1] = bnorm;
   state->rstate.ra.ptr.p_double[2] = v;
   return result;
}

// Procedure for solution of A*x=b with sparse A.
//
// INPUT PARAMETERS:
//     State   -   algorithm state
//     A       -   sparse matrix in the CRS format (you MUST contvert  it  to
//                 CRS format by calling SparseConvertToCRS() function).
//     IsUpper -   whether upper or lower triangle of A is used:
//                 * IsUpper=True  => only upper triangle is used and lower
//                                    triangle is not referenced at all
//                 * IsUpper=False => only lower triangle is used and upper
//                                    triangle is not referenced at all
//     B       -   right part, array[N]
//
// RESULT:
//     This function returns no result.
//     You can get solution by calling LinCGResults()
//
// NOTE: this function uses lightweight preconditioning -  multiplication  by
//       inverse of diag(A). If you want, you can turn preconditioning off by
//       calling LinCGSetPrecUnit(). However, preconditioning cost is low and
//       preconditioner  is  very  important  for  solution  of  badly scaled
//       problems.
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgsolvesparse(const lincgstate &state, const sparsematrix &a, const bool isupper, const real_1d_array &b, const xparams _xparams = xdefault);
void lincgsolvesparse(lincgstate *state, sparsematrix *a, bool isupper, RVector *b, ae_state *_state) {
   ae_int_t n;
   ae_int_t i;
   double v;
   double vmv;

   n = state->n;
   ae_assert(b->cnt >= state->n, "LinCGSetB: Length(B)<N", _state);
   ae_assert(isfinitevector(b, state->n, _state), "LinCGSetB: B contains infinite or NaN values!", _state);

// Allocate temporaries
   rvectorsetlengthatleast(&state->tmpd, n, _state);

// Compute diagonal scaling matrix D
   if (state->prectype == 0) {

   // Default preconditioner - inverse of matrix diagonal
      for (i = 0; i <= n - 1; i++) {
         v = sparsegetdiagonal(a, i, _state);
         if (ae_fp_greater(v, (double)(0))) {
            state->tmpd.ptr.p_double[i] = 1 / ae_sqrt(v, _state);
         } else {
            state->tmpd.ptr.p_double[i] = (double)(1);
         }
      }
   } else {

   // No diagonal scaling
      for (i = 0; i <= n - 1; i++) {
         state->tmpd.ptr.p_double[i] = (double)(1);
      }
   }

// Solve
   lincgrestart(state, _state);
   lincgsetb(state, b, _state);
   while (lincgiteration(state, _state)) {

   // Process different requests from optimizer
      if (state->needmv) {
         sparsesmv(a, isupper, &state->x, &state->mv, _state);
      }
      if (state->needvmv) {
         sparsesmv(a, isupper, &state->x, &state->mv, _state);
         vmv = ae_v_dotproduct(&state->x.ptr.p_double[0], 1, &state->mv.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
         state->vmv = vmv;
      }
      if (state->needprec) {
         for (i = 0; i <= n - 1; i++) {
            state->pv.ptr.p_double[i] = state->x.ptr.p_double[i] * ae_sqr(state->tmpd.ptr.p_double[i], _state);
         }
      }
   }
}

// CG-solver: results.
//
// This function must be called after LinCGSolve
//
// INPUT PARAMETERS:
//     State   -   algorithm state
//
// OUTPUT PARAMETERS:
//     X       -   array[N], solution
//     Rep     -   optimization report:
//                 * Rep.TerminationType completetion code:
//                     * -5    input matrix is either not positive definite,
//                             too large or too small
//                     * -4    overflow/underflow during solution
//                             (ill conditioned problem)
//                     *  1    ||residual||<=EpsF*||b||
//                     *  5    MaxIts steps was taken
//                     *  7    rounding errors prevent further progress,
//                             best point found is returned
//                 * Rep.IterationsCount contains iterations count
//                 * NMV countains number of matrix-vector calculations
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgresults(const lincgstate &state, real_1d_array &x, lincgreport &rep, const xparams _xparams = xdefault);
void lincgresults(lincgstate *state, RVector *x, lincgreport *rep, ae_state *_state) {

   ae_vector_clear(x);
   _lincgreport_clear(rep);

   ae_assert(!state->running, "LinCGResult: you can not get result, because function LinCGIteration has been launched!", _state);
   if (x->cnt < state->n) {
      ae_vector_set_length(x, state->n, _state);
   }
   ae_v_move(&x->ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   rep->iterationscount = state->repiterationscount;
   rep->nmv = state->repnmv;
   rep->terminationtype = state->repterminationtype;
   rep->r2 = state->r2;
}

// This function sets restart frequency. By default, algorithm  is  restarted
// after N subsequent iterations.
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgsetrestartfreq(const lincgstate &state, const ae_int_t srf, const xparams _xparams = xdefault);
void lincgsetrestartfreq(lincgstate *state, ae_int_t srf, ae_state *_state) {

   ae_assert(!state->running, "LinCGSetRestartFreq: you can not change restart frequency when LinCGIteration() is running", _state);
   ae_assert(srf > 0, "LinCGSetRestartFreq: non-positive SRF", _state);
   state->itsbeforerestart = srf;
}

// This function sets frequency of residual recalculations.
//
// Algorithm updates residual r_k using iterative formula,  but  recalculates
// it from scratch after each 10 iterations. It is done to avoid accumulation
// of numerical errors and to stop algorithm when r_k starts to grow.
//
// Such low update frequence (1/10) gives very  little  overhead,  but  makes
// algorithm a bit more robust against numerical errors. However, you may
// change it
//
// INPUT PARAMETERS:
//     Freq    -   desired update frequency, Freq>=0.
//                 Zero value means that no updates will be done.
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgsetrupdatefreq(const lincgstate &state, const ae_int_t freq, const xparams _xparams = xdefault);
void lincgsetrupdatefreq(lincgstate *state, ae_int_t freq, ae_state *_state) {

   ae_assert(!state->running, "LinCGSetRUpdateFreq: you can not change update frequency when LinCGIteration() is running", _state);
   ae_assert(freq >= 0, "LinCGSetRUpdateFreq: non-positive Freq", _state);
   state->itsbeforerupdate = freq;
}

// This function turns on/off reporting.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     NeedXRep-   whether iteration reports are needed or not
//
// If NeedXRep is True, algorithm will call rep() callback function if  it is
// provided to MinCGOptimize().
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
// API: void lincgsetxrep(const lincgstate &state, const bool needxrep, const xparams _xparams = xdefault);
void lincgsetxrep(lincgstate *state, bool needxrep, ae_state *_state) {

   state->xrep = needxrep;
}

// Procedure for restart function LinCGIteration
// ALGLIB: Copyright 14.11.2011 by Sergey Bochkanov
void lincgrestart(lincgstate *state, ae_state *_state) {

   ae_vector_set_length(&state->rstate.ia, 0 + 1, _state);
   ae_vector_set_length(&state->rstate.ra, 2 + 1, _state);
   state->rstate.stage = -1;
   lincg_clearrfields(state, _state);
}

// Clears request fileds (to be sure that we don't forgot to clear something)
static void lincg_clearrfields(lincgstate *state, ae_state *_state) {

   state->xupdated = false;
   state->needmv = false;
   state->needmtv = false;
   state->needmv2 = false;
   state->needvmv = false;
   state->needprec = false;
}

// Clears request fileds (to be sure that we don't forgot to clear something)
static void lincg_updateitersdata(lincgstate *state, ae_state *_state) {

   state->repiterationscount = 0;
   state->repnmv = 0;
   state->repterminationtype = 0;
}

void _lincgstate_init(void *_p, ae_state *_state, bool make_automatic) {
   lincgstate *p = (lincgstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_init(&p->rx, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->b, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->cx, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->cr, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->cz, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->p, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->r, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->z, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->x, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->mv, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->pv, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->startx, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->tmpd, 0, DT_REAL, _state, make_automatic);
   _rcommstate_init(&p->rstate, _state, make_automatic);
}

void _lincgstate_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   lincgstate *dst = (lincgstate *) _dst;
   lincgstate *src = (lincgstate *) _src;
   ae_vector_init_copy(&dst->rx, &src->rx, _state, make_automatic);
   ae_vector_init_copy(&dst->b, &src->b, _state, make_automatic);
   dst->n = src->n;
   dst->prectype = src->prectype;
   ae_vector_init_copy(&dst->cx, &src->cx, _state, make_automatic);
   ae_vector_init_copy(&dst->cr, &src->cr, _state, make_automatic);
   ae_vector_init_copy(&dst->cz, &src->cz, _state, make_automatic);
   ae_vector_init_copy(&dst->p, &src->p, _state, make_automatic);
   ae_vector_init_copy(&dst->r, &src->r, _state, make_automatic);
   ae_vector_init_copy(&dst->z, &src->z, _state, make_automatic);
   dst->alpha = src->alpha;
   dst->beta = src->beta;
   dst->r2 = src->r2;
   dst->meritfunction = src->meritfunction;
   ae_vector_init_copy(&dst->x, &src->x, _state, make_automatic);
   ae_vector_init_copy(&dst->mv, &src->mv, _state, make_automatic);
   ae_vector_init_copy(&dst->pv, &src->pv, _state, make_automatic);
   dst->vmv = src->vmv;
   ae_vector_init_copy(&dst->startx, &src->startx, _state, make_automatic);
   dst->epsf = src->epsf;
   dst->maxits = src->maxits;
   dst->itsbeforerestart = src->itsbeforerestart;
   dst->itsbeforerupdate = src->itsbeforerupdate;
   dst->xrep = src->xrep;
   dst->xupdated = src->xupdated;
   dst->needmv = src->needmv;
   dst->needmtv = src->needmtv;
   dst->needmv2 = src->needmv2;
   dst->needvmv = src->needvmv;
   dst->needprec = src->needprec;
   dst->repiterationscount = src->repiterationscount;
   dst->repnmv = src->repnmv;
   dst->repterminationtype = src->repterminationtype;
   dst->running = src->running;
   ae_vector_init_copy(&dst->tmpd, &src->tmpd, _state, make_automatic);
   _rcommstate_init_copy(&dst->rstate, &src->rstate, _state, make_automatic);
}

void _lincgstate_clear(void *_p) {
   lincgstate *p = (lincgstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_clear(&p->rx);
   ae_vector_clear(&p->b);
   ae_vector_clear(&p->cx);
   ae_vector_clear(&p->cr);
   ae_vector_clear(&p->cz);
   ae_vector_clear(&p->p);
   ae_vector_clear(&p->r);
   ae_vector_clear(&p->z);
   ae_vector_clear(&p->x);
   ae_vector_clear(&p->mv);
   ae_vector_clear(&p->pv);
   ae_vector_clear(&p->startx);
   ae_vector_clear(&p->tmpd);
   _rcommstate_clear(&p->rstate);
}

void _lincgstate_destroy(void *_p) {
   lincgstate *p = (lincgstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_destroy(&p->rx);
   ae_vector_destroy(&p->b);
   ae_vector_destroy(&p->cx);
   ae_vector_destroy(&p->cr);
   ae_vector_destroy(&p->cz);
   ae_vector_destroy(&p->p);
   ae_vector_destroy(&p->r);
   ae_vector_destroy(&p->z);
   ae_vector_destroy(&p->x);
   ae_vector_destroy(&p->mv);
   ae_vector_destroy(&p->pv);
   ae_vector_destroy(&p->startx);
   ae_vector_destroy(&p->tmpd);
   _rcommstate_destroy(&p->rstate);
}

void _lincgreport_init(void *_p, ae_state *_state, bool make_automatic) {
   lincgreport *p = (lincgreport *) _p;
   ae_touch_ptr((void *)p);
}

void _lincgreport_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   lincgreport *dst = (lincgreport *) _dst;
   lincgreport *src = (lincgreport *) _src;
   dst->iterationscount = src->iterationscount;
   dst->nmv = src->nmv;
   dst->terminationtype = src->terminationtype;
   dst->r2 = src->r2;
}

void _lincgreport_clear(void *_p) {
   lincgreport *p = (lincgreport *) _p;
   ae_touch_ptr((void *)p);
}

void _lincgreport_destroy(void *_p) {
   lincgreport *p = (lincgreport *) _p;
   ae_touch_ptr((void *)p);
}

// === LINLSQR Package ===
// This function initializes linear LSQR Solver. This solver is used to solve
// non-symmetric (and, possibly, non-square) problems. Least squares solution
// is returned for non-compatible systems.
//
// USAGE:
// 1. User initializes algorithm state with LinLSQRCreate() call
// 2. User tunes solver parameters with  LinLSQRSetCond() and other functions
// 3. User  calls  LinLSQRSolveSparse()  function which takes algorithm state
//    and SparseMatrix object.
// 4. User calls LinLSQRResults() to get solution
// 5. Optionally, user may call LinLSQRSolveSparse() again to  solve  another
//    problem  with different matrix and/or right part without reinitializing
//    LinLSQRState structure.
//
// INPUT PARAMETERS:
//     M       -   number of rows in A
//     N       -   number of variables, N>0
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//
// NOTE: see also linlsqrcreatebuf()  for  version  which  reuses  previously
//       allocated place as much as possible.
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
// API: void linlsqrcreate(const ae_int_t m, const ae_int_t n, linlsqrstate &state, const xparams _xparams = xdefault);
void linlsqrcreate(ae_int_t m, ae_int_t n, linlsqrstate *state, ae_state *_state) {

   _linlsqrstate_clear(state);

   ae_assert(m > 0, "LinLSQRCreate: M<=0", _state);
   ae_assert(n > 0, "LinLSQRCreate: N<=0", _state);
   linlsqrcreatebuf(m, n, state, _state);
}

// This function initializes linear LSQR Solver.  It  provides  exactly  same
// functionality as linlsqrcreate(), but reuses  previously  allocated  space
// as much as possible.
//
// INPUT PARAMETERS:
//     M       -   number of rows in A
//     N       -   number of variables, N>0
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 14.11.2018 by Sergey Bochkanov
// API: void linlsqrcreatebuf(const ae_int_t m, const ae_int_t n, const linlsqrstate &state, const xparams _xparams = xdefault);
void linlsqrcreatebuf(ae_int_t m, ae_int_t n, linlsqrstate *state, ae_state *_state) {
   ae_int_t i;

   ae_assert(m > 0, "LinLSQRCreateBuf: M<=0", _state);
   ae_assert(n > 0, "LinLSQRCreateBuf: N<=0", _state);
   state->m = m;
   state->n = n;
   state->prectype = 0;
   state->epsa = linlsqr_atol;
   state->epsb = linlsqr_btol;
   state->epsc = 1 / ae_sqrt(ae_machineepsilon, _state);
   state->maxits = 0;
   state->lambdai = (double)(0);
   state->xrep = false;
   state->running = false;
   state->repiterationscount = 0;

// * allocate arrays
// * set RX to NAN (just for the case user calls Results() without
//   calling SolveSparse()
// * set B to zero
   normestimatorcreate(m, n, 2, 2, &state->nes, _state);
   ae_vector_set_length(&state->rx, state->n, _state);
   ae_vector_set_length(&state->ui, state->m + state->n, _state);
   ae_vector_set_length(&state->uip1, state->m + state->n, _state);
   ae_vector_set_length(&state->vip1, state->n, _state);
   ae_vector_set_length(&state->vi, state->n, _state);
   ae_vector_set_length(&state->omegai, state->n, _state);
   ae_vector_set_length(&state->omegaip1, state->n, _state);
   ae_vector_set_length(&state->d, state->n, _state);
   ae_vector_set_length(&state->x, state->m + state->n, _state);
   ae_vector_set_length(&state->mv, state->m + state->n, _state);
   ae_vector_set_length(&state->mtv, state->n, _state);
   ae_vector_set_length(&state->b, state->m, _state);
   for (i = 0; i <= n - 1; i++) {
      state->rx.ptr.p_double[i] = _state->v_nan;
   }
   for (i = 0; i <= m - 1; i++) {
      state->b.ptr.p_double[i] = (double)(0);
   }
   ae_vector_set_length(&state->rstate.ia, 1 + 1, _state);
   ae_vector_set_length(&state->rstate.ra, 0 + 1, _state);
   state->rstate.stage = -1;
}

// This function sets right part. By default, right part is zero.
//
// INPUT PARAMETERS:
//     B       -   right part, array[N].
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
void linlsqrsetb(linlsqrstate *state, RVector *b, ae_state *_state) {
   ae_int_t i;

   ae_assert(!state->running, "LinLSQRSetB: you can not change B when LinLSQRIteration is running", _state);
   ae_assert(state->m <= b->cnt, "LinLSQRSetB: Length(B)<M", _state);
   ae_assert(isfinitevector(b, state->m, _state), "LinLSQRSetB: B contains infinite or NaN values", _state);
   state->bnorm2 = (double)(0);
   for (i = 0; i <= state->m - 1; i++) {
      state->b.ptr.p_double[i] = b->ptr.p_double[i];
      state->bnorm2 = state->bnorm2 + b->ptr.p_double[i] * b->ptr.p_double[i];
   }
}

// This  function  changes  preconditioning  settings of LinLSQQSolveSparse()
// function. By default, SolveSparse() uses diagonal preconditioner,  but  if
// you want to use solver without preconditioning, you can call this function
// which forces solver to use unit matrix for preconditioning.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 19.11.2012 by Sergey Bochkanov
// API: void linlsqrsetprecunit(const linlsqrstate &state, const xparams _xparams = xdefault);
void linlsqrsetprecunit(linlsqrstate *state, ae_state *_state) {

   ae_assert(!state->running, "LinLSQRSetPrecUnit: you can not change preconditioner, because function LinLSQRIteration is running!", _state);
   state->prectype = -1;
}

// This  function  changes  preconditioning  settings  of  LinCGSolveSparse()
// function.  LinCGSolveSparse() will use diagonal of the  system  matrix  as
// preconditioner. This preconditioning mode is active by default.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 19.11.2012 by Sergey Bochkanov
// API: void linlsqrsetprecdiag(const linlsqrstate &state, const xparams _xparams = xdefault);
void linlsqrsetprecdiag(linlsqrstate *state, ae_state *_state) {

   ae_assert(!state->running, "LinLSQRSetPrecDiag: you can not change preconditioner, because function LinCGIteration is running!", _state);
   state->prectype = 0;
}

// This function sets optional Tikhonov regularization coefficient.
// It is zero by default.
//
// INPUT PARAMETERS:
//     LambdaI -   regularization factor, LambdaI>=0
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
// API: void linlsqrsetlambdai(const linlsqrstate &state, const double lambdai, const xparams _xparams = xdefault);
void linlsqrsetlambdai(linlsqrstate *state, double lambdai, ae_state *_state) {

   ae_assert(!state->running, "LinLSQRSetLambdaI: you can not set LambdaI, because function LinLSQRIteration is running", _state);
   ae_assert(ae_isfinite(lambdai, _state) && ae_fp_greater_eq(lambdai, (double)(0)), "LinLSQRSetLambdaI: LambdaI is infinite or NaN", _state);
   state->lambdai = lambdai;
}

// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
bool linlsqriteration(linlsqrstate *state, ae_state *_state) {
   ae_int_t summn;
   double bnorm;
   ae_int_t i;
   bool result;

// Reverse communication preparations
// I know it looks ugly, but it works the same way
// anywhere from C++ to Python.
//
// This code initializes locals by:
// * random values determined during code
//   generation - on first subroutine call
// * values from previous call - on subsequent calls
   if (state->rstate.stage >= 0) {
      summn = state->rstate.ia.ptr.p_int[0];
      i = state->rstate.ia.ptr.p_int[1];
      bnorm = state->rstate.ra.ptr.p_double[0];
   } else {
      summn = 359;
      i = -58;
      bnorm = -919;
   }
   if (state->rstate.stage == 0) {
      goto lbl_0;
   }
   if (state->rstate.stage == 1) {
      goto lbl_1;
   }
   if (state->rstate.stage == 2) {
      goto lbl_2;
   }
   if (state->rstate.stage == 3) {
      goto lbl_3;
   }
   if (state->rstate.stage == 4) {
      goto lbl_4;
   }
   if (state->rstate.stage == 5) {
      goto lbl_5;
   }
   if (state->rstate.stage == 6) {
      goto lbl_6;
   }
// Routine body
   ae_assert(state->b.cnt > 0, "LinLSQRIteration: using non-allocated array B", _state);
   summn = state->m + state->n;
   bnorm = ae_sqrt(state->bnorm2, _state);
   state->userterminationneeded = false;
   state->running = true;
   state->repnmv = 0;
   state->repiterationscount = 0;
   state->r2 = state->bnorm2;
   linlsqr_clearrfields(state, _state);

// estimate for ANorm
   normestimatorrestart(&state->nes, _state);
lbl_7:
   if (!normestimatoriteration(&state->nes, _state)) {
      goto lbl_8;
   }
   if (!state->nes.needmv) {
      goto lbl_9;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->nes.x.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   state->repnmv = state->repnmv + 1;
   linlsqr_clearrfields(state, _state);
   state->needmv = true;
   state->rstate.stage = 0;
   goto lbl_rcomm;
lbl_0:
   state->needmv = false;
   ae_v_move(&state->nes.mv.ptr.p_double[0], 1, &state->mv.ptr.p_double[0], 1, ae_v_len(0, state->m - 1));
   goto lbl_7;
lbl_9:
   if (!state->nes.needmtv) {
      goto lbl_11;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->nes.x.ptr.p_double[0], 1, ae_v_len(0, state->m - 1));

// matrix-vector multiplication
   state->repnmv = state->repnmv + 1;
   linlsqr_clearrfields(state, _state);
   state->needmtv = true;
   state->rstate.stage = 1;
   goto lbl_rcomm;
lbl_1:
   state->needmtv = false;
   ae_v_move(&state->nes.mtv.ptr.p_double[0], 1, &state->mtv.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   goto lbl_7;
lbl_11:
   goto lbl_7;
lbl_8:
   normestimatorresults(&state->nes, &state->anorm, _state);

// initialize .RX by zeros
   for (i = 0; i <= state->n - 1; i++) {
      state->rx.ptr.p_double[i] = (double)(0);
   }

// output first report
   if (!state->xrep) {
      goto lbl_13;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   linlsqr_clearrfields(state, _state);
   state->xupdated = true;
   state->rstate.stage = 2;
   goto lbl_rcomm;
lbl_2:
   state->xupdated = false;
lbl_13:

// LSQR, Step 0.
//
// Algorithm outline corresponds to one which was described at p.50 of
// "LSQR - an algorithm for sparse linear equations and sparse least
// squares" by C.Paige and M.Saunders with one small addition - we
// explicitly extend system matrix by additional N lines in order
// to handle non-zero lambda, i.e. original A is replaced by
//         [ A        ]
// A_mod = [          ]
//         [ lambda*I ].
//
// Step 0:
//     x[0]          = 0
//     beta[1]*u[1]  = b
//     alpha[1]*v[1] = A_mod'*u[1]
//     w[1]          = v[1]
//     phiBar[1]     = beta[1]
//     rhoBar[1]     = alpha[1]
//     d[0]          = 0
//
// NOTE:
// There are three criteria for stopping:
// (S0) maximum number of iterations
// (S1) ||Rk||<=EpsB*||B||;
// (S2) ||A^T*Rk||/(||A||*||Rk||)<=EpsA.
// It is very important that S2 always checked AFTER S1. It is necessary
// to avoid division by zero when Rk=0.
   state->betai = bnorm;
   if (ae_fp_eq(state->betai, (double)(0))) {

   // Zero right part
      state->running = false;
      state->repterminationtype = 1;
      result = false;
      return result;
   }
   for (i = 0; i <= summn - 1; i++) {
      if (i < state->m) {
         state->ui.ptr.p_double[i] = state->b.ptr.p_double[i] / state->betai;
      } else {
         state->ui.ptr.p_double[i] = (double)(0);
      }
      state->x.ptr.p_double[i] = state->ui.ptr.p_double[i];
   }
   state->repnmv = state->repnmv + 1;
   linlsqr_clearrfields(state, _state);
   state->needmtv = true;
   state->rstate.stage = 3;
   goto lbl_rcomm;
lbl_3:
   state->needmtv = false;
   for (i = 0; i <= state->n - 1; i++) {
      state->mtv.ptr.p_double[i] = state->mtv.ptr.p_double[i] + state->lambdai * state->ui.ptr.p_double[state->m + i];
   }
   state->alphai = (double)(0);
   for (i = 0; i <= state->n - 1; i++) {
      state->alphai = state->alphai + state->mtv.ptr.p_double[i] * state->mtv.ptr.p_double[i];
   }
   state->alphai = ae_sqrt(state->alphai, _state);
   if (ae_fp_eq(state->alphai, (double)(0))) {

   // Orthogonality stopping criterion is met
      state->running = false;
      state->repterminationtype = 4;
      result = false;
      return result;
   }
   for (i = 0; i <= state->n - 1; i++) {
      state->vi.ptr.p_double[i] = state->mtv.ptr.p_double[i] / state->alphai;
      state->omegai.ptr.p_double[i] = state->vi.ptr.p_double[i];
   }
   state->phibari = state->betai;
   state->rhobari = state->alphai;
   for (i = 0; i <= state->n - 1; i++) {
      state->d.ptr.p_double[i] = (double)(0);
   }
   state->dnorm = (double)(0);

// Steps I=1, 2, ...
lbl_15:
   if (false) {
      goto lbl_16;
   }
// At I-th step State.RepIterationsCount=I.
   state->repiterationscount = state->repiterationscount + 1;

// Bidiagonalization part:
//     beta[i+1]*u[i+1]  = A_mod*v[i]-alpha[i]*u[i]
//     alpha[i+1]*v[i+1] = A_mod'*u[i+1] - beta[i+1]*v[i]
//
// NOTE:  beta[i+1]=0 or alpha[i+1]=0 will lead to successful termination
//        in the end of the current iteration. In this case u/v are zero.
// NOTE2: algorithm won't fail on zero alpha or beta (there will be no
//        division by zero because it will be stopped BEFORE division
//        occurs). However, near-zero alpha and beta won't stop algorithm
//        and, although no division by zero will happen, orthogonality
//        in U and V will be lost.
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->vi.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   state->repnmv = state->repnmv + 1;
   linlsqr_clearrfields(state, _state);
   state->needmv = true;
   state->rstate.stage = 4;
   goto lbl_rcomm;
lbl_4:
   state->needmv = false;
   for (i = 0; i <= state->n - 1; i++) {
      state->mv.ptr.p_double[state->m + i] = state->lambdai * state->vi.ptr.p_double[i];
   }
   state->betaip1 = (double)(0);
   for (i = 0; i <= summn - 1; i++) {
      state->uip1.ptr.p_double[i] = state->mv.ptr.p_double[i] - state->alphai * state->ui.ptr.p_double[i];
      state->betaip1 = state->betaip1 + state->uip1.ptr.p_double[i] * state->uip1.ptr.p_double[i];
   }
   if (ae_fp_neq(state->betaip1, (double)(0))) {
      state->betaip1 = ae_sqrt(state->betaip1, _state);
      for (i = 0; i <= summn - 1; i++) {
         state->uip1.ptr.p_double[i] = state->uip1.ptr.p_double[i] / state->betaip1;
      }
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->uip1.ptr.p_double[0], 1, ae_v_len(0, state->m - 1));
   state->repnmv = state->repnmv + 1;
   linlsqr_clearrfields(state, _state);
   state->needmtv = true;
   state->rstate.stage = 5;
   goto lbl_rcomm;
lbl_5:
   state->needmtv = false;
   for (i = 0; i <= state->n - 1; i++) {
      state->mtv.ptr.p_double[i] = state->mtv.ptr.p_double[i] + state->lambdai * state->uip1.ptr.p_double[state->m + i];
   }
   state->alphaip1 = (double)(0);
   for (i = 0; i <= state->n - 1; i++) {
      state->vip1.ptr.p_double[i] = state->mtv.ptr.p_double[i] - state->betaip1 * state->vi.ptr.p_double[i];
      state->alphaip1 = state->alphaip1 + state->vip1.ptr.p_double[i] * state->vip1.ptr.p_double[i];
   }
   if (ae_fp_neq(state->alphaip1, (double)(0))) {
      state->alphaip1 = ae_sqrt(state->alphaip1, _state);
      for (i = 0; i <= state->n - 1; i++) {
         state->vip1.ptr.p_double[i] = state->vip1.ptr.p_double[i] / state->alphaip1;
      }
   }
// Build next orthogonal transformation
   state->rhoi = safepythag2(state->rhobari, state->betaip1, _state);
   state->ci = state->rhobari / state->rhoi;
   state->si = state->betaip1 / state->rhoi;
   state->theta = state->si * state->alphaip1;
   state->rhobarip1 = -state->ci * state->alphaip1;
   state->phii = state->ci * state->phibari;
   state->phibarip1 = state->si * state->phibari;

// Update .RNorm
//
// This tricky  formula  is  necessary  because  simply  writing
// State.R2:=State.PhiBarIP1*State.PhiBarIP1 does NOT guarantees
// monotonic decrease of R2. Roundoff error combined with 80-bit
// precision used internally by Intel chips allows R2 to increase
// slightly in some rare, but possible cases. This property is
// undesirable, so we prefer to guard against R increase.
   state->r2 = ae_minreal(state->r2, state->phibarip1 * state->phibarip1, _state);

// Update d and DNorm, check condition-related stopping criteria
   for (i = 0; i <= state->n - 1; i++) {
      state->d.ptr.p_double[i] = 1 / state->rhoi * (state->vi.ptr.p_double[i] - state->theta * state->d.ptr.p_double[i]);
      state->dnorm = state->dnorm + state->d.ptr.p_double[i] * state->d.ptr.p_double[i];
   }
   if (ae_fp_greater_eq(ae_sqrt(state->dnorm, _state) * state->anorm, state->epsc)) {
      state->running = false;
      state->repterminationtype = 7;
      result = false;
      return result;
   }
// Update x, output report
   for (i = 0; i <= state->n - 1; i++) {
      state->rx.ptr.p_double[i] = state->rx.ptr.p_double[i] + state->phii / state->rhoi * state->omegai.ptr.p_double[i];
   }
   if (!state->xrep) {
      goto lbl_17;
   }
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   linlsqr_clearrfields(state, _state);
   state->xupdated = true;
   state->rstate.stage = 6;
   goto lbl_rcomm;
lbl_6:
   state->xupdated = false;
lbl_17:

// Check stopping criteria
// 1. achieved required number of iterations;
// 2. ||Rk||<=EpsB*||B||;
// 3. ||A^T*Rk||/(||A||*||Rk||)<=EpsA;
   if (state->maxits > 0 && state->repiterationscount >= state->maxits) {

   // Achieved required number of iterations
      state->running = false;
      state->repterminationtype = 5;
      result = false;
      return result;
   }
   if (ae_fp_less_eq(state->phibarip1, state->epsb * bnorm)) {

   // ||Rk||<=EpsB*||B||, here ||Rk||=PhiBar
      state->running = false;
      state->repterminationtype = 1;
      result = false;
      return result;
   }
   if (ae_fp_less_eq(state->alphaip1 * ae_fabs(state->ci, _state) / state->anorm, state->epsa)) {

   // ||A^T*Rk||/(||A||*||Rk||)<=EpsA, here ||A^T*Rk||=PhiBar*Alpha[i+1]*|.C|
      state->running = false;
      state->repterminationtype = 4;
      result = false;
      return result;
   }
   if (state->userterminationneeded) {

   // User requested termination
      state->running = false;
      state->repterminationtype = 8;
      result = false;
      return result;
   }
// Update omega
   for (i = 0; i <= state->n - 1; i++) {
      state->omegaip1.ptr.p_double[i] = state->vip1.ptr.p_double[i] - state->theta / state->rhoi * state->omegai.ptr.p_double[i];
   }

// Prepare for the next iteration - rename variables:
// u[i]   := u[i+1]
// v[i]   := v[i+1]
// rho[i] := rho[i+1]
// ...
   ae_v_move(&state->ui.ptr.p_double[0], 1, &state->uip1.ptr.p_double[0], 1, ae_v_len(0, summn - 1));
   ae_v_move(&state->vi.ptr.p_double[0], 1, &state->vip1.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   ae_v_move(&state->omegai.ptr.p_double[0], 1, &state->omegaip1.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   state->alphai = state->alphaip1;
   state->betai = state->betaip1;
   state->phibari = state->phibarip1;
   state->rhobari = state->rhobarip1;
   goto lbl_15;
lbl_16:
   result = false;
   return result;

// Saving state
lbl_rcomm:
   result = true;
   state->rstate.ia.ptr.p_int[0] = summn;
   state->rstate.ia.ptr.p_int[1] = i;
   state->rstate.ra.ptr.p_double[0] = bnorm;
   return result;
}

// Procedure for solution of A*x=b with sparse A.
//
// INPUT PARAMETERS:
//     State   -   algorithm state
//     A       -   sparse M*N matrix in the CRS format (you MUST contvert  it
//                 to CRS format  by  calling  SparseConvertToCRS()  function
//                 BEFORE you pass it to this function).
//     B       -   right part, array[M]
//
// RESULT:
//     This function returns no result.
//     You can get solution by calling LinCGResults()
//
// NOTE: this function uses lightweight preconditioning -  multiplication  by
//       inverse of diag(A). If you want, you can turn preconditioning off by
//       calling LinLSQRSetPrecUnit(). However, preconditioning cost is   low
//       and preconditioner is very important for solution  of  badly  scaled
//       problems.
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
// API: void linlsqrsolvesparse(const linlsqrstate &state, const sparsematrix &a, const real_1d_array &b, const xparams _xparams = xdefault);
void linlsqrsolvesparse(linlsqrstate *state, sparsematrix *a, RVector *b, ae_state *_state) {
   ae_int_t n;
   ae_int_t i;
   ae_int_t j;
   ae_int_t t0;
   ae_int_t t1;
   double v;

   n = state->n;
   ae_assert(!state->running, "LinLSQRSolveSparse: you can not call this function when LinLSQRIteration is running", _state);
   ae_assert(b->cnt >= state->m, "LinLSQRSolveSparse: Length(B)<M", _state);
   ae_assert(isfinitevector(b, state->m, _state), "LinLSQRSolveSparse: B contains infinite or NaN values", _state);

// Allocate temporaries
   rvectorsetlengthatleast(&state->tmpd, n, _state);
   rvectorsetlengthatleast(&state->tmpx, n, _state);

// Compute diagonal scaling matrix D
   if (state->prectype == 0) {

   // Default preconditioner - inverse of column norms
      for (i = 0; i <= n - 1; i++) {
         state->tmpd.ptr.p_double[i] = (double)(0);
      }
      t0 = 0;
      t1 = 0;
      while (sparseenumerate(a, &t0, &t1, &i, &j, &v, _state)) {
         state->tmpd.ptr.p_double[j] = state->tmpd.ptr.p_double[j] + ae_sqr(v, _state);
      }
      for (i = 0; i <= n - 1; i++) {
         if (ae_fp_greater(state->tmpd.ptr.p_double[i], (double)(0))) {
            state->tmpd.ptr.p_double[i] = 1 / ae_sqrt(state->tmpd.ptr.p_double[i], _state);
         } else {
            state->tmpd.ptr.p_double[i] = (double)(1);
         }
      }
   } else {

   // No diagonal scaling
      for (i = 0; i <= n - 1; i++) {
         state->tmpd.ptr.p_double[i] = (double)(1);
      }
   }

// Solve.
//
// Instead of solving A*x=b we solve preconditioned system (A*D)*(inv(D)*x)=b.
// Transformed A is not calculated explicitly, we just modify multiplication
// by A or A'. After solution we modify State.RX so it will store untransformed
// variables
   linlsqrsetb(state, b, _state);
   linlsqrrestart(state, _state);
   while (linlsqriteration(state, _state)) {
      if (state->needmv) {
         for (i = 0; i <= n - 1; i++) {
            state->tmpx.ptr.p_double[i] = state->tmpd.ptr.p_double[i] * state->x.ptr.p_double[i];
         }
         sparsemv(a, &state->tmpx, &state->mv, _state);
      }
      if (state->needmtv) {
         sparsemtv(a, &state->x, &state->mtv, _state);
         for (i = 0; i <= n - 1; i++) {
            state->mtv.ptr.p_double[i] = state->tmpd.ptr.p_double[i] * state->mtv.ptr.p_double[i];
         }
      }
   }
   for (i = 0; i <= n - 1; i++) {
      state->rx.ptr.p_double[i] = state->tmpd.ptr.p_double[i] * state->rx.ptr.p_double[i];
   }
}

// This function sets stopping criteria.
//
// INPUT PARAMETERS:
//     EpsA    -   algorithm will be stopped if ||A^T*Rk||/(||A||*||Rk||)<=EpsA.
//     EpsB    -   algorithm will be stopped if ||Rk||<=EpsB*||B||
//     MaxIts  -   algorithm will be stopped if number of iterations
//                 more than MaxIts.
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//
// NOTE: if EpsA,EpsB,EpsC and MaxIts are zero then these variables will
// be setted as default values.
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
// API: void linlsqrsetcond(const linlsqrstate &state, const double epsa, const double epsb, const ae_int_t maxits, const xparams _xparams = xdefault);
void linlsqrsetcond(linlsqrstate *state, double epsa, double epsb, ae_int_t maxits, ae_state *_state) {

   ae_assert(!state->running, "LinLSQRSetCond: you can not call this function when LinLSQRIteration is running", _state);
   ae_assert(ae_isfinite(epsa, _state) && ae_fp_greater_eq(epsa, (double)(0)), "LinLSQRSetCond: EpsA is negative, INF or NAN", _state);
   ae_assert(ae_isfinite(epsb, _state) && ae_fp_greater_eq(epsb, (double)(0)), "LinLSQRSetCond: EpsB is negative, INF or NAN", _state);
   ae_assert(maxits >= 0, "LinLSQRSetCond: MaxIts is negative", _state);
   if ((ae_fp_eq(epsa, (double)(0)) && ae_fp_eq(epsb, (double)(0))) && maxits == 0) {
      state->epsa = linlsqr_atol;
      state->epsb = linlsqr_btol;
      state->maxits = state->n;
   } else {
      state->epsa = epsa;
      state->epsb = epsb;
      state->maxits = maxits;
   }
}

// LSQR solver: results.
//
// This function must be called after LinLSQRSolve
//
// INPUT PARAMETERS:
//     State   -   algorithm state
//
// OUTPUT PARAMETERS:
//     X       -   array[N], solution
//     Rep     -   optimization report:
//                 * Rep.TerminationType completetion code:
//                     *  1    ||Rk||<=EpsB*||B||
//                     *  4    ||A^T*Rk||/(||A||*||Rk||)<=EpsA
//                     *  5    MaxIts steps was taken
//                     *  7    rounding errors prevent further progress,
//                             X contains best point found so far.
//                             (sometimes returned on singular systems)
//                     *  8    user requested termination via calling
//                             linlsqrrequesttermination()
//                 * Rep.IterationsCount contains iterations count
//                 * NMV countains number of matrix-vector calculations
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
// API: void linlsqrresults(const linlsqrstate &state, real_1d_array &x, linlsqrreport &rep, const xparams _xparams = xdefault);
void linlsqrresults(linlsqrstate *state, RVector *x, linlsqrreport *rep, ae_state *_state) {

   ae_vector_clear(x);
   _linlsqrreport_clear(rep);

   ae_assert(!state->running, "LinLSQRResult: you can not call this function when LinLSQRIteration is running", _state);
   if (x->cnt < state->n) {
      ae_vector_set_length(x, state->n, _state);
   }
   ae_v_move(&x->ptr.p_double[0], 1, &state->rx.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   rep->iterationscount = state->repiterationscount;
   rep->nmv = state->repnmv;
   rep->terminationtype = state->repterminationtype;
}

// This function turns on/off reporting.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     NeedXRep-   whether iteration reports are needed or not
//
// If NeedXRep is True, algorithm will call rep() callback function if  it is
// provided to MinCGOptimize().
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
// API: void linlsqrsetxrep(const linlsqrstate &state, const bool needxrep, const xparams _xparams = xdefault);
void linlsqrsetxrep(linlsqrstate *state, bool needxrep, ae_state *_state) {

   state->xrep = needxrep;
}

// This function restarts LinLSQRIteration
// ALGLIB: Copyright 30.11.2011 by Sergey Bochkanov
void linlsqrrestart(linlsqrstate *state, ae_state *_state) {

   ae_vector_set_length(&state->rstate.ia, 1 + 1, _state);
   ae_vector_set_length(&state->rstate.ra, 0 + 1, _state);
   state->rstate.stage = -1;
   linlsqr_clearrfields(state, _state);
   state->repiterationscount = 0;
}

// This function is used to peek into LSQR solver and get  current  iteration
// counter. You can safely "peek" into the solver from another thread.
//
// INPUT PARAMETERS:
//     S           -   solver object
//
// RESULT:
//     iteration counter, in [0,INF)
// ALGLIB: Copyright 21.05.2018 by Sergey Bochkanov
// API: ae_int_t linlsqrpeekiterationscount(const linlsqrstate &s, const xparams _xparams = xdefault);
ae_int_t linlsqrpeekiterationscount(linlsqrstate *s, ae_state *_state) {
   ae_int_t result;

   result = s->repiterationscount;
   return result;
}

// This subroutine submits request for termination of the running solver.  It
// can be called from some other thread which wants LSQR solver to  terminate
// (obviously, the  thread  running  LSQR  solver can not request termination
// because it is already busy working on LSQR).
//
// As result, solver  stops  at  point  which  was  "current  accepted"  when
// termination  request  was  submitted  and returns error code 8 (successful
// termination).  Such   termination   is  a smooth  process  which  properly
// deallocates all temporaries.
//
// INPUT PARAMETERS:
//     State   -   solver structure
//
// NOTE: calling this function on solver which is NOT running  will  have  no
//       effect.
//
// NOTE: multiple calls to this function are possible. First call is counted,
//       subsequent calls are silently ignored.
//
// NOTE: solver clears termination flag on its start, it means that  if  some
//       other thread will request termination too soon, its request will went
//       unnoticed.
// ALGLIB: Copyright 08.10.2014 by Sergey Bochkanov
// API: void linlsqrrequesttermination(const linlsqrstate &state, const xparams _xparams = xdefault);
void linlsqrrequesttermination(linlsqrstate *state, ae_state *_state) {

   state->userterminationneeded = true;
}

// Clears request fileds (to be sure that we don't forgot to clear something)
static void linlsqr_clearrfields(linlsqrstate *state, ae_state *_state) {

   state->xupdated = false;
   state->needmv = false;
   state->needmtv = false;
   state->needmv2 = false;
   state->needvmv = false;
   state->needprec = false;
}

void _linlsqrstate_init(void *_p, ae_state *_state, bool make_automatic) {
   linlsqrstate *p = (linlsqrstate *) _p;
   ae_touch_ptr((void *)p);
   _normestimatorstate_init(&p->nes, _state, make_automatic);
   ae_vector_init(&p->rx, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->b, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->ui, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->uip1, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->vi, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->vip1, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->omegai, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->omegaip1, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->d, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->x, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->mv, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->mtv, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->tmpd, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->tmpx, 0, DT_REAL, _state, make_automatic);
   _rcommstate_init(&p->rstate, _state, make_automatic);
}

void _linlsqrstate_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   linlsqrstate *dst = (linlsqrstate *) _dst;
   linlsqrstate *src = (linlsqrstate *) _src;
   _normestimatorstate_init_copy(&dst->nes, &src->nes, _state, make_automatic);
   ae_vector_init_copy(&dst->rx, &src->rx, _state, make_automatic);
   ae_vector_init_copy(&dst->b, &src->b, _state, make_automatic);
   dst->n = src->n;
   dst->m = src->m;
   dst->prectype = src->prectype;
   ae_vector_init_copy(&dst->ui, &src->ui, _state, make_automatic);
   ae_vector_init_copy(&dst->uip1, &src->uip1, _state, make_automatic);
   ae_vector_init_copy(&dst->vi, &src->vi, _state, make_automatic);
   ae_vector_init_copy(&dst->vip1, &src->vip1, _state, make_automatic);
   ae_vector_init_copy(&dst->omegai, &src->omegai, _state, make_automatic);
   ae_vector_init_copy(&dst->omegaip1, &src->omegaip1, _state, make_automatic);
   dst->alphai = src->alphai;
   dst->alphaip1 = src->alphaip1;
   dst->betai = src->betai;
   dst->betaip1 = src->betaip1;
   dst->phibari = src->phibari;
   dst->phibarip1 = src->phibarip1;
   dst->phii = src->phii;
   dst->rhobari = src->rhobari;
   dst->rhobarip1 = src->rhobarip1;
   dst->rhoi = src->rhoi;
   dst->ci = src->ci;
   dst->si = src->si;
   dst->theta = src->theta;
   dst->lambdai = src->lambdai;
   ae_vector_init_copy(&dst->d, &src->d, _state, make_automatic);
   dst->anorm = src->anorm;
   dst->bnorm2 = src->bnorm2;
   dst->dnorm = src->dnorm;
   dst->r2 = src->r2;
   ae_vector_init_copy(&dst->x, &src->x, _state, make_automatic);
   ae_vector_init_copy(&dst->mv, &src->mv, _state, make_automatic);
   ae_vector_init_copy(&dst->mtv, &src->mtv, _state, make_automatic);
   dst->epsa = src->epsa;
   dst->epsb = src->epsb;
   dst->epsc = src->epsc;
   dst->maxits = src->maxits;
   dst->xrep = src->xrep;
   dst->xupdated = src->xupdated;
   dst->needmv = src->needmv;
   dst->needmtv = src->needmtv;
   dst->needmv2 = src->needmv2;
   dst->needvmv = src->needvmv;
   dst->needprec = src->needprec;
   dst->repiterationscount = src->repiterationscount;
   dst->repnmv = src->repnmv;
   dst->repterminationtype = src->repterminationtype;
   dst->running = src->running;
   dst->userterminationneeded = src->userterminationneeded;
   ae_vector_init_copy(&dst->tmpd, &src->tmpd, _state, make_automatic);
   ae_vector_init_copy(&dst->tmpx, &src->tmpx, _state, make_automatic);
   _rcommstate_init_copy(&dst->rstate, &src->rstate, _state, make_automatic);
}

void _linlsqrstate_clear(void *_p) {
   linlsqrstate *p = (linlsqrstate *) _p;
   ae_touch_ptr((void *)p);
   _normestimatorstate_clear(&p->nes);
   ae_vector_clear(&p->rx);
   ae_vector_clear(&p->b);
   ae_vector_clear(&p->ui);
   ae_vector_clear(&p->uip1);
   ae_vector_clear(&p->vi);
   ae_vector_clear(&p->vip1);
   ae_vector_clear(&p->omegai);
   ae_vector_clear(&p->omegaip1);
   ae_vector_clear(&p->d);
   ae_vector_clear(&p->x);
   ae_vector_clear(&p->mv);
   ae_vector_clear(&p->mtv);
   ae_vector_clear(&p->tmpd);
   ae_vector_clear(&p->tmpx);
   _rcommstate_clear(&p->rstate);
}

void _linlsqrstate_destroy(void *_p) {
   linlsqrstate *p = (linlsqrstate *) _p;
   ae_touch_ptr((void *)p);
   _normestimatorstate_destroy(&p->nes);
   ae_vector_destroy(&p->rx);
   ae_vector_destroy(&p->b);
   ae_vector_destroy(&p->ui);
   ae_vector_destroy(&p->uip1);
   ae_vector_destroy(&p->vi);
   ae_vector_destroy(&p->vip1);
   ae_vector_destroy(&p->omegai);
   ae_vector_destroy(&p->omegaip1);
   ae_vector_destroy(&p->d);
   ae_vector_destroy(&p->x);
   ae_vector_destroy(&p->mv);
   ae_vector_destroy(&p->mtv);
   ae_vector_destroy(&p->tmpd);
   ae_vector_destroy(&p->tmpx);
   _rcommstate_destroy(&p->rstate);
}

void _linlsqrreport_init(void *_p, ae_state *_state, bool make_automatic) {
   linlsqrreport *p = (linlsqrreport *) _p;
   ae_touch_ptr((void *)p);
}

void _linlsqrreport_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   linlsqrreport *dst = (linlsqrreport *) _dst;
   linlsqrreport *src = (linlsqrreport *) _src;
   dst->iterationscount = src->iterationscount;
   dst->nmv = src->nmv;
   dst->terminationtype = src->terminationtype;
}

void _linlsqrreport_clear(void *_p) {
   linlsqrreport *p = (linlsqrreport *) _p;
   ae_touch_ptr((void *)p);
}

void _linlsqrreport_destroy(void *_p) {
   linlsqrreport *p = (linlsqrreport *) _p;
   ae_touch_ptr((void *)p);
}

// === NLEQ Package ===
//                 LEVENBERG-MARQUARDT-LIKE NONLINEAR SOLVER
//
// DESCRIPTION:
// This algorithm solves system of nonlinear equations
//     F[0](x[0], ..., x[n-1])   = 0
//     F[1](x[0], ..., x[n-1])   = 0
//     ...
//     F[M-1](x[0], ..., x[n-1]) = 0
// with M/N do not necessarily coincide.  Algorithm  converges  quadratically
// under following conditions:
//     * the solution set XS is nonempty
//     * for some xs in XS there exist such neighbourhood N(xs) that:
//       * vector function F(x) and its Jacobian J(x) are continuously
//         differentiable on N
//       * ||F(x)|| provides local error bound on N, i.e. there  exists  such
//         c1, that ||F(x)||>c1*distance(x,XS)
// Note that these conditions are much more weaker than usual non-singularity
// conditions. For example, algorithm will converge for any  affine  function
// F (whether its Jacobian singular or not).
//
//
// REQUIREMENTS:
// Algorithm will request following information during its operation:
// * function vector F[] and Jacobian matrix at given point X
// * value of merit function f(x)=F[0]^2(x)+...+F[M-1]^2(x) at given point X
//
//
// USAGE:
// 1. User initializes algorithm state with NLEQCreateLM() call
// 2. User tunes solver parameters with  NLEQSetCond(),  NLEQSetStpMax()  and
//    other functions
// 3. User  calls  NLEQSolve()  function  which  takes  algorithm  state  and
//    pointers (delegates, etc.) to callback functions which calculate  merit
//    function value and Jacobian.
// 4. User calls NLEQResults() to get solution
// 5. Optionally, user may call NLEQRestartFrom() to  solve  another  problem
//    with same parameters (N/M) but another starting  point  and/or  another
//    function vector. NLEQRestartFrom() allows to reuse already  initialized
//    structure.
//
//
// INPUT PARAMETERS:
//     N       -   space dimension, N>1:
//                 * if provided, only leading N elements of X are used
//                 * if not provided, determined automatically from size of X
//     M       -   system size
//     X       -   starting point
//
//
// OUTPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//
//
// NOTES:
// 1. you may tune stopping conditions with NLEQSetCond() function
// 2. if target function contains exp() or other fast growing functions,  and
//    optimization algorithm makes too large steps which leads  to  overflow,
//    use NLEQSetStpMax() function to bound algorithm's steps.
// 3. this  algorithm  is  a  slightly  modified implementation of the method
//    described  in  'Levenberg-Marquardt  method  for constrained  nonlinear
//    equations with strong local convergence properties' by Christian Kanzow
//    Nobuo Yamashita and Masao Fukushima and further  developed  in  'On the
//    convergence of a New Levenberg-Marquardt Method'  by  Jin-yan  Fan  and
//    Ya-Xiang Yuan.
// ALGLIB: Copyright 20.08.2009 by Sergey Bochkanov
// API: void nleqcreatelm(const ae_int_t n, const ae_int_t m, const real_1d_array &x, nleqstate &state, const xparams _xparams = xdefault);
// API: void nleqcreatelm(const ae_int_t m, const real_1d_array &x, nleqstate &state, const xparams _xparams = xdefault);
void nleqcreatelm(ae_int_t n, ae_int_t m, RVector *x, nleqstate *state, ae_state *_state) {

   _nleqstate_clear(state);

   ae_assert(n >= 1, "NLEQCreateLM: N<1!", _state);
   ae_assert(m >= 1, "NLEQCreateLM: M<1!", _state);
   ae_assert(x->cnt >= n, "NLEQCreateLM: Length(X)<N!", _state);
   ae_assert(isfinitevector(x, n, _state), "NLEQCreateLM: X contains infinite or NaN values!", _state);

// Initialize
   state->n = n;
   state->m = m;
   nleqsetcond(state, (double)(0), 0, _state);
   nleqsetxrep(state, false, _state);
   nleqsetstpmax(state, (double)(0), _state);
   ae_vector_set_length(&state->x, n, _state);
   ae_vector_set_length(&state->xbase, n, _state);
   ae_matrix_set_length(&state->j, m, n, _state);
   ae_vector_set_length(&state->fi, m, _state);
   ae_vector_set_length(&state->rightpart, n, _state);
   ae_vector_set_length(&state->candstep, n, _state);
   nleqrestartfrom(state, x, _state);
}

// This function sets stopping conditions for the nonlinear solver
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     EpsF    -   >=0
//                 The subroutine finishes  its work if on k+1-th iteration
//                 the condition ||F||<=EpsF is satisfied
//     MaxIts  -   maximum number of iterations. If MaxIts=0, the  number  of
//                 iterations is unlimited.
//
// Passing EpsF=0 and MaxIts=0 simultaneously will lead to  automatic
// stopping criterion selection (small EpsF).
//
// NOTES:
// ALGLIB: Copyright 20.08.2010 by Sergey Bochkanov
// API: void nleqsetcond(const nleqstate &state, const double epsf, const ae_int_t maxits, const xparams _xparams = xdefault);
void nleqsetcond(nleqstate *state, double epsf, ae_int_t maxits, ae_state *_state) {

   ae_assert(ae_isfinite(epsf, _state), "NLEQSetCond: EpsF is not finite number!", _state);
   ae_assert(ae_fp_greater_eq(epsf, (double)(0)), "NLEQSetCond: negative EpsF!", _state);
   ae_assert(maxits >= 0, "NLEQSetCond: negative MaxIts!", _state);
   if (ae_fp_eq(epsf, (double)(0)) && maxits == 0) {
      epsf = 1.0E-6;
   }
   state->epsf = epsf;
   state->maxits = maxits;
}

// This function turns on/off reporting.
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     NeedXRep-   whether iteration reports are needed or not
//
// If NeedXRep is True, algorithm will call rep() callback function if  it is
// provided to NLEQSolve().
// ALGLIB: Copyright 20.08.2010 by Sergey Bochkanov
// API: void nleqsetxrep(const nleqstate &state, const bool needxrep, const xparams _xparams = xdefault);
void nleqsetxrep(nleqstate *state, bool needxrep, ae_state *_state) {

   state->xrep = needxrep;
}

// This function sets maximum step length
//
// INPUT PARAMETERS:
//     State   -   structure which stores algorithm state
//     StpMax  -   maximum step length, >=0. Set StpMax to 0.0,  if you don't
//                 want to limit step length.
//
// Use this subroutine when target function  contains  exp()  or  other  fast
// growing functions, and algorithm makes  too  large  steps  which  lead  to
// overflow. This function allows us to reject steps that are too large  (and
// therefore expose us to the possible overflow) without actually calculating
// function value at the x+stp*d.
// ALGLIB: Copyright 20.08.2010 by Sergey Bochkanov
// API: void nleqsetstpmax(const nleqstate &state, const double stpmax, const xparams _xparams = xdefault);
void nleqsetstpmax(nleqstate *state, double stpmax, ae_state *_state) {

   ae_assert(ae_isfinite(stpmax, _state), "NLEQSetStpMax: StpMax is not finite!", _state);
   ae_assert(ae_fp_greater_eq(stpmax, (double)(0)), "NLEQSetStpMax: StpMax<0!", _state);
   state->stpmax = stpmax;
}

// This function provides a reverse communication interface, which is not documented or recommended for use.
// Instead, it is recommended that you use the better-documented API function nleqsolve() listed below.
// ALGLIB: Copyright 20.03.2009 by Sergey Bochkanov
// API: bool nleqiteration(const nleqstate &state, const xparams _xparams = xdefault);
// API: void nleqsolve(nleqstate &state, void (*func)(const real_1d_array &x, double &func, void *ptr), void (*jac)(const real_1d_array &x, real_1d_array &fi, real_2d_array &jac, void *ptr), void (*rep)(const real_1d_array &x, double func, void *ptr) = NULL, void *ptr = NULL, const xparams _xparams = xdefault);
bool nleqiteration(nleqstate *state, ae_state *_state) {
   ae_int_t n;
   ae_int_t m;
   ae_int_t i;
   double lambdaup;
   double lambdadown;
   double lambdav;
   double rho;
   double mu;
   double stepnorm;
   bool b;
   bool result;

// Reverse communication preparations
// I know it looks ugly, but it works the same way
// anywhere from C++ to Python.
//
// This code initializes locals by:
// * random values determined during code
//   generation - on first subroutine call
// * values from previous call - on subsequent calls
   if (state->rstate.stage >= 0) {
      n = state->rstate.ia.ptr.p_int[0];
      m = state->rstate.ia.ptr.p_int[1];
      i = state->rstate.ia.ptr.p_int[2];
      b = state->rstate.ba.ptr.p_bool[0];
      lambdaup = state->rstate.ra.ptr.p_double[0];
      lambdadown = state->rstate.ra.ptr.p_double[1];
      lambdav = state->rstate.ra.ptr.p_double[2];
      rho = state->rstate.ra.ptr.p_double[3];
      mu = state->rstate.ra.ptr.p_double[4];
      stepnorm = state->rstate.ra.ptr.p_double[5];
   } else {
      n = 359;
      m = -58;
      i = -919;
      b = true;
      lambdaup = 81;
      lambdadown = 255;
      lambdav = 74;
      rho = -788;
      mu = 809;
      stepnorm = 205;
   }
   if (state->rstate.stage == 0) {
      goto lbl_0;
   }
   if (state->rstate.stage == 1) {
      goto lbl_1;
   }
   if (state->rstate.stage == 2) {
      goto lbl_2;
   }
   if (state->rstate.stage == 3) {
      goto lbl_3;
   }
   if (state->rstate.stage == 4) {
      goto lbl_4;
   }
// Routine body

// Prepare
   n = state->n;
   m = state->m;
   state->repterminationtype = 0;
   state->repiterationscount = 0;
   state->repnfunc = 0;
   state->repnjac = 0;

// Calculate F/G, initialize algorithm
   nleq_clearrequestfields(state, _state);
   state->needf = true;
   state->rstate.stage = 0;
   goto lbl_rcomm;
lbl_0:
   state->needf = false;
   state->repnfunc = state->repnfunc + 1;
   ae_v_move(&state->xbase.ptr.p_double[0], 1, &state->x.ptr.p_double[0], 1, ae_v_len(0, n - 1));
   state->fbase = state->f;
   state->fprev = ae_maxrealnumber;
   if (!state->xrep) {
      goto lbl_5;
   }
// progress report
   nleq_clearrequestfields(state, _state);
   state->xupdated = true;
   state->rstate.stage = 1;
   goto lbl_rcomm;
lbl_1:
   state->xupdated = false;
lbl_5:
   if (ae_fp_less_eq(state->f, ae_sqr(state->epsf, _state))) {
      state->repterminationtype = 1;
      result = false;
      return result;
   }
// Main cycle
   lambdaup = (double)(10);
   lambdadown = 0.3;
   lambdav = 0.001;
   rho = (double)(1);
lbl_7:
   if (false) {
      goto lbl_8;
   }
// Get Jacobian;
// before we get to this point we already have State.XBase filled
// with current point and State.FBase filled with function value
// at XBase
   nleq_clearrequestfields(state, _state);
   state->needfij = true;
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->xbase.ptr.p_double[0], 1, ae_v_len(0, n - 1));
   state->rstate.stage = 2;
   goto lbl_rcomm;
lbl_2:
   state->needfij = false;
   state->repnfunc = state->repnfunc + 1;
   state->repnjac = state->repnjac + 1;
   rmatrixmv(n, m, &state->j, 0, 0, 1, &state->fi, 0, &state->rightpart, 0, _state);
   ae_v_muld(&state->rightpart.ptr.p_double[0], 1, ae_v_len(0, n - 1), -1);

// Inner cycle: find good lambda
lbl_9:
   if (false) {
      goto lbl_10;
   }
// Solve (J^T*J + (Lambda+Mu)*I)*y = J^T*F
// to get step d=-y where:
// * Mu=||F|| - is damping parameter for nonlinear system
// * Lambda   - is additional Levenberg-Marquardt parameter
//              for better convergence when far away from minimum
   for (i = 0; i <= n - 1; i++) {
      state->candstep.ptr.p_double[i] = (double)(0);
   }
   fblssolvecgx(&state->j, m, n, lambdav, &state->rightpart, &state->candstep, &state->cgbuf, _state);

// Normalize step (it must be no more than StpMax)
   stepnorm = (double)(0);
   for (i = 0; i <= n - 1; i++) {
      if (ae_fp_neq(state->candstep.ptr.p_double[i], (double)(0))) {
         stepnorm = (double)(1);
         break;
      }
   }
   linminnormalized(&state->candstep, &stepnorm, n, _state);
   if (ae_fp_neq(state->stpmax, (double)(0))) {
      stepnorm = ae_minreal(stepnorm, state->stpmax, _state);
   }
// Test new step - is it good enough?
// * if not, Lambda is increased and we try again.
// * if step is good, we decrease Lambda and move on.
//
// We can break this cycle on two occasions:
// * step is so small that x+step==x (in floating point arithmetics)
// * lambda is so large
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->xbase.ptr.p_double[0], 1, ae_v_len(0, n - 1));
   ae_v_addd(&state->x.ptr.p_double[0], 1, &state->candstep.ptr.p_double[0], 1, ae_v_len(0, n - 1), stepnorm);
   b = true;
   for (i = 0; i <= n - 1; i++) {
      if (ae_fp_neq(state->x.ptr.p_double[i], state->xbase.ptr.p_double[i])) {
         b = false;
         break;
      }
   }
   if (b) {

   // Step is too small, force zero step and break
      stepnorm = (double)(0);
      ae_v_move(&state->x.ptr.p_double[0], 1, &state->xbase.ptr.p_double[0], 1, ae_v_len(0, n - 1));
      state->f = state->fbase;
      goto lbl_10;
   }
   nleq_clearrequestfields(state, _state);
   state->needf = true;
   state->rstate.stage = 3;
   goto lbl_rcomm;
lbl_3:
   state->needf = false;
   state->repnfunc = state->repnfunc + 1;
   if (ae_fp_less(state->f, state->fbase)) {

   // function value decreased, move on
      nleq_decreaselambda(&lambdav, &rho, lambdadown, _state);
      goto lbl_10;
   }
   if (!nleq_increaselambda(&lambdav, &rho, lambdaup, _state)) {

   // Lambda is too large (near overflow), force zero step and break
      stepnorm = (double)(0);
      ae_v_move(&state->x.ptr.p_double[0], 1, &state->xbase.ptr.p_double[0], 1, ae_v_len(0, n - 1));
      state->f = state->fbase;
      goto lbl_10;
   }
   goto lbl_9;
lbl_10:

// Accept step:
// * new position
// * new function value
   state->fbase = state->f;
   ae_v_addd(&state->xbase.ptr.p_double[0], 1, &state->candstep.ptr.p_double[0], 1, ae_v_len(0, n - 1), stepnorm);
   state->repiterationscount = state->repiterationscount + 1;

// Report new iteration
   if (!state->xrep) {
      goto lbl_11;
   }
   nleq_clearrequestfields(state, _state);
   state->xupdated = true;
   state->f = state->fbase;
   ae_v_move(&state->x.ptr.p_double[0], 1, &state->xbase.ptr.p_double[0], 1, ae_v_len(0, n - 1));
   state->rstate.stage = 4;
   goto lbl_rcomm;
lbl_4:
   state->xupdated = false;
lbl_11:

// Test stopping conditions on F, step (zero/non-zero) and MaxIts;
// If one of the conditions is met, RepTerminationType is changed.
   if (ae_fp_less_eq(ae_sqrt(state->f, _state), state->epsf)) {
      state->repterminationtype = 1;
   }
   if (ae_fp_eq(stepnorm, (double)(0)) && state->repterminationtype == 0) {
      state->repterminationtype = -4;
   }
   if (state->repiterationscount >= state->maxits && state->maxits > 0) {
      state->repterminationtype = 5;
   }
   if (state->repterminationtype != 0) {
      goto lbl_8;
   }
// Now, iteration is finally over
   goto lbl_7;
lbl_8:
   result = false;
   return result;

// Saving state
lbl_rcomm:
   result = true;
   state->rstate.ia.ptr.p_int[0] = n;
   state->rstate.ia.ptr.p_int[1] = m;
   state->rstate.ia.ptr.p_int[2] = i;
   state->rstate.ba.ptr.p_bool[0] = b;
   state->rstate.ra.ptr.p_double[0] = lambdaup;
   state->rstate.ra.ptr.p_double[1] = lambdadown;
   state->rstate.ra.ptr.p_double[2] = lambdav;
   state->rstate.ra.ptr.p_double[3] = rho;
   state->rstate.ra.ptr.p_double[4] = mu;
   state->rstate.ra.ptr.p_double[5] = stepnorm;
   return result;
}

// NLEQ solver results
//
// INPUT PARAMETERS:
//     State   -   algorithm state.
//
// OUTPUT PARAMETERS:
//     X       -   array[0..N-1], solution
//     Rep     -   optimization report:
//                 * Rep.TerminationType completetion code:
//                     * -4    ERROR:  algorithm   has   converged   to   the
//                             stationary point Xf which is local minimum  of
//                             f=F[0]^2+...+F[m-1]^2, but is not solution  of
//                             nonlinear system.
//                     *  1    sqrt(f)<=EpsF.
//                     *  5    MaxIts steps was taken
//                     *  7    stopping conditions are too stringent,
//                             further improvement is impossible
//                 * Rep.IterationsCount contains iterations count
//                 * NFEV countains number of function calculations
//                 * ActiveConstraints contains number of active constraints
// ALGLIB: Copyright 20.08.2009 by Sergey Bochkanov
// API: void nleqresults(const nleqstate &state, real_1d_array &x, nleqreport &rep, const xparams _xparams = xdefault);
void nleqresults(nleqstate *state, RVector *x, nleqreport *rep, ae_state *_state) {

   ae_vector_clear(x);
   _nleqreport_clear(rep);

   nleqresultsbuf(state, x, rep, _state);
}

// NLEQ solver results
//
// Buffered implementation of NLEQResults(), which uses pre-allocated  buffer
// to store X[]. If buffer size is  too  small,  it  resizes  buffer.  It  is
// intended to be used in the inner cycles of performance critical algorithms
// where array reallocation penalty is too large to be ignored.
// ALGLIB: Copyright 20.08.2009 by Sergey Bochkanov
// API: void nleqresultsbuf(const nleqstate &state, real_1d_array &x, nleqreport &rep, const xparams _xparams = xdefault);
void nleqresultsbuf(nleqstate *state, RVector *x, nleqreport *rep, ae_state *_state) {

   if (x->cnt < state->n) {
      ae_vector_set_length(x, state->n, _state);
   }
   ae_v_move(&x->ptr.p_double[0], 1, &state->xbase.ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   rep->iterationscount = state->repiterationscount;
   rep->nfunc = state->repnfunc;
   rep->njac = state->repnjac;
   rep->terminationtype = state->repterminationtype;
}

// This  subroutine  restarts  CG  algorithm from new point. All optimization
// parameters are left unchanged.
//
// This  function  allows  to  solve multiple  optimization  problems  (which
// must have same number of dimensions) without object reallocation penalty.
//
// INPUT PARAMETERS:
//     State   -   structure used for reverse communication previously
//                 allocated with MinCGCreate call.
//     X       -   new starting point.
//     BndL    -   new lower bounds
//     BndU    -   new upper bounds
// ALGLIB: Copyright 30.07.2010 by Sergey Bochkanov
// API: void nleqrestartfrom(const nleqstate &state, const real_1d_array &x, const xparams _xparams = xdefault);
void nleqrestartfrom(nleqstate *state, RVector *x, ae_state *_state) {

   ae_assert(x->cnt >= state->n, "NLEQRestartFrom: Length(X)<N!", _state);
   ae_assert(isfinitevector(x, state->n, _state), "NLEQRestartFrom: X contains infinite or NaN values!", _state);
   ae_v_move(&state->x.ptr.p_double[0], 1, &x->ptr.p_double[0], 1, ae_v_len(0, state->n - 1));
   ae_vector_set_length(&state->rstate.ia, 2 + 1, _state);
   ae_vector_set_length(&state->rstate.ba, 0 + 1, _state);
   ae_vector_set_length(&state->rstate.ra, 5 + 1, _state);
   state->rstate.stage = -1;
   nleq_clearrequestfields(state, _state);
}

// Clears request fileds (to be sure that we don't forgot to clear something)
static void nleq_clearrequestfields(nleqstate *state, ae_state *_state) {

   state->needf = false;
   state->needfij = false;
   state->xupdated = false;
}

// Increases lambda, returns False when there is a danger of overflow
static bool nleq_increaselambda(double *lambdav, double *nu, double lambdaup, ae_state *_state) {
   double lnlambda;
   double lnnu;
   double lnlambdaup;
   double lnmax;
   bool result;

   result = false;
   lnlambda = ae_log(*lambdav, _state);
   lnlambdaup = ae_log(lambdaup, _state);
   lnnu = ae_log(*nu, _state);
   lnmax = 0.5 * ae_log(ae_maxrealnumber, _state);
   if (ae_fp_greater(lnlambda + lnlambdaup + lnnu, lnmax)) {
      return result;
   }
   if (ae_fp_greater(lnnu + ae_log((double)(2), _state), lnmax)) {
      return result;
   }
   *lambdav = *lambdav * lambdaup * (*nu);
   *nu = *nu * 2;
   result = true;
   return result;
}

// Decreases lambda, but leaves it unchanged when there is danger of underflow.
static void nleq_decreaselambda(double *lambdav, double *nu, double lambdadown, ae_state *_state) {

   *nu = (double)(1);
   if (ae_fp_less(ae_log(*lambdav, _state) + ae_log(lambdadown, _state), ae_log(ae_minrealnumber, _state))) {
      *lambdav = ae_minrealnumber;
   } else {
      *lambdav = *lambdav * lambdadown;
   }
}

void _nleqstate_init(void *_p, ae_state *_state, bool make_automatic) {
   nleqstate *p = (nleqstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_init(&p->x, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->fi, 0, DT_REAL, _state, make_automatic);
   ae_matrix_init(&p->j, 0, 0, DT_REAL, _state, make_automatic);
   _rcommstate_init(&p->rstate, _state, make_automatic);
   ae_vector_init(&p->xbase, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->candstep, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->rightpart, 0, DT_REAL, _state, make_automatic);
   ae_vector_init(&p->cgbuf, 0, DT_REAL, _state, make_automatic);
}

void _nleqstate_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   nleqstate *dst = (nleqstate *) _dst;
   nleqstate *src = (nleqstate *) _src;
   dst->n = src->n;
   dst->m = src->m;
   dst->epsf = src->epsf;
   dst->maxits = src->maxits;
   dst->xrep = src->xrep;
   dst->stpmax = src->stpmax;
   ae_vector_init_copy(&dst->x, &src->x, _state, make_automatic);
   dst->f = src->f;
   ae_vector_init_copy(&dst->fi, &src->fi, _state, make_automatic);
   ae_matrix_init_copy(&dst->j, &src->j, _state, make_automatic);
   dst->needf = src->needf;
   dst->needfij = src->needfij;
   dst->xupdated = src->xupdated;
   _rcommstate_init_copy(&dst->rstate, &src->rstate, _state, make_automatic);
   dst->repiterationscount = src->repiterationscount;
   dst->repnfunc = src->repnfunc;
   dst->repnjac = src->repnjac;
   dst->repterminationtype = src->repterminationtype;
   ae_vector_init_copy(&dst->xbase, &src->xbase, _state, make_automatic);
   dst->fbase = src->fbase;
   dst->fprev = src->fprev;
   ae_vector_init_copy(&dst->candstep, &src->candstep, _state, make_automatic);
   ae_vector_init_copy(&dst->rightpart, &src->rightpart, _state, make_automatic);
   ae_vector_init_copy(&dst->cgbuf, &src->cgbuf, _state, make_automatic);
}

void _nleqstate_clear(void *_p) {
   nleqstate *p = (nleqstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_clear(&p->x);
   ae_vector_clear(&p->fi);
   ae_matrix_clear(&p->j);
   _rcommstate_clear(&p->rstate);
   ae_vector_clear(&p->xbase);
   ae_vector_clear(&p->candstep);
   ae_vector_clear(&p->rightpart);
   ae_vector_clear(&p->cgbuf);
}

void _nleqstate_destroy(void *_p) {
   nleqstate *p = (nleqstate *) _p;
   ae_touch_ptr((void *)p);
   ae_vector_destroy(&p->x);
   ae_vector_destroy(&p->fi);
   ae_matrix_destroy(&p->j);
   _rcommstate_destroy(&p->rstate);
   ae_vector_destroy(&p->xbase);
   ae_vector_destroy(&p->candstep);
   ae_vector_destroy(&p->rightpart);
   ae_vector_destroy(&p->cgbuf);
}

void _nleqreport_init(void *_p, ae_state *_state, bool make_automatic) {
   nleqreport *p = (nleqreport *) _p;
   ae_touch_ptr((void *)p);
}

void _nleqreport_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic) {
   nleqreport *dst = (nleqreport *) _dst;
   nleqreport *src = (nleqreport *) _src;
   dst->iterationscount = src->iterationscount;
   dst->nfunc = src->nfunc;
   dst->njac = src->njac;
   dst->terminationtype = src->terminationtype;
}

void _nleqreport_clear(void *_p) {
   nleqreport *p = (nleqreport *) _p;
   ae_touch_ptr((void *)p);
}

void _nleqreport_destroy(void *_p) {
   nleqreport *p = (nleqreport *) _p;
   ae_touch_ptr((void *)p);
}
} // end of namespace alglib_impl
