/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1403428F0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1402AB444 (KiMoveScbThreadsToNewReadylist.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403426B0 (KiEvaluateGroupSchedulingPreemption.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, char a3, bool *a4)
{
  bool v5; // bl
  unsigned int v6; // edx
  int v7; // r11d
  __int64 v8; // r10

  v5 = a4 && *(_QWORD *)(a2 + 120);
  v6 = 0;
  v7 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a3 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(a2) )
    {
      v6 = -1;
    }
    else
    {
      do
      {
        v6 += *(_DWORD *)(v8 + 116);
        if ( v5 )
        {
          v7 += **(_DWORD **)(v8 + 120);
        }
        else if ( v6 )
        {
          break;
        }
        v8 = *(_QWORD *)(v8 + 408);
      }
      while ( v8 );
    }
  }
  if ( a4 )
    *a4 = v7 != 0;
  return v6;
}
