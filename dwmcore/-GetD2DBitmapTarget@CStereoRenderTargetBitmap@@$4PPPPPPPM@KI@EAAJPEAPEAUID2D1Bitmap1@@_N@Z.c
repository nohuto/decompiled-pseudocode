/*
 * XREFs of ?GetD2DBitmapTarget@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011F790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::GetD2DBitmapTarget(__int64 a1, struct ID2D1Bitmap1 **a2, bool a3)
{
  return CStereoRenderTargetBitmap::GetD2DBitmapTarget(
           (CStereoRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 168),
           a2,
           a3);
}
