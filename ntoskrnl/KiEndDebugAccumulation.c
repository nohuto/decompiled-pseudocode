/*
 * XREFs of KiEndDebugAccumulation @ 0x14036A1E0
 * Callers:
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KeThawExecution @ 0x14036B200 (KeThawExecution.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140254EC0 (PoGetFrequencyBucket.c)
 *     KiGetProcessorEfficiencyClass @ 0x14036A2D4 (KiGetProcessorEfficiencyClass.c)
 *     KiBeginCounterAccumulation @ 0x140571C80 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  unsigned __int64 v2; // r11
  unsigned int FrequencyBucket; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v2 = __rdtsc();
    *(_QWORD *)(a1 + 33400) += v2 - *(_QWORD *)(a1 + 33152);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
    {
      FrequencyBucket = PoGetFrequencyBucket(a1);
      ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(a1, v4, v5, FrequencyBucket);
      *(_QWORD *)(a1 + 8 * (ProcessorEfficiencyClass + 2 * v7) + 33408) += v8;
    }
    *(_QWORD *)(a1 + 33152) = v2;
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v9 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v9, 0LL);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
