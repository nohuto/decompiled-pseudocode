/*
 * XREFs of ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033A40
 * Callers:
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033950 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 *     ?GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033A30 (-GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180131790 (-GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AFD14 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetCachedTexture(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  struct IDeviceTexture *v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  int BitmapInternal; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  *a3 = 0LL;
  LOBYTE(a4) = *((_BYTE *)a2 + 20);
  v6 = *((unsigned int *)a2 + 2);
  v7 = *(_QWORD *)a2;
  v13 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(this, v7, v6, a4, &v13);
  v10 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapInternal, 0x60u, 0LL);
  }
  else
  {
    v11 = v13;
    v13 = 0LL;
    if ( v11 )
      v4 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v11 + 8) + 20LL) + v11 + 8);
    *a3 = v4;
  }
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v13);
  return v10;
}
