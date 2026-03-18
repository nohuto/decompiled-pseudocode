/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C00AB4FC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C00AB4C8 (GetDPIServerInfo.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C008A410 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_WORD *)(CurrentProcessWin32Process + 284) == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo(gpsi);
  else
    return GetDPIServerInfoForDpi(*(unsigned __int16 *)(CurrentProcessWin32Process + 284));
}
