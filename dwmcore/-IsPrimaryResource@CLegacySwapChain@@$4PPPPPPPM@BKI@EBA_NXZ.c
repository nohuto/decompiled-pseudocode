/*
 * XREFs of ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x18011D010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsPrimaryResource(__int64 a1)
{
  return CDDisplaySwapChain::IsPrimaryResource((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4) - 424));
}
