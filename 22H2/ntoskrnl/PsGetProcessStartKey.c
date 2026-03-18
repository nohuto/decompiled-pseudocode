/*
 * XREFs of PsGetProcessStartKey @ 0x1402F6CA0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140751A30 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteProcessStarted @ 0x140754060 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x1407542F4 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754D60 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
