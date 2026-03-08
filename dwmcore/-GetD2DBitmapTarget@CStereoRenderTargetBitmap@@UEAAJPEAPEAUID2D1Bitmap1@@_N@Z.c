/*
 * XREFs of ?GetD2DBitmapTarget@CStereoRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B2730
 * Callers:
 *     ?GetD2DBitmapTarget@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011F790 (-GetD2DBitmapTarget@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStereoRenderTargetBitmap::GetD2DBitmapTarget(
        CRenderTargetBitmap *this,
        struct ID2D1Bitmap1 **a2,
        char a3)
{
  return CRenderTargetBitmap::GetD2DBitmapTarget(this, a2, a3);
}
