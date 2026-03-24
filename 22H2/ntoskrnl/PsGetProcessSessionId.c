/*
 * XREFs of PsGetProcessSessionId @ 0x140252710
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1406100BC (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611674 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14061391C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x1406F52C8 (EtwpWriteProcessStarted.c)
 *     PspEstablishJobHierarchy @ 0x14071EDDC (PspEstablishJobHierarchy.c)
 *     MiLogReserveVaFailed @ 0x1408C6CA4 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1408D7434 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906E34 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
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
