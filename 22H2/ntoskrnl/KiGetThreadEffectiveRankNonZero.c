/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x14024CE70
 * Callers:
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 *     KiSelectReadyThreadEx @ 0x14022F830 (KiSelectReadyThreadEx.c)
 *     KiRemoveBoostThread @ 0x14024A840 (KiRemoveBoostThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x14024C010 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x14024C1B0 (KiDirectSwitchThread.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140258040 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140259550 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140259970 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     KiSelectReadyThread @ 0x1402C7F90 (KiSelectReadyThread.c)
 *     KiChooseLowestRankedThread @ 0x14035C520 (KiChooseLowestRankedThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037D9BC (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x14051EE34 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  bool v5; // r11
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // r9

  v5 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v7 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    v8 = a2;
    do
    {
      if ( (*(_BYTE *)(v8 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_12;
      }
      v8 = *(_QWORD *)(v8 + 408);
    }
    while ( v8 );
    do
    {
      result = (unsigned int)(*(_DWORD *)(a2 + 116) + result);
      if ( v5 )
      {
        v7 += **(_DWORD **)(a2 + 120);
      }
      else if ( (_DWORD)result )
      {
        break;
      }
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( a2 );
  }
LABEL_12:
  if ( a5 )
    *a5 = v7 != 0;
  return result;
}
