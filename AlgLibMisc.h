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
#ifndef OnceOnlyAlgLibMisc_h
#define OnceOnlyAlgLibMisc_h

#include "AlgLibInternal.h"

namespace alglib_impl {
// === HQRND Package ===
typedef struct {
   ae_int_t s1;
   ae_int_t s2;
   ae_int_t magicv;
} hqrndstate;

// === XDEBUG Package ===
typedef struct {
   ae_int_t i;
   ae_complex c;
   ae_vector a;
} xdebugrecord1;

// === NEARESTNEIGHBOR Package ===
typedef struct {
   ae_vector x;
   ae_vector boxmin;
   ae_vector boxmax;
   ae_int_t kneeded;
   double rneeded;
   bool selfmatch;
   double approxf;
   ae_int_t kcur;
   ae_vector idx;
   ae_vector r;
   ae_vector buf;
   ae_vector curboxmin;
   ae_vector curboxmax;
   double curdist;
} kdtreerequestbuffer;
typedef struct {
   ae_int_t n;
   ae_int_t nx;
   ae_int_t ny;
   ae_int_t normtype;
   ae_matrix xy;
   ae_vector tags;
   ae_vector boxmin;
   ae_vector boxmax;
   ae_vector nodes;
   ae_vector splits;
   kdtreerequestbuffer innerbuf;
   ae_int_t debugcounter;
} kdtree;
} // end of namespace alglib_impl

