/*
 * XREFs of ?IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18011F8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsPrimaryResource(__int64 a1)
{
  return CRenderTargetBitmap::IsPrimaryResource((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 24));
}
