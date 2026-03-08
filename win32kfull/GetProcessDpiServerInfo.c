/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C010C494
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00A1E90 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  int v2; // edx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v2 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
  if ( (_WORD)v2 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi(v2);
}
