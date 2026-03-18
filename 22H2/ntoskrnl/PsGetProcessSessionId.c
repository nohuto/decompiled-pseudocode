/*
 * XREFs of PsGetProcessSessionId @ 0x140297500
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1407147B0 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwpWriteProcessStarted @ 0x140754060 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x1407542F4 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754D60 (EtwQueryProcessTelemetryInfo.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADB70 (PspTerminateSiloSubsystemProcesses.c)
 *     MiLogReserveVaFailed @ 0x140A2E914 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140A439C4 (MiLogCommitRequestFailed.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
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
