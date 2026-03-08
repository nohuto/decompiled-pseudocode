/*
 * XREFs of ?Release@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ @ 0x18011F470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 184));
}
