/*
 * XREFs of ?IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011E710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsPrimaryResource(__int64 a1)
{
  return CRenderTargetBitmap::IsPrimaryResource((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4)));
}
