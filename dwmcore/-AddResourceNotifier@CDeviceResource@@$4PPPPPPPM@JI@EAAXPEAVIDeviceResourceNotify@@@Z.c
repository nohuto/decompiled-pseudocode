/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011AA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDeviceResource::AddResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 152), a2);
}
