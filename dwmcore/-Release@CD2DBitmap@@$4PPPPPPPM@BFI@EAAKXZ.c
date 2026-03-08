/*
 * XREFs of ?Release@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x18011F670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 344));
}
