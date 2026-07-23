/*
 * XREFs of PsGetProcessStartKey @ 0x14023F080
 * Callers:
 *     EtwpWriteProcessStarted @ 0x14066FC18 (EtwpWriteProcessStarted.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A0CC4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x1406A2F6C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x14077B310 (EtwpWriteAppStateChangeWithStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
