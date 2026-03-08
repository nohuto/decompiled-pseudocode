/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ @ 0x18011F430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(__int64 a1)
{
  CRenderTargetBitmap::MarkFullDirty((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 8));
}
