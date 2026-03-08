/*
 * XREFs of ?AddRef@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ @ 0x18011C550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacyStereoSwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 360));
}
