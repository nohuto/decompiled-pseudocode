/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0036650
 * Callers:
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C003613C (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0075284 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetUsbDeviceHandleArray(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    return *(_QWORD *)(a1 + 24);
  else
    return *(_QWORD *)(a1 + 72);
}
