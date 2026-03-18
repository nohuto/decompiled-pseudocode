/*
 * XREFs of UsbhDropDevice @ 0x1C004C208
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset1DropDevice @ 0x1C004D590 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004D680 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset2DropDevice @ 0x1C004DB80 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004DC70 (UsbhReset2DropDeviceTimeout.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000FB0C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhSignalDriverResetEvent @ 0x1C001DF64 (UsbhSignalDriverResetEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0035D6C (UsbhAssertBusLock.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003A55C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C104 (UsbhBusUnlatchPdo.c)
 */

void __fastcall UsbhDropDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  int v7; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v7);
  }
  Log(a1, 1024, 1883525712, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhAssertBusLock(a1);
  UsbhSignalDriverResetEvent(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhBusUnlatchPdo(a1, a3, a2, v6, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
}
