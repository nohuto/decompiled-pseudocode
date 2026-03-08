/*
 * XREFs of PoGetFrequencyBucket @ 0x140254EC0
 * Callers:
 *     KiSetQuantumTargetThread @ 0x1402270C0 (KiSetQuantumTargetThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KiEndDebugAccumulation @ 0x14036A1E0 (KiEndDebugAccumulation.c)
 *     KiAccumulateProcessorCycleStats @ 0x14036A290 (KiAccumulateProcessorCycleStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 result; // rax
  unsigned __int16 *v5; // rdx

  v1 = *(_QWORD *)(a1 + 33968);
  v2 = *(_QWORD *)(a1 + 33976);
  if ( v1 && v2 )
  {
    if ( *(_BYTE *)(v2 + 100) )
    {
      v3 = *(_DWORD *)(v2 + 116);
    }
    else
    {
      v3 = *(_DWORD *)(v2 + 72);
      if ( v3 >= *(_DWORD *)(v1 + 516) )
        v3 = *(_DWORD *)(v1 + 516);
    }
  }
  else
  {
    v3 = 100;
  }
  result = 0LL;
  v5 = (unsigned __int16 *)(a1 + 34154);
  do
  {
    if ( v3 <= *v5 )
      break;
    result = (unsigned int)(result + 1);
    ++v5;
  }
  while ( (unsigned int)result < 3 );
  return result;
}
