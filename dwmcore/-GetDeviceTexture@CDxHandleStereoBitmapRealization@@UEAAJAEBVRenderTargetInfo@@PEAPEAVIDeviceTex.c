/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AFD14
 * Callers:
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011EB50 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033A40 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802AFB90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z @ 0x1802AFFDC (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        struct CD2DBitmap **this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r9
  int CachedTexture; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx

  *a3 = 0LL;
  v3 = (CD2DBitmapCache *)(this - 71);
  v7 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(this - 71);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x50u, 0LL);
  }
  else if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v3, *((unsigned int *)a2 + 3)) )
  {
    CachedTexture = CD2DBitmapCache::GetCachedTexture(v3, a2, a3, v10);
    v9 = CachedTexture;
    if ( CachedTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CachedTexture, 0x54u, 0LL);
  }
  else
  {
    v13 = CD2DBitmapCache::GetCachedTexture((CD2DBitmapCache *)(this - 20), a2, a3, v10);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x59u, 0LL);
  }
  return v9;
}
