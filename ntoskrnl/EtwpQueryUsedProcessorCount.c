/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140206540
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x1402052DC (EtwpBuffersFlushRequired.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x1402067AC (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAddLastDroppedEvent @ 0x1405FEC24 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1406005D4 (EtwpReenableCompression.c)
 *     EtwpRealtimeSaveState @ 0x14067F474 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1406930A0 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x14069310C (EtwpFlushActiveBuffers.c)
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwpFreeTraceBufferPool @ 0x1406F2CFC (EtwpFreeTraceBufferPool.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpAllocateTraceBufferPool @ 0x14074867C (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x140761AA8 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeHeader @ 0x140771D34 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x140772F04 (EtwpAddLogHeader.c)
 *     EtwpRealtimeRestoreState @ 0x14084FCD8 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x14053E080 (HvlQueryStartedProcessors.c)
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) != 0 && (int)HvlQueryStartedProcessors(&v3, 0LL) >= 0 )
    return v3;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
