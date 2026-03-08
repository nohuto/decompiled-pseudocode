/*
 * XREFs of UsbhPortResumeComplete @ 0x1C001B070
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRawWait @ 0x1C0019670 (UsbhRawWait.c)
 *     UsbhSS_SignalPdoWake @ 0x1C001A04C (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C001B710 (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rax

  v6 = 10;
  v7 = PdoExt(a3);
  if ( (v7[706] & 0x80u) != 0 )
    v6 = *(unsigned __int8 *)(*((_QWORD *)v7 + 357) + 4LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      37,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884443469, a2, 0LL);
  Log(a1, 8, 2002872692, v6, 0LL);
  UsbhRawWait(v6);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}
