/*
 * XREFs of ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B290C
 * Callers:
 *     ?GetD2DBitmap@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801318F0 (-GetD2DBitmap@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802ACDF0 (-GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802ADE10 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AE9F0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AF338 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AFC40 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B2B8C (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::GetCachedBitmap(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int BitmapInternal; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  volatile signed __int32 *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  *a3 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v15);
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(
                     (__int64)this,
                     *(CSecondaryD2DBitmap **)a2,
                     *((_DWORD *)a2 + 2),
                     *((_BYTE *)a2 + 20),
                     &v15);
  v11 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapInternal, 0x76u, 0LL);
  }
  else
  {
    LOBYTE(v10) = a4;
    v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v15 + 32LL))(
            v15,
            a3,
            v10);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x78u, 0LL);
  }
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v15);
  return v11;
}
