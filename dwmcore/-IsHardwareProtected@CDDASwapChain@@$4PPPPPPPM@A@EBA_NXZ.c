/*
 * XREFs of ?IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011D330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDASwapChain::IsHardwareProtected(__int64 a1)
{
  return CDDASwapChain::IsHardwareProtected((CDDASwapChain *)(a1 - *(int *)(a1 - 4)));
}
