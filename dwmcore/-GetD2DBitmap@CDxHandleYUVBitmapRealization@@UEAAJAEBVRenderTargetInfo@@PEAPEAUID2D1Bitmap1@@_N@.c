/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B08B0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011EDD0 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802ADE10 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B120C (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int D2DBitmap; // ebx
  __int64 v11; // rcx

  *a3 = 0LL;
  v8 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 456));
  D2DBitmap = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x130u, 0LL);
    return D2DBitmap;
  }
  v11 = *((_QWORD *)this - 21);
  if ( !*(_BYTE *)(v11 + 152) )
  {
    *a3 = 0LL;
    D2DBitmap = -2003292412;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, D2DBitmap, 0x134u, 0LL);
    return D2DBitmap;
  }
  D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(v11 + 240), a2, a3, a4);
  if ( (D2DBitmap & 0x80000000) != 0 )
    goto LABEL_6;
  return D2DBitmap;
}
