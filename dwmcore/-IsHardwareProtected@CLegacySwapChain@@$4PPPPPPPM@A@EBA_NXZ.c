/*
 * XREFs of ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011B8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsHardwareProtected(__int64 a1)
{
  return CLegacySwapChain::IsHardwareProtected((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)));
}
