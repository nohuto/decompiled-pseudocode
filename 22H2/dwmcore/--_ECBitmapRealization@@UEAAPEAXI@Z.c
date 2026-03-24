/*
 * XREFs of ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802620A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180064670 (--1CD2DBitmapCache@@MEAA@XZ.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::`vector deleting destructor'(CBitmapRealization *this, char a2)
{
  CRenderTargetBitmap *v4; // rcx

  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 32);
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
