/*
 * XREFs of ??1CoordMap@@QEAA@XZ @ 0x180030984
 * Callers:
 *     ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x180030840 (--1CNineGridDrawListBrush@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CoordMap::~CoordMap(CoordMap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  CoordMap *v4; // rcx
  __int64 v5; // rax
  CoordMap *v6; // rcx
  CoordMap *v7; // rcx
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 47);
  v3 = (v2 - *((_QWORD *)this + 46)) >> 4;
  if ( v3 )
    *((_QWORD *)this + 47) = v2 - 16 * v3;
  v4 = (CoordMap *)*((_QWORD *)this + 46);
  *((_QWORD *)this + 46) = 0LL;
  if ( v4 == (CoordMap *)((char *)this + 392) )
    v4 = 0LL;
  operator delete(v4);
  v5 = (__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 4;
  if ( v5 )
    *((_QWORD *)this + 24) -= 16 * v5;
  v6 = (CoordMap *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v6 == (CoordMap *)((char *)this + 208) )
    v6 = 0LL;
  operator delete(v6);
  v7 = *(CoordMap **)this;
  v8 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
  if ( v8 )
    *((_QWORD *)this + 1) -= 16 * v8;
  *(_QWORD *)this = 0LL;
  if ( v7 == (CoordMap *)((char *)this + 24) )
    v7 = 0LL;
  operator delete(v7);
}
