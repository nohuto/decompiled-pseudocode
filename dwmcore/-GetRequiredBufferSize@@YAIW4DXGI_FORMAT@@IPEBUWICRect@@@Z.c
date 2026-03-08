/*
 * XREFs of ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800A6DF4
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1800A5850 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A6C60 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802AD700 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall GetRequiredBufferSize(int a1, __int64 a2, const struct WICRect *a3)
{
  __int64 result; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v5; // r8
  int v6; // r9d
  int v7; // r10d

  result = 0LL;
  if ( a3->Height )
  {
    PixelFormatSize = GetPixelFormatSize(a1);
    return (unsigned int)(v7 * (v6 - 1) + (*(_DWORD *)(v5 + 8) * PixelFormatSize + 7) / 8);
  }
  return result;
}
