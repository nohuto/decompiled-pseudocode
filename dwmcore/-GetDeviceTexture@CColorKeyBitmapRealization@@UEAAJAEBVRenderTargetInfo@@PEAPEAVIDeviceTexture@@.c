/*
 * XREFs of ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180131790
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033A40 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetDeviceTexture(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  int CachedTexture; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  CachedTexture = CD2DBitmapCache::GetCachedTexture((CColorKeyBitmapRealization *)((char *)this - 152), a2, a3, a4);
  v6 = CachedTexture;
  if ( CachedTexture < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CachedTexture, 0x8Eu, 0LL);
  return v6;
}
