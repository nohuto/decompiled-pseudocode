/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14032EE60
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x140321044 (EtwpBuffersFlushRequired.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14032ED38 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAddLastDroppedEvent @ 0x1405AB638 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1405AD600 (EtwpReenableCompression.c)
 *     EtwpFreeTraceBufferPool @ 0x14069862C (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1406A5D48 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1406BBB50 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1406BC9F0 (EtwpFlushActiveBuffers.c)
 *     EtwpInitLoggerContext @ 0x140711218 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x140712D40 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140713648 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x140713C88 (EtwpAddLogHeader.c)
 *     EtwpUpdateTrace @ 0x140791BF8 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x1407C891C (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x14093D1D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x1404F21A0 (HvlQueryStartedProcessors.c)
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
