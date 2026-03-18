/*
 * XREFs of ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802B01E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032C6C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F334 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::`vector deleting destructor'(CBitmapRealization *this, char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v4 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v4);
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
