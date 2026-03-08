/*
 * XREFs of ?RemoveResourceNotifier@CDDASwapChain@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011D3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDDASwapChain::RemoveResourceNotifier(__int64 a1, const struct IDeviceResourceNotify *a2)
{
  CDDASwapChain::RemoveResourceNotifier((CDDASwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
