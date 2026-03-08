/*
 * XREFs of ?GetAdapterLuid@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011AA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDisplaySwapChain::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CDDisplaySwapChain::GetAdapterLuid((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
