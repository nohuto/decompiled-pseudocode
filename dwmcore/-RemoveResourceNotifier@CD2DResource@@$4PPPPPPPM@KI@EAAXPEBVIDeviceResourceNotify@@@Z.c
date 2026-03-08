/*
 * XREFs of ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011C170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DResource::RemoveResourceNotifier(__int64 a1, const struct IDeviceResourceNotify *a2)
{
  CD2DResource::RemoveResourceNotifier((CD2DResource *)(a1 - *(int *)(a1 - 4) - 168), a2);
}
