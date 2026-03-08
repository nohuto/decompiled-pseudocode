/*
 * XREFs of ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802ADE10
 * Callers:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011E610 (-GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011F770 (-GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011FB10 (-GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AE9D0 (-GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AE9F0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B08B0 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x1802AE068 (-ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B290C (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmap(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  CD2DBitmapCache *v4; // r14
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int CachedBitmap; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  *a3 = 0LL;
  v4 = (CRenderTargetBitmap *)((char *)this - 240);
  v9 = CRenderTargetBitmap::ValidateRenderTargetInfo((CRenderTargetBitmap *)((char *)this - 240), a2);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA3u, 0LL);
  }
  else if ( *((_BYTE *)this - 96) )
  {
    LOBYTE(v11) = a4;
    v15 = (*(__int64 (__fastcall **)(char *, struct ID2D1Bitmap1 **, __int64))(*((_QWORD *)this - 15) + 72LL))(
            (char *)this - 120,
            a3,
            v11);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xADu, 0LL);
  }
  else
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v4, a2, a3, a4);
    v12 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CachedBitmap, 0xA9u, 0LL);
  }
  return v12;
}
