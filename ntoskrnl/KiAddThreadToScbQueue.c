/*
 * XREFs of KiAddThreadToScbQueue @ 0x1402AE688
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     KiInsertNonMaxOverQuotaScb @ 0x1402AE41C (KiInsertNonMaxOverQuotaScb.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402AE770 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 */

char __fastcall KiAddThreadToScbQueue(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // ebp
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax

  v5 = *(char *)(a3 + 195);
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a3 + 968), 0x40000u);
  KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(a3);
  if ( !*(_DWORD *)(a2 + 116) )
  {
    do
    {
      v15 = *(_QWORD *)(a2 + 408);
      if ( !v15 )
        break;
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( !*(_DWORD *)(v15 + 116) );
  }
  v10 = (_QWORD *)(a3 + 216);
  v11 = (_QWORD *)(a2 + 16LL * v5 + 136);
  if ( !a4 )
  {
    v14 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v14 == v11 )
    {
      *v10 = v11;
      *(_QWORD *)(a3 + 224) = v14;
      *v14 = v10;
      v11[1] = v10;
      goto LABEL_7;
    }
LABEL_10:
    __fastfail(3u);
  }
  v12 = *v11;
  if ( *(_QWORD **)(*v11 + 8LL) != v11 )
    goto LABEL_10;
  *v10 = v12;
  *(_QWORD *)(a3 + 224) = v11;
  *(_QWORD *)(v12 + 8) = v10;
  *v11 = v10;
LABEL_7:
  *(_DWORD *)(a3 + 116) |= 0x2000u;
  LOBYTE(v9) = 1;
  *(_QWORD *)(a3 + 944) = a2;
  *(_WORD *)(a2 + 114) |= 1 << v5;
  return KiInsertNonMaxOverQuotaScb(a2, a1, v9);
}
