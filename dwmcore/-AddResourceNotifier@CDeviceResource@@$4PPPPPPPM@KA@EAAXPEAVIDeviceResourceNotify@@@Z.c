/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011E850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDeviceResource::AddResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 160), a2);
}
