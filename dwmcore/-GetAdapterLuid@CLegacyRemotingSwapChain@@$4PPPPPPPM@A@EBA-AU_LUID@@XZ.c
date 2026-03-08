/*
 * XREFs of ?GetAdapterLuid@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011D450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacyRemotingSwapChain::GetAdapterLuid(__int64 a1)
{
  return CLegacyRemotingSwapChain::GetAdapterLuid((CLegacyRemotingSwapChain *)(a1 - *(int *)(a1 - 4)));
}
