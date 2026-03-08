/*
 * XREFs of ?SetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BLA@EAA_N_K_N@Z @ 0x18011BAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::SetVBlankDuration(__int64 a1, unsigned __int64 a2, bool a3)
{
  return CLegacySwapChain::SetVBlankDuration((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 432), a2, a3);
}
