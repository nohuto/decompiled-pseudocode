/*
 * XREFs of CtxDisplayIOCtl @ 0x1C0226264
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C01F78F0 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     RemoteRedrawRectangle @ 0x1C021E58C (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C0226328 (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02C0848 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  int v6; // edx
  int v7; // ecx
  __int64 RemoteContext; // rdi
  __int64 RemoteHDEV; // rax

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(v7, v6, 9, 27, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
