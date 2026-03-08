/*
 * XREFs of PsGetProcessStartKey @ 0x1402993E0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 *     EtwpWriteProcessStarted @ 0x1406BF738 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1407E69B4 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpInitStateChangeInfo @ 0x1407E88FC (EtwpInitStateChangeInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
