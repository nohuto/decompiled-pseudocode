/*
 * XREFs of ?AddRef@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAKXZ @ 0x18011B4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacySwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 352));
}
