/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1C000F168
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000CF9C (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000D6AC (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0012D50 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     UsbhDriverResetPort @ 0x1C001AF40 (UsbhDriverResetPort.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001BF60 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhBusConnectPdo @ 0x1C001DE04 (UsbhBusConnectPdo.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00331D8 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C00359FC (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0036B38 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003975C (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0039DEC (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C004C300 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C004D320 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 *     UsbhResetPortData @ 0x1C0056EB0 (UsbhResetPortData.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
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
