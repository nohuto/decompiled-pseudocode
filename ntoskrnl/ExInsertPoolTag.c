/*
 * XREFs of ExInsertPoolTag @ 0x1403B51DC
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x1402C7A20 (ExpAddTagForBigPages.c)
 *     ExpPlFindLimitEntry @ 0x1402F00EC (ExpPlFindLimitEntry.c)
 *     ExpPoolTrackerReturnLimit @ 0x140313B50 (ExpPoolTrackerReturnLimit.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403B53DC (ExpPoolTrackerChargeEntry.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140462C3A (ExpRemovePoolTrackerExpansion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 *     ExpCleanupBigTag @ 0x1406056C8 (ExpCleanupBigTag.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140605758 (ExpInsertPoolTrackerExpansion.c)
 */

__int64 __fastcall ExInsertPoolTag(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  char v9; // bl
  unsigned __int16 v10; // r14
  unsigned __int64 v11; // rbp
  int v12; // r8d
  __int64 v13; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  int v16; // r9d
  __int64 v17; // r12
  int v19; // edx
  __int64 v20; // rcx
  _QWORD *LimitEntry; // rax
  void *v22; // rcx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rax
  int v30; // r9d
  unsigned int v31; // ebx
  __int64 v32; // r11
  unsigned int v33; // r10d
  __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rdx
  int v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 v40; // [rsp+B0h] [rbp+18h]
  int v41; // [rsp+B8h] [rbp+20h]

  v5 = 0;
  v6 = a1;
  v9 = 0;
  v10 = 0;
  if ( (a5 & 1) != 0 )
  {
    v22 = (void *)(a3 + a2);
    if ( (((_DWORD)a3 + (_DWORD)a2) & 0xFFF) != 0 )
    {
      v10 = 4096 - ((unsigned __int16)v22 & 0xFFF);
      v9 = MEMORY[0xFFFFF78000000320] | 1;
      memset(v22, MEMORY[0xFFFFF78000000320] | 1, v10);
    }
  }
  if ( a3 >= a3 + 4095 )
    return v5;
  v11 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)ExpAddTagForBigPages(a2, v6, v11, 4, v10, v9) )
    return v5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)v6 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 4, v6, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v12 = PoolTrackTableMask;
  v13 = PoolTrackTableSize;
  v14 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  v40 = v14;
  v37 = PoolTrackTableMask;
  v38 = PoolTrackTableSize;
  v15 = (unsigned int)PoolTrackTableMask & ((40543 * (int)v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
  v16 = PoolTrackTableMask & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
  v41 = v16;
  while ( 1 )
  {
    v17 = v14 + 80 * v15;
    if ( *(_DWORD *)v17 == (_DWORD)v6 )
      break;
    if ( *(_DWORD *)v17 )
    {
LABEL_14:
      v15 = v12 & (unsigned int)(v15 + 1);
      if ( (_DWORD)v15 == v16 )
      {
        ExpInsertPoolTrackerExpansion((unsigned int)v6, v11, 4LL);
        return 1;
      }
    }
    else
    {
      v19 = *(_DWORD *)(PoolTrackTable + 80 * v15);
      if ( v19 )
      {
        *(_DWORD *)v17 = v19;
        v14 = v40;
        v20 = *(_QWORD *)(PoolTrackTable + 80 * v15 + 72);
        if ( v20 )
          *(_QWORD *)(v17 + 72) = v20;
      }
      else
      {
        if ( (unsigned int)v15 == v13 - 1 )
        {
          v14 = v40;
          goto LABEL_14;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v15) )
        {
          LimitEntry = ExpPlFindLimitEntry(v6);
          *(_QWORD *)(PoolTrackTable + 80 * v15 + 72) = LimitEntry;
          *(_QWORD *)(v17 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v15) = v6;
          *(_DWORD *)v17 = v6;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        v12 = v37;
        v16 = v41;
        v13 = v38;
        v14 = v40;
      }
    }
  }
  if ( (unsigned int)ExpPoolTrackerChargeEntry(1LL, v11, v14 + 80 * v15) )
    return 1;
  if ( (_DWORD)v6 == PoolHitTag )
    __debugbreak();
  v29 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v29 = EtwTracePool(3618, 4, v6, a2, v11);
  LODWORD(v29) = KeGetPcr()->Prcb.Number;
  v30 = PoolTrackTableMask;
  v31 = PoolTrackTableMask & (((unsigned __int64)(40543 * v6) >> 32) ^ (40543 * v6));
  v32 = (__int64)*(&ExPoolTagTables + v29);
  v33 = v31;
  while ( 1 )
  {
    v34 = v32 + 80LL * v31;
    if ( *(_DWORD *)v34 == (_DWORD)v6 )
      break;
    if ( *(_DWORD *)v34 || (v35 = *(_DWORD *)(PoolTrackTable + 80LL * v31)) == 0 )
    {
      v31 = v30 & (v31 + 1);
      if ( v31 == v33 )
      {
        ExpRemovePoolTrackerExpansion((unsigned int)v6, v11, 4LL);
        goto LABEL_46;
      }
    }
    else
    {
      *(_DWORD *)v34 = v35;
      v36 = *(_QWORD *)(PoolTrackTable + 80LL * v31 + 72);
      if ( v36 )
        *(_QWORD *)(v34 + 72) = v36;
    }
  }
  ExpPoolTrackerReturnLimit(1, v11, v34);
LABEL_46:
  ExpCleanupBigTag(a2);
  return v5;
}
