/*
 * XREFs of PsGetProcessSessionId @ 0x140252EB0
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x14060FC5C (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611214 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x1406134BC (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x14062B670 (EtwpWriteProcessStarted.c)
 *     PspEstablishJobHierarchy @ 0x14071FA0C (PspEstablishJobHierarchy.c)
 *     MiLogReserveVaFailed @ 0x1408C6C54 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1408D73E4 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906DE4 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx(a1);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
