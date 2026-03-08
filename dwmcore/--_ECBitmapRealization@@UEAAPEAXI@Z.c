/*
 * XREFs of ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802ACA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032B7C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
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
