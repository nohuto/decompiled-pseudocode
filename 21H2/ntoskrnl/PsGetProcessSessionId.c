/*
 * XREFs of PsGetProcessSessionId @ 0x14028AF60
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x14066A68C (ExpWnfGetCurrentScopeInstance.c)
 *     PspEstablishJobHierarchy @ 0x1406822EC (PspEstablishJobHierarchy.c)
 *     EtwpInitStateChangeInfo @ 0x140711E3C (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x1407136E8 (EtwpWriteProcessStarted.c)
 *     MiLogReserveVaFailed @ 0x14096B308 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x14097F2B0 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ACBA0 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
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
