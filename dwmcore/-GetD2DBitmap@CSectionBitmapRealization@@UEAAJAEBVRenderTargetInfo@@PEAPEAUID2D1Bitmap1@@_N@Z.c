/*
 * XREFs of ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B2B8C
 * Callers:
 *     ?GetD2DBitmap@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011D990 (-GetD2DBitmap@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitm.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011D9B0 (-GetD2DBitmap@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bit.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@$4PPPPPPPM@EA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011DE70 (-GetD2DBitmap@CSectionBitmapRealization@@$4PPPPPPPM@EA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bit.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B290C (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetD2DBitmap(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  CD2DBitmapCache *v4; // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int CachedBitmap; // eax
  __int64 v13; // rcx

  *a3 = 0LL;
  v4 = (CSectionBitmapRealization *)((char *)this - 456);
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 57) + 64LL))((char *)this - 456);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180382DB8, 2u, v9, 0x4Fu, 0LL);
  }
  else if ( *((_QWORD *)this - 14) )
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v4, a2, a3, a4);
    v11 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180382DB8, 2u, CachedBitmap, 0x55u, 0LL);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v11;
}
