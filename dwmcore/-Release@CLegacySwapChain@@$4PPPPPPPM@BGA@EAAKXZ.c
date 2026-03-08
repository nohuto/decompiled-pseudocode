/*
 * XREFs of ?Release@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAKXZ @ 0x18011B9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacySwapChain::Release(__int64 a1)
{
  return CConversionSwapChain::Release((CConversionSwapChain *)(a1 - *(int *)(a1 - 4) - 352));
}
