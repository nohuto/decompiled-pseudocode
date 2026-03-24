/*
 * XREFs of ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F57D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::IsValid(__int64 a1)
{
  return CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4)));
}
