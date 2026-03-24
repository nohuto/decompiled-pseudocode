/*
 * XREFs of ?AddRef@CLegacyRemotingSwapChain@@$4PPPPPPPM@OI@EAAKXZ @ 0x1800F7C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacyRemotingSwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 232));
}
