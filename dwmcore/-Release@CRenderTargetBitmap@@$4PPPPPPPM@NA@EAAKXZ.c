/*
 * XREFs of ?Release@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x18011FCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 208));
}
