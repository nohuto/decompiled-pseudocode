/*
 * XREFs of ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18011F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetBitmap::IsHardwareProtected(__int64 a1)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 24));
}
