/*
 * XREFs of UsbhReset2TimeoutBadEnable @ 0x1C004E8C0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C00367A4 (UsbhAssertBusLock.c)
 *     UsbhDisablePort @ 0x1C00377CC (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhReset2Timeout @ 0x1C004E6E0 (UsbhReset2Timeout.c)
 */

__int64 __fastcall UsbhReset2TimeoutBadEnable(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x19u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884447333, a2, 0LL);
  UsbhAssertBusLock(a1);
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x50u, 0LL, 0, -1, -1, usbfile_busfunc_c, 1230, 0);
  UsbhDisablePort(a1, a2);
  return UsbhReset2Timeout(a1, a2, a3);
}
