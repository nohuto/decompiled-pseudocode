/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ @ 0x18011E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(__int64 a1)
{
  CRenderTargetBitmap::MarkFullDirty((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4)));
}
