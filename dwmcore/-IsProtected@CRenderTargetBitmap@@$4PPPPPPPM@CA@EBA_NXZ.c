/*
 * XREFs of ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18011FC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsProtected(__int64 a1)
{
  return CRenderTargetBitmap::IsProtected((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32));
}
