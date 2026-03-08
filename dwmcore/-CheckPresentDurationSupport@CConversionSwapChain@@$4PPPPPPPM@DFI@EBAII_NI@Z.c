/*
 * XREFs of ?CheckPresentDurationSupport@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAII_NI@Z @ 0x18011CD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::CheckPresentDurationSupport(__int64 a1)
{
  return CDDisplaySwapChain::CheckPresentDurationSupport((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4) - 856));
}
