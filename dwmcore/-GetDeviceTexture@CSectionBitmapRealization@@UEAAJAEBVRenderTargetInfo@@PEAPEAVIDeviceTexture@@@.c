/*
 * XREFs of ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033950
 * Callers:
 *     ?GetDeviceTexture@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011D9D0 (-GetDeviceTexture@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDevi.c)
 *     ?GetDeviceTexture@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011D9F0 (-GetDeviceTexture@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDev.c)
 *     ?GetDeviceTexture@CSectionBitmapRealization@@$4PPPPPPPM@EA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011DE90 (-GetDeviceTexture@CSectionBitmapRealization@@$4PPPPPPPM@EA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDev.c)
 * Callees:
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033A40 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetDeviceTexture(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int CachedTexture; // eax
  unsigned int v11; // ecx

  *a3 = 0LL;
  v3 = (CSectionBitmapRealization *)((char *)this - 456);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 57) + 64LL))((char *)this - 456);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180338CD0, 2u, v7, 0x32u, 0LL);
  }
  else if ( *((_QWORD *)this - 14) )
  {
    CachedTexture = CD2DBitmapCache::GetCachedTexture(v3, a2, a3);
    v9 = CachedTexture;
    if ( CachedTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180338CD0, 2u, CachedTexture, 0x36u, 0LL);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v9;
}
