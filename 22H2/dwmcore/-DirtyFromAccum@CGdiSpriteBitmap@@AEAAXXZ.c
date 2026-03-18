/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800F5274
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800A9100 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?SetDirtyFromAccumulation@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@Z @ 0x1801C6A44 (-SetDirtyFromAccumulation@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180042FC0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x1800461F0 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DFD90 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1800F5328 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
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
