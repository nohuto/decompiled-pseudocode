/*
 * XREFs of ?CheckPresentDurationSupport@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EBAII_NI@Z @ 0x18011C630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::CheckPresentDurationSupport(__int64 a1)
{
  return CDDisplaySwapChain::CheckPresentDurationSupport((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4) - 440));
}
