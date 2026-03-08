/*
 * XREFs of ??1CMesh2DEffect@@MEAA@XZ @ 0x1802BB38C
 * Callers:
 *     ??_GCMesh2DEffect@@MEAAPEAXI@Z @ 0x1802BB438 (--_GCMesh2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMesh2DEffect::~CMesh2DEffect(CMesh2DEffect *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CMesh2DEffect::`vftable'{for `ID2D1EffectImpl'};
  *((_QWORD *)this + 1) = &CMesh2DEffect::`vftable'{for `ID2D1DrawTransform'};
  *((_QWORD *)this + 2) = &CMesh2DEffect::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  operator delete(*((void **)this + 21));
}
