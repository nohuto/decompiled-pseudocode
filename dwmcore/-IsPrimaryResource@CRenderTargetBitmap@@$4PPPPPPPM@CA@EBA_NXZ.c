/*
 * XREFs of ?IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18011FC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsPrimaryResource(__int64 a1)
{
  return CRenderTargetBitmap::IsPrimaryResource((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32));
}
