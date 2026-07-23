/*
 * XREFs of PsGetProcessSessionId @ 0x140285D20
 * Callers:
 *     EtwpWriteProcessStarted @ 0x14066FC18 (EtwpWriteProcessStarted.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x14069F70C (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A0CC4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x1406A2F6C (EtwpInitStateChangeInfo.c)
 *     PspEstablishJobHierarchy @ 0x1406F5948 (PspEstablishJobHierarchy.c)
 *     MiLogReserveVaFailed @ 0x1408C6DB4 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1408D7544 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906F44 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
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
