/*
 * XREFs of UsbhWait @ 0x1C002E204
 * Callers:
 *     UsbhCancelResetTimeout @ 0x1C00015A0 (UsbhCancelResetTimeout.c)
 *     UsbhInitializeDevice @ 0x1C0002778 (UsbhInitializeDevice.c)
 *     UsbhReset1Complete @ 0x1C0002B20 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002FD00 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034FA8 (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003CB44 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C003D0C8 (UsbhHardReset_Action.c)
 *     UsbhPortConnect @ 0x1C004D100 (UsbhPortConnect.c)
 *     UsbhPortResumeFailed @ 0x1C004D940 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRawWait @ 0x1C0019670 (UsbhRawWait.c)
 */

void __fastcall UsbhWait(__int64 a1, unsigned int a2)
{
  int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  UsbhRawWait(v2);
}
