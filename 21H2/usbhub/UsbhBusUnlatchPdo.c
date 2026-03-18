/*
 * XREFs of UsbhBusUnlatchPdo @ 0x1C004C104
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhWaitConnect @ 0x1C0019D60 (UsbhWaitConnect.c)
 *     UsbhRequestPortSuspend @ 0x1C001A734 (UsbhRequestPortSuspend.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001BF60 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelEnumeration @ 0x1C001EB50 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Disable @ 0x1C0033B7C (UsbhPCE_Disable.c)
 *     UsbhDropDevice @ 0x1C004C208 (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C004CDA0 (UsbhPortDisconnect.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDerefPdo @ 0x1C00108A0 (UsbhDerefPdo.c)
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
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a3 + 416) = 0;
    Log(a1, 1024, 1970032690, a2, a3);
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  }
}
