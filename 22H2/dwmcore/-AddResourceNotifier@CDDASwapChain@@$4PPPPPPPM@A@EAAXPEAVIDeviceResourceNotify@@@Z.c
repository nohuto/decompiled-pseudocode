/*
 * XREFs of ?AddResourceNotifier@CDDASwapChain@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F7850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDDASwapChain::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDDASwapChain::AddResourceNotifier((CDDASwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
