/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802639D0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800F85F0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInf.c)
 * Callees:
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18001E580 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800D2660 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180264054 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 (__fastcall ***this)(char *),
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  char v8; // al
  CDxHandleAdvancedDirectFlipBitmapRealization *v9; // rcx
  int CachedBitmap; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int updated; // eax
  __int64 v14; // rcx
  int D2DBitmap; // eax
  __int64 v16; // rcx

  *a3 = 0LL;
  v8 = (**(this - 14))((char *)this - 112);
  v9 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(this - 60);
  if ( v8 )
  {
    updated = CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(v9);
    v12 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, 0x97u, 0LL);
    }
    else
    {
      D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(*(this - 28) + 30), a2, a3, a4);
      v12 = D2DBitmap;
      if ( D2DBitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, D2DBitmap, 0x9Bu, 0LL);
    }
  }
  else
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v9, a2, a3, a4);
    v12 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, CachedBitmap, 0x93u, 0LL);
  }
  return v12;
}
