/*
 * XREFs of UsbhPortResumeFailed @ 0x1C004D050
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSignalResumeEvent @ 0x1C001B0E8 (UsbhSignalResumeEvent.c)
 *     UsbhSS_SignalPdoWake @ 0x1C001B37C (UsbhSS_SignalPdoWake.c)
 *     UsbhWait @ 0x1C002D834 (UsbhWait.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhPortResumeFailed(_LIST_ENTRY *a1, __int64 a2, _LIST_ENTRY *a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x26u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v7);
  }
  Log((__int64)a1, 1024, 1884443425, a2, 0LL);
  UsbhException((__int64)a1, *(_WORD *)(a2 + 4), 0x81u, 0LL, 0, 0, 0, usbfile_busfunc_c, 2448, 0);
  UsbhWait((__int64)a1, 0xAu);
  UsbhSignalResumeEvent((__int64)a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}
