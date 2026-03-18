/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1C001518C
 * Callers:
 *     UsbhDriverResetPort @ 0x1C00017D0 (UsbhDriverResetPort.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0002648 (UsbhFreePortChangeQueueObject.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000B0E0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C00131B0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhBusConnectPdo @ 0x1C0017E8C (UsbhBusConnectPdo.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00195F0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C003453C (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0036CB8 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0037DEC (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003AA6C (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003B0FC (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C004D710 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C004E730 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C004F4D8 (UsbhSetEnumerationFailed.c)
 *     UsbhResetPortData @ 0x1C0058588 (UsbhResetPortData.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 */

void __fastcall UsbhSignalSyncDeviceResetPdo(__int64 a1, __int64 a2, int a3)
{
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // si
  PRKEVENT *v8; // rax

  v6 = (KSPIN_LOCK *)(FdoExt(a1) + 1292);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( a2 && *((_QWORD *)PdoExt(a2) + 108) )
  {
    PdoExt(a2)[218] = a3;
    Log(a1, 4, 1936287557, a2, 0LL);
    v8 = (PRKEVENT *)PdoExt(a2);
    KeSetEvent(v8[108], 0, 0);
  }
  KeReleaseSpinLock(v6, v7);
}
