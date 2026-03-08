/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0038210
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD4C (UsbDevice_SetDeviceDisabled.c)
 *     Controller_InitiateRecovery @ 0x1C0033990 (Controller_InitiateRecovery.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0037CFC (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0078AF0 (Controller_TelemetryAddControllerData.c)
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
