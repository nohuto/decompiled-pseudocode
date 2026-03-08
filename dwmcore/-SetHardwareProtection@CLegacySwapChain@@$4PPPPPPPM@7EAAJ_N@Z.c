/*
 * XREFs of ?SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@7EAAJ_N@Z @ 0x18011CB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::SetHardwareProtection(__int64 a1, bool a2)
{
  return CLegacySwapChain::SetHardwareProtection((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 8), a2);
}
