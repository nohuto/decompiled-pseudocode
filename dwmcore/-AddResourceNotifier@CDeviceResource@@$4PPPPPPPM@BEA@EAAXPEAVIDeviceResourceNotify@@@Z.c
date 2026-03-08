/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011C570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDeviceResource::AddResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 320), a2);
}
