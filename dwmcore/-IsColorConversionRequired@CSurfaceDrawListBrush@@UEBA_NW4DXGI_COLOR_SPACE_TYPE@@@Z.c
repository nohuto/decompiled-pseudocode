/*
 * XREFs of ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801F9160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800E5D4C (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(
        CSurfaceDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo((__int64)this + 56, (__int64)v3) + 8) != a2;
}
