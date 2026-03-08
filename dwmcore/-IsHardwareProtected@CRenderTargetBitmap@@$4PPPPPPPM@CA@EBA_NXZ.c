/*
 * XREFs of ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18011FBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetBitmap::IsHardwareProtected(__int64 a1)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32));
}
