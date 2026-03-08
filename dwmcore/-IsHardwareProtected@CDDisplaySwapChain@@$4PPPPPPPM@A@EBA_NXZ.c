/*
 * XREFs of ?IsHardwareProtected@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011AAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplaySwapChain::IsHardwareProtected(__int64 a1)
{
  return CDDisplaySwapChain::IsHardwareProtected((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4)));
}
