/*
 * XREFs of ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CD2DResource::AddResourceNotifier((CD2DResource *)(a1 - *(int *)(a1 - 4)), a2);
}
