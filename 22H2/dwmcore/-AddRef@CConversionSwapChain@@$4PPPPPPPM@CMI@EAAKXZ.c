/*
 * XREFs of ?AddRef@CConversionSwapChain@@$4PPPPPPPM@CMI@EAAKXZ @ 0x1800F7400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CConversionSwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 712));
}
