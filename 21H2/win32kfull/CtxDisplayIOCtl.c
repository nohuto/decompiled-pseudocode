/*
 * XREFs of CtxDisplayIOCtl @ 0x1C021FADC
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C01F22C0 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawRectangle @ 0x1C0211BD4 (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C021FBE4 (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02BF1E0 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  int v6; // edx
  __int64 RemoteContext; // rdi
  __int64 v8; // r8
  __int64 RemoteHDEV; // rax

  RemoteContext = GreGetRemoteContext();
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v8,
      27,
      4,
      9,
      27,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40), v8);
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
