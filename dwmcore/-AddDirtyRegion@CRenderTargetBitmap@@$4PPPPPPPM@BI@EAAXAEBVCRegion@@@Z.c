/*
 * XREFs of ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXAEBVCRegion@@@Z @ 0x18011F6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::AddDirtyRegion(__int64 a1, const struct CRegion *a2)
{
  CRenderTargetBitmap::AddDirtyRegion((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 24), a2);
}
