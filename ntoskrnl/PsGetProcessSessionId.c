/*
 * XREFs of PsGetProcessSessionId @ 0x140299380
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1406BF738 (EtwpWriteProcessStarted.c)
 *     PspEstablishJobHierarchy @ 0x1407001E0 (PspEstablishJobHierarchy.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x14071B8A0 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x1407E88FC (EtwpInitStateChangeInfo.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409AAAF0 (PspTerminateSiloSubsystemProcesses.c)
 *     MiLogReserveVaFailed @ 0x140A2BBB4 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140A40CE4 (MiLogCommitRequestFailed.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
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
