/*
 * XREFs of ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x18008B7B0
 * Callers:
 *     ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1801C0FD0 (-GetClearMode@CLegacyStereoRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008B840 (-GetPixelFormatInfo@CLegacyRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18008B894 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetClearMode(__int64 a1)
{
  unsigned int v2; // ebx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  if ( *(_BYTE *)(a1 + 140)
    || !*(_BYTE *)(a1 + 18421)
    || *(_DWORD *)(CLegacyRenderTarget::GetPixelFormatInfo(a1 + 18728, v4) + 4) == 1 )
  {
    v2 = 2;
  }
  if ( (int)COverlayContext::GetEffectiveDirectFlipMode(a1 + 200) >= 3 )
    return 0;
  return v2;
}
