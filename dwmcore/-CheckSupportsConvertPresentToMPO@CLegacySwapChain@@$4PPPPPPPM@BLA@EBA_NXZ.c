/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ @ 0x18011B5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckSupportsConvertPresentToMPO(__int64 a1)
{
  return COverlaySwapChainBase::CheckSupportsConvertPresentToMPO((COverlaySwapChainBase *)(a1 - *(int *)(a1 - 4) - 432));
}