namespace alglib {
// === HQRND Package ===
DecClass(hqrndstate, EndD);

// === XDEBUG Package ===
DecClass(xdebugrecord1, ae_int_t &i; complex &c; real_1d_array a;);

// === NEARESTNEIGHBOR Package ===
DecClass(kdtreerequestbuffer, EndD);

// KD-tree object.
DecClass(kdtree, EndD);

// === HQRND Package ===
void hqrndrandomize(hqrndstate &state, const xparams _xparams = xdefault);
void hqrndseed(const ae_int_t s1, const ae_int_t s2, hqrndstate &state, const xparams _xparams = xdefault);
double hqrnduniformr(const hqrndstate &state, const xparams _xparams = xdefault);
ae_int_t hqrnduniformi(const hqrndstate &state, const ae_int_t n, const xparams _xparams = xdefault);
double hqrndnormal(const hqrndstate &state, const xparams _xparams = xdefault);
void hqrndnormalv(const hqrndstate &state, const ae_int_t n, real_1d_array &x, const xparams _xparams = xdefault);
void hqrndnormalm(const hqrndstate &state, const ae_int_t m, const ae_int_t n, real_2d_array &x, const xparams _xparams = xdefault);
void hqrndunit2(const hqrndstate &state, double &x, double &y, const xparams _xparams = xdefault);
void hqrndnormal2(const hqrndstate &state, double &x1, double &x2, const xparams _xparams = xdefault);
double hqrndexponential(const hqrndstate &state, const double lambdav, const xparams _xparams = xdefault);
double hqrnddiscrete(const hqrndstate &state, const real_1d_array &x, const ae_int_t n, const xparams _xparams = xdefault);
double hqrndcontinuous(const hqrndstate &state, const real_1d_array &x, const ae_int_t n, const xparams _xparams = xdefault);

// === XDEBUG Package ===
void xdebuginitrecord1(xdebugrecord1 &rec1, const xparams _xparams = xdefault);
ae_int_t xdebugb1count(const boolean_1d_array &a, const xparams _xparams = xdefault);
void xdebugb1not(const boolean_1d_array &a, const xparams _xparams = xdefault);
void xdebugb1appendcopy(boolean_1d_array &a, const xparams _xparams = xdefault);
void xdebugb1outeven(const ae_int_t n, boolean_1d_array &a, const xparams _xparams = xdefault);
ae_int_t xdebugi1sum(const integer_1d_array &a, const xparams _xparams = xdefault);
void xdebugi1neg(const integer_1d_array &a, const xparams _xparams = xdefault);
void xdebugi1appendcopy(integer_1d_array &a, const xparams _xparams = xdefault);
void xdebugi1outeven(const ae_int_t n, integer_1d_array &a, const xparams _xparams = xdefault);
double xdebugr1sum(const real_1d_array &a, const xparams _xparams = xdefault);
void xdebugr1neg(const real_1d_array &a, const xparams _xparams = xdefault);
void xdebugr1appendcopy(real_1d_array &a, const xparams _xparams = xdefault);
void xdebugr1outeven(const ae_int_t n, real_1d_array &a, const xparams _xparams = xdefault);
complex xdebugc1sum(const complex_1d_array &a, const xparams _xparams = xdefault);
void xdebugc1neg(const complex_1d_array &a, const xparams _xparams = xdefault);
void xdebugc1appendcopy(complex_1d_array &a, const xparams _xparams = xdefault);
void xdebugc1outeven(const ae_int_t n, complex_1d_array &a, const xparams _xparams = xdefault);
ae_int_t xdebugb2count(const boolean_2d_array &a, const xparams _xparams = xdefault);
void xdebugb2not(const boolean_2d_array &a, const xparams _xparams = xdefault);
void xdebugb2transpose(boolean_2d_array &a, const xparams _xparams = xdefault);
void xdebugb2outsin(const ae_int_t m, const ae_int_t n, boolean_2d_array &a, const xparams _xparams = xdefault);
ae_int_t xdebugi2sum(const integer_2d_array &a, const xparams _xparams = xdefault);
void xdebugi2neg(const integer_2d_array &a, const xparams _xparams = xdefault);
void xdebugi2transpose(integer_2d_array &a, const xparams _xparams = xdefault);
void xdebugi2outsin(const ae_int_t m, const ae_int_t n, integer_2d_array &a, const xparams _xparams = xdefault);
double xdebugr2sum(const real_2d_array &a, const xparams _xparams = xdefault);
void xdebugr2neg(const real_2d_array &a, const xparams _xparams = xdefault);
void xdebugr2transpose(real_2d_array &a, const xparams _xparams = xdefault);
void xdebugr2outsin(const ae_int_t m, const ae_int_t n, real_2d_array &a, const xparams _xparams = xdefault);
complex xdebugc2sum(const complex_2d_array &a, const xparams _xparams = xdefault);
void xdebugc2neg(const complex_2d_array &a, const xparams _xparams = xdefault);
void xdebugc2transpose(complex_2d_array &a, const xparams _xparams = xdefault);
void xdebugc2outsincos(const ae_int_t m, const ae_int_t n, complex_2d_array &a, const xparams _xparams = xdefault);
double xdebugmaskedbiasedproductsum(const ae_int_t m, const ae_int_t n, const real_2d_array &a, const real_2d_array &b, const boolean_2d_array &c, const xparams _xparams = xdefault);

// === NEARESTNEIGHBOR Package ===
void kdtreeserialize(kdtree &obj, std::string &s_out);
void kdtreeunserialize(const std::string &s_in, kdtree &obj);
void kdtreeserialize(kdtree &obj, std::ostream &s_out);
void kdtreeunserialize(const std::istream &s_in, kdtree &obj);
void kdtreebuild(const real_2d_array &xy, const ae_int_t n, const ae_int_t nx, const ae_int_t ny, const ae_int_t normtype, kdtree &kdt, const xparams _xparams = xdefault);
void kdtreebuild(const real_2d_array &xy, const ae_int_t nx, const ae_int_t ny, const ae_int_t normtype, kdtree &kdt, const xparams _xparams = xdefault);
void kdtreebuildtagged(const real_2d_array &xy, const integer_1d_array &tags, const ae_int_t n, const ae_int_t nx, const ae_int_t ny, const ae_int_t normtype, kdtree &kdt, const xparams _xparams = xdefault);
void kdtreebuildtagged(const real_2d_array &xy, const integer_1d_array &tags, const ae_int_t nx, const ae_int_t ny, const ae_int_t normtype, kdtree &kdt, const xparams _xparams = xdefault);
void kdtreecreaterequestbuffer(const kdtree &kdt, kdtreerequestbuffer &buf, const xparams _xparams = xdefault);
ae_int_t kdtreequeryknn(const kdtree &kdt, const real_1d_array &x, const ae_int_t k, const bool selfmatch, const xparams _xparams = xdefault);
ae_int_t kdtreequeryknn(const kdtree &kdt, const real_1d_array &x, const ae_int_t k, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryknn(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const ae_int_t k, const bool selfmatch, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryknn(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const ae_int_t k, const xparams _xparams = xdefault);
ae_int_t kdtreequeryrnn(const kdtree &kdt, const real_1d_array &x, const double r, const bool selfmatch, const xparams _xparams = xdefault);
ae_int_t kdtreequeryrnn(const kdtree &kdt, const real_1d_array &x, const double r, const xparams _xparams = xdefault);
ae_int_t kdtreequeryrnnu(const kdtree &kdt, const real_1d_array &x, const double r, const bool selfmatch, const xparams _xparams = xdefault);
ae_int_t kdtreequeryrnnu(const kdtree &kdt, const real_1d_array &x, const double r, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryrnn(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const double r, const bool selfmatch, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryrnn(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const double r, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryrnnu(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const double r, const bool selfmatch, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryrnnu(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const double r, const xparams _xparams = xdefault);
ae_int_t kdtreequeryaknn(const kdtree &kdt, const real_1d_array &x, const ae_int_t k, const bool selfmatch, const double eps, const xparams _xparams = xdefault);
ae_int_t kdtreequeryaknn(const kdtree &kdt, const real_1d_array &x, const ae_int_t k, const double eps, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryaknn(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const ae_int_t k, const bool selfmatch, const double eps, const xparams _xparams = xdefault);
ae_int_t kdtreetsqueryaknn(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &x, const ae_int_t k, const double eps, const xparams _xparams = xdefault);
ae_int_t kdtreequerybox(const kdtree &kdt, const real_1d_array &boxmin, const real_1d_array &boxmax, const xparams _xparams = xdefault);
ae_int_t kdtreetsquerybox(const kdtree &kdt, const kdtreerequestbuffer &buf, const real_1d_array &boxmin, const real_1d_array &boxmax, const xparams _xparams = xdefault);
void kdtreequeryresultsx(const kdtree &kdt, real_2d_array &x, const xparams _xparams = xdefault);
void kdtreequeryresultsxy(const kdtree &kdt, real_2d_array &xy, const xparams _xparams = xdefault);
void kdtreequeryresultstags(const kdtree &kdt, integer_1d_array &tags, const xparams _xparams = xdefault);
void kdtreequeryresultsdistances(const kdtree &kdt, real_1d_array &r, const xparams _xparams = xdefault);
void kdtreetsqueryresultsx(const kdtree &kdt, const kdtreerequestbuffer &buf, real_2d_array &x, const xparams _xparams = xdefault);
void kdtreetsqueryresultsxy(const kdtree &kdt, const kdtreerequestbuffer &buf, real_2d_array &xy, const xparams _xparams = xdefault);
void kdtreetsqueryresultstags(const kdtree &kdt, const kdtreerequestbuffer &buf, integer_1d_array &tags, const xparams _xparams = xdefault);
void kdtreetsqueryresultsdistances(const kdtree &kdt, const kdtreerequestbuffer &buf, real_1d_array &r, const xparams _xparams = xdefault);
void kdtreequeryresultsxi(const kdtree &kdt, real_2d_array &x, const xparams _xparams = xdefault);
void kdtreequeryresultsxyi(const kdtree &kdt, real_2d_array &xy, const xparams _xparams = xdefault);
void kdtreequeryresultstagsi(const kdtree &kdt, integer_1d_array &tags, const xparams _xparams = xdefault);
void kdtreequeryresultsdistancesi(const kdtree &kdt, real_1d_array &r, const xparams _xparams = xdefault);
} // end of namespace alglib

namespace alglib_impl {
// === HQRND Package ===
void hqrndrandomize(hqrndstate *state, ae_state *_state);
void hqrndseed(ae_int_t s1, ae_int_t s2, hqrndstate *state, ae_state *_state);
double hqrnduniformr(hqrndstate *state, ae_state *_state);
ae_int_t hqrnduniformi(hqrndstate *state, ae_int_t n, ae_state *_state);
double hqrndnormal(hqrndstate *state, ae_state *_state);
void hqrndnormalv(hqrndstate *state, ae_int_t n, RVector *x, ae_state *_state);
void hqrndnormalm(hqrndstate *state, ae_int_t m, ae_int_t n, RMatrix *x, ae_state *_state);
void hqrndunit2(hqrndstate *state, double *x, double *y, ae_state *_state);
void hqrndnormal2(hqrndstate *state, double *x1, double *x2, ae_state *_state);
double hqrndexponential(hqrndstate *state, double lambdav, ae_state *_state);
double hqrnddiscrete(hqrndstate *state, RVector *x, ae_int_t n, ae_state *_state);
double hqrndcontinuous(hqrndstate *state, RVector *x, ae_int_t n, ae_state *_state);
void _hqrndstate_init(void *_p, ae_state *_state, bool make_automatic);
void _hqrndstate_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic);
void _hqrndstate_clear(void *_p);
void _hqrndstate_destroy(void *_p);

// === XDEBUG Package ===
void xdebuginitrecord1(xdebugrecord1 *rec1, ae_state *_state);
ae_int_t xdebugb1count(BVector *a, ae_state *_state);
void xdebugb1not(BVector *a, ae_state *_state);
void xdebugb1appendcopy(BVector *a, ae_state *_state);
void xdebugb1outeven(ae_int_t n, BVector *a, ae_state *_state);
ae_int_t xdebugi1sum(ZVector *a, ae_state *_state);
void xdebugi1neg(ZVector *a, ae_state *_state);
void xdebugi1appendcopy(ZVector *a, ae_state *_state);
void xdebugi1outeven(ae_int_t n, ZVector *a, ae_state *_state);
double xdebugr1sum(RVector *a, ae_state *_state);
void xdebugr1neg(RVector *a, ae_state *_state);
void xdebugr1appendcopy(RVector *a, ae_state *_state);
void xdebugr1outeven(ae_int_t n, RVector *a, ae_state *_state);
ae_complex xdebugc1sum(CVector *a, ae_state *_state);
void xdebugc1neg(CVector *a, ae_state *_state);
void xdebugc1appendcopy(CVector *a, ae_state *_state);
void xdebugc1outeven(ae_int_t n, CVector *a, ae_state *_state);
ae_int_t xdebugb2count(BMatrix *a, ae_state *_state);
void xdebugb2not(BMatrix *a, ae_state *_state);
void xdebugb2transpose(BMatrix *a, ae_state *_state);
void xdebugb2outsin(ae_int_t m, ae_int_t n, BMatrix *a, ae_state *_state);
ae_int_t xdebugi2sum(ZMatrix *a, ae_state *_state);
void xdebugi2neg(ZMatrix *a, ae_state *_state);
void xdebugi2transpose(ZMatrix *a, ae_state *_state);
void xdebugi2outsin(ae_int_t m, ae_int_t n, ZMatrix *a, ae_state *_state);
double xdebugr2sum(RMatrix *a, ae_state *_state);
void xdebugr2neg(RMatrix *a, ae_state *_state);
void xdebugr2transpose(RMatrix *a, ae_state *_state);
void xdebugr2outsin(ae_int_t m, ae_int_t n, RMatrix *a, ae_state *_state);
ae_complex xdebugc2sum(CMatrix *a, ae_state *_state);
void xdebugc2neg(CMatrix *a, ae_state *_state);
void xdebugc2transpose(CMatrix *a, ae_state *_state);
void xdebugc2outsincos(ae_int_t m, ae_int_t n, CMatrix *a, ae_state *_state);
double xdebugmaskedbiasedproductsum(ae_int_t m, ae_int_t n, RMatrix *a, RMatrix *b, BMatrix *c, ae_state *_state);
void _xdebugrecord1_init(void *_p, ae_state *_state, bool make_automatic);
void _xdebugrecord1_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic);
void _xdebugrecord1_clear(void *_p);
void _xdebugrecord1_destroy(void *_p);

// === NEARESTNEIGHBOR Package ===
void kdtreebuild(RMatrix *xy, ae_int_t n, ae_int_t nx, ae_int_t ny, ae_int_t normtype, kdtree *kdt, ae_state *_state);
void kdtreebuildtagged(RMatrix *xy, ZVector *tags, ae_int_t n, ae_int_t nx, ae_int_t ny, ae_int_t normtype, kdtree *kdt, ae_state *_state);
void kdtreecreaterequestbuffer(kdtree *kdt, kdtreerequestbuffer *buf, ae_state *_state);
ae_int_t kdtreequeryknn(kdtree *kdt, RVector *x, ae_int_t k, bool selfmatch, ae_state *_state);
ae_int_t kdtreetsqueryknn(kdtree *kdt, kdtreerequestbuffer *buf, RVector *x, ae_int_t k, bool selfmatch, ae_state *_state);
ae_int_t kdtreequeryrnn(kdtree *kdt, RVector *x, double r, bool selfmatch, ae_state *_state);
ae_int_t kdtreequeryrnnu(kdtree *kdt, RVector *x, double r, bool selfmatch, ae_state *_state);
ae_int_t kdtreetsqueryrnn(kdtree *kdt, kdtreerequestbuffer *buf, RVector *x, double r, bool selfmatch, ae_state *_state);
ae_int_t kdtreetsqueryrnnu(kdtree *kdt, kdtreerequestbuffer *buf, RVector *x, double r, bool selfmatch, ae_state *_state);
ae_int_t kdtreequeryaknn(kdtree *kdt, RVector *x, ae_int_t k, bool selfmatch, double eps, ae_state *_state);
ae_int_t kdtreetsqueryaknn(kdtree *kdt, kdtreerequestbuffer *buf, RVector *x, ae_int_t k, bool selfmatch, double eps, ae_state *_state);
ae_int_t kdtreequerybox(kdtree *kdt, RVector *boxmin, RVector *boxmax, ae_state *_state);
ae_int_t kdtreetsquerybox(kdtree *kdt, kdtreerequestbuffer *buf, RVector *boxmin, RVector *boxmax, ae_state *_state);
void kdtreequeryresultsx(kdtree *kdt, RMatrix *x, ae_state *_state);
void kdtreequeryresultsxy(kdtree *kdt, RMatrix *xy, ae_state *_state);
void kdtreequeryresultstags(kdtree *kdt, ZVector *tags, ae_state *_state);
void kdtreequeryresultsdistances(kdtree *kdt, RVector *r, ae_state *_state);
void kdtreetsqueryresultsx(kdtree *kdt, kdtreerequestbuffer *buf, RMatrix *x, ae_state *_state);
void kdtreetsqueryresultsxy(kdtree *kdt, kdtreerequestbuffer *buf, RMatrix *xy, ae_state *_state);
void kdtreetsqueryresultstags(kdtree *kdt, kdtreerequestbuffer *buf, ZVector *tags, ae_state *_state);
void kdtreetsqueryresultsdistances(kdtree *kdt, kdtreerequestbuffer *buf, RVector *r, ae_state *_state);
void kdtreequeryresultsxi(kdtree *kdt, RMatrix *x, ae_state *_state);
void kdtreequeryresultsxyi(kdtree *kdt, RMatrix *xy, ae_state *_state);
void kdtreequeryresultstagsi(kdtree *kdt, ZVector *tags, ae_state *_state);
void kdtreequeryresultsdistancesi(kdtree *kdt, RVector *r, ae_state *_state);
void kdtreeexplorebox(kdtree *kdt, RVector *boxmin, RVector *boxmax, ae_state *_state);
void kdtreeexplorenodetype(kdtree *kdt, ae_int_t node, ae_int_t *nodetype, ae_state *_state);
void kdtreeexploreleaf(kdtree *kdt, ae_int_t node, RMatrix *xy, ae_int_t *k, ae_state *_state);
void kdtreeexploresplit(kdtree *kdt, ae_int_t node, ae_int_t *d, double *s, ae_int_t *nodele, ae_int_t *nodege, ae_state *_state);
void kdtreealloc(ae_serializer *s, kdtree *tree, ae_state *_state);
void kdtreeserialize(ae_serializer *s, kdtree *tree, ae_state *_state);
void kdtreeunserialize(ae_serializer *s, kdtree *tree, ae_state *_state);
void _kdtreerequestbuffer_init(void *_p, ae_state *_state, bool make_automatic);
void _kdtreerequestbuffer_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic);
void _kdtreerequestbuffer_clear(void *_p);
void _kdtreerequestbuffer_destroy(void *_p);
void _kdtree_init(void *_p, ae_state *_state, bool make_automatic);
void _kdtree_init_copy(void *_dst, void *_src, ae_state *_state, bool make_automatic);
void _kdtree_clear(void *_p);
void _kdtree_destroy(void *_p);
} // end of namespace alglib_impl

#endif // OnceOnly
