/*
 * XREFs of PsGetProcessStartKey @ 0x14023FCD0
 * Callers:
 *     EtwpWriteAppStateChangeWithStats @ 0x14068A3DC (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpInitStateChangeInfo @ 0x140711E3C (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x1407136E8 (EtwpWriteProcessStarted.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
