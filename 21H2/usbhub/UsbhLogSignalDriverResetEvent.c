/*
 * XREFs of UsbhLogSignalDriverResetEvent @ 0x1C001E030
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000CF9C (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000D6AC (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0012D50 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhSignalDriverResetEvent @ 0x1C001DF64 (UsbhSignalDriverResetEvent.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00331D8 (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 */

__int64 __fastcall UsbhLogSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // bl

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  Log(a1, 16, 1685213779, *(int *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  KeSetEvent((PRKEVENT)(a2 + 824), 0, 0);
  KeReleaseSpinLock(v4, v5);
  return 1LL;
}
