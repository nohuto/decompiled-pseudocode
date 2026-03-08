/*
 * XREFs of ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x18011C890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetVidPnSourceId(__int64 a1)
{
  return COverlaySwapChainBase::GetVidPnSourceId((COverlaySwapChainBase *)(a1 - *(int *)(a1 - 4) - 440));
}
