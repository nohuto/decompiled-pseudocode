/*
 * XREFs of ?AddRef@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAKXZ @ 0x18011CC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CConversionSwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 776));
}
