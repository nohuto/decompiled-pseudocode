/*
 * XREFs of UsbhSignalDriverResetEvent @ 0x1C0017FEC
 * Callers:
 *     UsbhDriverResetPort @ 0x1C00017D0 (UsbhDriverResetPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x1C0017E8C (UsbhBusConnectPdo.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00195F0 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0036CB8 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0037DEC (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003AA6C (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003B0FC (Usbh_BusPause_PdoEvent.c)
 *     UsbhDropDevice @ 0x1C004D614 (UsbhDropDevice.c)
 *     UsbhFailDriverResetPort @ 0x1C004D710 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C004E730 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C004F4D8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C00180B8 (UsbhLogSignalDriverResetEvent.c)
 */

void __fastcall UsbhSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r9
  KIRQL v6; // r10
  __int64 v7; // [rsp+20h] [rbp-18h]

  Log(a1, 16, 1685213745, a2, *(unsigned __int16 *)(a2 + 4));
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, v4) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v5 = *(int *)(a2 + 12);
    v7 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    Log(a1, 16, 1886479734, v5, v7);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
  }
}
