/*
 * XREFs of ?GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAPEAVIDeviceTarget@@XZ @ 0x18011B670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CLegacySwapChain::GetCurrentBackBuffer(__int64 a1)
{
  return CLegacySwapChain::GetCurrentBackBuffer((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 432));
}
