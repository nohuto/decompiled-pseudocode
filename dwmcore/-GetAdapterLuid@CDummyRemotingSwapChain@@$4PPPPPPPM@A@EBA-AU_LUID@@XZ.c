/*
 * XREFs of ?GetAdapterLuid@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011B390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDummyRemotingSwapChain::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CDummyRemotingSwapChain::GetAdapterLuid((CDummyRemotingSwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
