/*
 * XREFs of GetProcessAndSessionId @ 0x1801EEA20
 * Callers:
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1801EEA94 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

BOOL __fastcall GetProcessAndSessionId(DWORD *a1, DWORD *a2)
{
  DWORD CurrentProcessId; // eax
  BOOL result; // eax
  signed int LastError; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentProcessId = GetCurrentProcessId();
  *a1 = CurrentProcessId;
  result = ProcessIdToSessionId(CurrentProcessId, a2);
  if ( !result )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  return result;
}
