/*
 * XREFs of UsbhBusUnlatchPdo @ 0x1C004D510
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C00023E0 (UsbhCancelEnumeration.c)
 *     UsbhWaitConnect @ 0x1C000ABD0 (UsbhWaitConnect.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhRequestPortSuspend @ 0x1C0016130 (UsbhRequestPortSuspend.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00195F0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhPCE_Disable @ 0x1C0034EE0 (UsbhPCE_Disable.c)
 *     UsbhDropDevice @ 0x1C004D614 (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C004E1B0 (UsbhPortDisconnect.c)
 *     UsbhSetEnumerationFailed @ 0x1C004F4D8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDerefPdo @ 0x1C0003770 (UsbhDerefPdo.c)
 *     Log @ 0x1C000FD80 (Log.c)
 */

void __fastcall UsbhBusUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  KIRQL v9; // bl

  Log(a1, 1024, 1970032689, a2, a3);
  if ( a5 )
  {
    Log(a1, 1024, 1970032691, v8, a3);
    *(_DWORD *)(a3 + 416) = 0;
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_1C006C500 = (__int64)&dword_1C006C508;
    *(_DWORD *)(a3 + 416) = 0;
    Log(a1, 1024, 1970032690, a2, a3);
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
    qword_1C006C500 = 0LL;
    KeReleaseSpinLock(&HubG, v9);
  }
}
