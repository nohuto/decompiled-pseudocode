/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x140462C3A
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExInsertPoolTag @ 0x1403B51DC (ExInsertPoolTag.c)
 *     ExRemovePoolTag @ 0x1403BD8EC (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x140604EC8 (ExPoolCleanupExpansionTable.c)
 *     ExpFreeHeapSpecialPool @ 0x14060CCF8 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpPoolTrackerReturnLimit @ 0x140313B50 (ExpPoolTrackerReturnLimit.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  __int64 CurrentIrql; // rax
  unsigned __int64 v10; // rdi
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // rbx
  volatile signed __int64 *v15; // rcx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+20h] [rbp-28h] BYREF

  memset(&v20, 0, sizeof(v20));
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v20);
  v6 = 0LL;
  if ( PoolTrackTableExpansionSize )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_DWORD *)(PoolTrackTableExpansion + 80 * v7);
      if ( v8 == a1 )
        break;
      if ( v8 )
      {
        v6 = (unsigned int)(v6 + 1);
        v7 = (unsigned int)v6;
        if ( (unsigned int)v6 < (unsigned __int64)PoolTrackTableExpansionSize )
          continue;
      }
      goto LABEL_6;
    }
    ExpPoolTrackerReturnLimit((a3 & 1) == 0, a2, PoolTrackTableExpansion + 80 * v6);
    LODWORD(CurrentIrql) = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v20);
    OldIrql = v20.OldIrql;
    if ( KiIrqlFlags )
    {
      LODWORD(CurrentIrql) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)CurrentIrql <= 0xFu
        && v20.OldIrql <= 0xFu
        && (unsigned __int8)CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        LODWORD(CurrentIrql) = ~(unsigned __int16)(-1LL << (v20.OldIrql + 1));
        v13 = ((unsigned int)CurrentIrql & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= CurrentIrql;
        if ( v13 )
          LODWORD(CurrentIrql) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
LABEL_6:
    CurrentIrql = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v20);
    v10 = v20.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)CurrentIrql <= 0xFu
        && v20.OldIrql <= 0xFu
        && (unsigned __int8)CurrentIrql >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        CurrentIrql = ~(unsigned __int16)(-1LL << (v20.OldIrql + 1));
        v13 = ((unsigned int)CurrentIrql & v12[5]) == 0;
        v12[5] &= CurrentIrql;
        if ( v13 )
          CurrentIrql = KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    __writecr8(v10);
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v14 = -a2;
    v15 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables + CurrentIrql)
                                    + 80 * (unsigned int)(PoolTrackTableSize - 1));
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64(v15 + 6);
      _InterlockedExchangeAdd64(v15 + 4, v14);
    }
    else
    {
      _InterlockedIncrement64(v15 + 3);
      _InterlockedExchangeAdd64(v15 + 1, v14);
    }
  }
  return CurrentIrql;
}
