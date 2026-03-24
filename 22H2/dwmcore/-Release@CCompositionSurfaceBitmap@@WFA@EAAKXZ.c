/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800F4DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - 80));
}
