/*
 * XREFs of ?Release@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAKXZ @ 0x18011AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplaySwapChain::Release(__int64 a1)
{
  return CConversionSwapChain::Release((CConversionSwapChain *)(a1 - *(int *)(a1 - 4) - 528));
}
