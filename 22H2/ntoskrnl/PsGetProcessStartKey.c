/*
 * XREFs of PsGetProcessStartKey @ 0x14025ED50
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x140611674 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14061391C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 *     EtwpWriteProcessStarted @ 0x1406F52C8 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x14077B050 (EtwpWriteAppStateChangeWithStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
