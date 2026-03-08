/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011B4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDeviceResource::AddResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 312), a2);
}
