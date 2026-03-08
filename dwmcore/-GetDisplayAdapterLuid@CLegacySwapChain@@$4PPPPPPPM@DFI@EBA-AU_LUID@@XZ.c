/*
 * XREFs of ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA?AU_LUID@@XZ @ 0x18011CE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetDisplayAdapterLuid(__int64 a1, _QWORD *a2)
{
  return COverlaySwapChainBase::GetDisplayAdapterLuid((COverlaySwapChainBase *)(a1 - *(int *)(a1 - 4) - 856), a2);
}
