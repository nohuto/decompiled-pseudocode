/*
 * XREFs of UsbhLogSignalDriverResetEvent @ 0x1C0001E74
 * Callers:
 *     UsbhSignalDriverResetEvent @ 0x1C0001DA8 (UsbhSignalDriverResetEvent.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C00039F8 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0010600 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C001F8E0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C0033BAC (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhLogSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  int v3; // edi
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // bl

  v3 = a1;
  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 4944);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  Log(v3, 16, 1685213779, *(_DWORD *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  KeSetEvent((PRKEVENT)(a2 + 824), 0, 0);
  KeReleaseSpinLock(v4, v5);
  return 1LL;
}
