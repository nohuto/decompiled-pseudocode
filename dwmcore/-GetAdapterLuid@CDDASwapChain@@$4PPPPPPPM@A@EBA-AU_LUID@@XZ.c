/*
 * XREFs of ?GetAdapterLuid@CDDASwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011D2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDASwapChain::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CDDASwapChain::GetAdapterLuid((CDDASwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
