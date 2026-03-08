/*
 * XREFs of ?GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAPEAVIDeviceTarget@@XZ @ 0x18011C6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CLegacySwapChain::GetCurrentBackBuffer(__int64 a1)
{
  return CLegacySwapChain::GetCurrentBackBuffer((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 440));
}
