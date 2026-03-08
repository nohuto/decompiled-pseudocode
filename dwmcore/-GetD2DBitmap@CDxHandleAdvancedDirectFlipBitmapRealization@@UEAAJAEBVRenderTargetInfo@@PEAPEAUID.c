/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AE9F0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011E890 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInf.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802ADE10 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AF138 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B290C (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 (__fastcall ***this)(char *),
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  char v8; // al
  CDxHandleAdvancedDirectFlipBitmapRealization *v9; // rcx
  int updated; // eax
  __int64 v11; // rcx
  unsigned int D2DBitmap; // ebx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]

  *a3 = 0LL;
  v8 = (**(this - 14))((char *)this - 112);
  v9 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(this - 64);
  if ( v8 )
  {
    updated = CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(v9);
    D2DBitmap = updated;
    if ( updated < 0 )
    {
      v15 = 117;
      goto LABEL_11;
    }
    v13 = (__int64)*(this - 28);
    if ( *(_BYTE *)(v13 + 152) )
    {
      D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(v13 + 240), a2, a3, a4);
      if ( (D2DBitmap & 0x80000000) == 0 )
        return D2DBitmap;
    }
    else
    {
      *a3 = 0LL;
      D2DBitmap = -2003292412;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D2DBitmap, 0x79u, 0LL);
    return D2DBitmap;
  }
  updated = CD2DBitmapCache::GetCachedBitmap(v9, a2, a3, a4);
  D2DBitmap = updated;
  if ( updated < 0 )
  {
    v15 = 113;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, v15, 0LL);
  }
  return D2DBitmap;
}
