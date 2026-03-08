/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800F4634
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800A89E0 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?SetDirtyFromAccumulation@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@Z @ 0x1801C3814 (-SetDirtyFromAccumulation@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180042DF0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180046020 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1800F46E8 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  HGDIOBJ ho; // [rsp+20h] [rbp-78h] BYREF
  int *v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+38h] [rbp-60h] BYREF

  ho = 0LL;
  if ( (int)CRedirectedGDISurface::GetDirtyRegionFromAccum(*((CRedirectedGDISurface **)this + 15), (HRGN *)&ho) >= 0 )
  {
    if ( !ho )
      return;
    v4 = 0;
    v3 = &v4;
    CRegion::SetHRGN((CRegion *)&v3, (HRGN)ho);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v3, *((_BYTE *)this + 144));
    *((_BYTE *)this + 144) = 0;
    FastRegion::CRegion::FreeMemory((void **)&v3);
  }
  if ( ho )
    DeleteObject(ho);
}
