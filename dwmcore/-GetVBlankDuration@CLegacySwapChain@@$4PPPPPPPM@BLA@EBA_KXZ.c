/*
 * XREFs of ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_KXZ @ 0x18011B7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacySwapChain::GetVBlankDuration(__int64 a1)
{
  return CLegacySwapChain::GetVBlankDuration((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 432));
}
