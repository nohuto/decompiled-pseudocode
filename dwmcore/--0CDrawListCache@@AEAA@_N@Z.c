/*
 * XREFs of ??0CDrawListCache@@AEAA@_N@Z @ 0x18007B6DC
 * Callers:
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18007B614 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CDrawListCache *__fastcall CDrawListCache::CDrawListCache(CDrawListCache *this, char a2)
{
  struct CComposition *v2; // r8
  __int64 v3; // rax
  CDrawListCache *result; // rax

  v2 = g_pComposition;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDrawListCache::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *((_QWORD *)this + 2) = &CDrawListCache::`vftable'{for `IDeviceResourceNotify'};
  v3 = 0LL;
  if ( v2 )
    v3 = *((_QWORD *)v2 + 62);
  *((_QWORD *)this + 3) = v3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 2LL;
  *((_QWORD *)this + 7) = 2LL;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 50) = 0;
  *((_BYTE *)this + 102) = 0;
  *((_BYTE *)this + 103) = a2;
  return result;
}
