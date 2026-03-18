/*
 * XREFs of CtxDisplayIOCtl @ 0x1C0202F7C
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C01CE200 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawRectangle @ 0x1C01F5AA8 (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C0203084 (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02DD408 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  int v6; // edx
  __int64 RemoteContext; // rdi
  __int64 Timer_high; // r8
  __int64 RemoteHDEV; // rax

  RemoteContext = GreGetRemoteContext();
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 4) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(Timer_high) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      Timer_high,
      27,
      4,
      3,
      27,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40), Timer_high);
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
