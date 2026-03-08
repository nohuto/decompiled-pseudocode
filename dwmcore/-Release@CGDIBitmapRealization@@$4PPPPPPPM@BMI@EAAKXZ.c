/*
 * XREFs of ?Release@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ @ 0x18011E490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDIBitmapRealization::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 456));
}
