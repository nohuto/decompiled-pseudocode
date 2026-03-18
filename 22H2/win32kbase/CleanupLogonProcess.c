/*
 * XREFs of CleanupLogonProcess @ 0x1C00B1D00
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 *     ?CleanupWinlogonRpcHandle@@YAXXZ @ 0x1C00D03F8 (-CleanupWinlogonRpcHandle@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CleanupLogonProcess(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  HANDLE v4; // rcx
  char result; // al

  if ( a1 )
  {
    if ( gWinLogonRpcHandle )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 243LL);
  }
  else if ( gWinLogonRpcHandle )
  {
    CleanupWinlogonRpcHandle();
    gpidLogon = 0LL;
  }
  v4 = ghSMSS;
  if ( ghSMSS )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  result = isInputVirtualizationEnabled((__int64)v4, a2, a3, a4);
  if ( result )
  {
    if ( gpkeIVThreadShutdown )
      return KeSetEvent(gpkeIVThreadShutdown, 1, 0);
  }
  return result;
}
