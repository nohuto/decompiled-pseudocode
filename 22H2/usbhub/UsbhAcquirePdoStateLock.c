/*
 * XREFs of UsbhAcquirePdoStateLock @ 0x1C001CDA8
 * Callers:
 *     UsbhWaitConnect @ 0x1C000ABD0 (UsbhWaitConnect.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhFdoResetPdoPort @ 0x1C0031320 (UsbhFdoResetPdoPort.c)
 *     UsbhCycleDevicePort @ 0x1C0037B3C (UsbhCycleDevicePort.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003AA6C (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C003ABC8 (UsbhSyncResumeDeviceInternal.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003B0FC (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003B290 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003B41C (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003B5CC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003B86C (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C003B970 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003BADC (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003BD38 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhSetPdo_AllowIo @ 0x1C003E058 (UsbhSetPdo_AllowIo.c)
 *     UsbhSetEnumerationFailed @ 0x1C004F4D8 (UsbhSetEnumerationFailed.c)
 *     UsbhEtwRundown @ 0x1C005CC90 (UsbhEtwRundown.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall UsbhAcquirePdoStateLock(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax

  *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(a2 + 136) = 1;
  *(_DWORD *)(a2 + 92) = a3;
  *(_DWORD *)(a2 + 88) = 2018460752;
  qword_1C006C500 = a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
