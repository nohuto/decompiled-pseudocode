/*
 * XREFs of ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_KXZ @ 0x180120A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacySwapChain::GetVBlankDuration(__int64 a1)
{
  return CLegacySwapChain::GetVBlankDuration((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 440));
}
