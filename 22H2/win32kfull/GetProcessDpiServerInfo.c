/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C00E0AF4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C00E0AC8 (GetDPIServerInfo.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0044E58 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  int v1; // edx

  v1 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v1 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi(v1);
}
