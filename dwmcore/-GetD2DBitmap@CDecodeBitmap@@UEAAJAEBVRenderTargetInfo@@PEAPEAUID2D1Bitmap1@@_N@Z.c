/*
 * XREFs of ?GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AE9D0
 * Callers:
 *     ?GetD2DBitmap@CDecodeBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011F2D0 (-GetD2DBitmap@CDecodeBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDecodeBitmap::GetD2DBitmap(
        CDecodeBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  if ( *((_BYTE *)this - 96) )
    return CRenderTargetBitmap::GetD2DBitmap((CDecodeBitmap *)((char *)this - 8), a2, a3, a4);
  *a3 = 0LL;
  return 2291674884LL;
}
