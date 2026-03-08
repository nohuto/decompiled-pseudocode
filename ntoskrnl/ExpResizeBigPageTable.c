/*
 * XREFs of ExpResizeBigPageTable @ 0x1403B453C
 * Callers:
 *     ExpAddTagForBigPages @ 0x1402C7A20 (ExpAddTagForBigPages.c)
 * Callees:
 *     ExpPlFindLimitEntry @ 0x1402F00EC (ExpPlFindLimitEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocateHeapPages @ 0x1403B489C (ExAllocateHeapPages.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403B53DC (ExpPoolTrackerChargeEntry.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140605758 (ExpInsertPoolTrackerExpansion.c)
 */

__int64 __fastcall ExpResizeBigPageTable(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  void *HeapPages; // rax
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rax
  unsigned int v11; // r9d
  _QWORD *v12; // rsi
  _QWORD *i; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r15d
  __int64 v18; // r13
  __int64 v19; // rbx
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 result; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rcx
  _QWORD *LimitEntry; // rax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+20h]

  *a3 = 0LL;
  v3 = PoolBigPageTableSize;
  v4 = PoolBigPageTable;
  if ( PoolBigPageTableSize )
  {
    v5 = 2 * PoolBigPageTableSize;
    if ( 2 * PoolBigPageTableSize <= (unsigned __int64)PoolBigPageTableSize )
      return 0LL;
    a1 = 0x7FFFFFFFFFFFFFFLL;
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      return 0LL;
    v6 = (PoolBigPageTableSize << 6) + 4095;
    if ( PoolBigPageTableSize << 6 >= v6 )
      return 0LL;
  }
  else
  {
    v5 = 512LL;
    v6 = 20479LL;
  }
  v7 = v6 & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages(a1, v7);
  v9 = (unsigned __int64)HeapPages;
  if ( !HeapPages )
    return 0LL;
  memset(HeapPages, 0, v7);
  v10 = (_QWORD *)v9;
  do
  {
    *v10 = 1LL;
    v10 += 4;
  }
  while ( v10 != (_QWORD *)(v9 + 32 * v5) );
  v11 = v5 - 1;
  v12 = &v4[4 * v3];
  for ( i = v4; i != v12; i += 4 )
  {
    if ( (*i & 1) == 0 )
    {
      v24 = v11 & (((40543 * (unsigned __int64)(unsigned int)(*i >> 12)) >> 32) ^ (40543 * (*i >> 12)));
      if ( (*(_BYTE *)(32LL * v24 + v9) & 1) == 0 )
      {
        do
        {
          v26 = v24 + 1;
          v27 = 0LL;
          if ( v26 <= v11 )
            v27 = v26;
          v24 = v27;
        }
        while ( (*(_BYTE *)(32 * v27 + v9) & 1) == 0 );
        v24 = v27;
      }
      v25 = 32LL * v24;
      *(_OWORD *)(v25 + v9) = *(_OWORD *)i;
      *(_OWORD *)(v25 + v9 + 16) = *((_OWORD *)i + 1);
    }
  }
  v14 = v11 & (((40543 * (unsigned __int64)(unsigned int)(v9 >> 12)) >> 32) ^ (40543 * (unsigned int)(v9 >> 12)));
  if ( (*(_QWORD *)(32 * v14 + v9) & 1) == 0 )
  {
    do
    {
      v28 = v14 + 1;
      v29 = 0LL;
      if ( v28 <= v11 )
        v29 = v28;
      LODWORD(v14) = v29;
    }
    while ( (*(_QWORD *)(32 * v29 + v9) & 1) == 0 );
    v14 = (unsigned int)v29;
  }
  v15 = 32 * v14;
  strcpy((char *)(v15 + v9 + 8), "Pool");
  *(_QWORD *)(v15 + v9) = v9;
  v16 = (unsigned __int8)*(_DWORD *)(v15 + v9 + 12) | 0x20000;
  *(_QWORD *)(v15 + v9 + 16) = v7;
  *(_DWORD *)(v15 + v9 + 12) = v16;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  PoolBigPageTable = (void *)v9;
  PoolBigPageTableSize = v5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, v9, v7);
  v17 = PoolTrackTableMask;
  v18 = PoolTrackTableSize;
  v19 = PoolTrackTableMask & 0x40DEDA5;
  v20 = PoolTrackTableMask & 0x40DEDA5;
  v21 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  v41 = v21;
  do
  {
    while ( 1 )
    {
      v22 = v21 + 80 * v19;
      if ( *(_DWORD *)v22 == 1819242320 )
      {
        ExpPoolTrackerChargeEntry(1LL, v7, v22);
        goto LABEL_19;
      }
      if ( *(_DWORD *)v22 )
        break;
      v30 = *(_DWORD *)(PoolTrackTable + 80 * v19);
      if ( v30 )
      {
        *(_DWORD *)v22 = v30;
        v31 = *(_QWORD *)(PoolTrackTable + 80 * v19 + 72);
        v21 = v41;
        if ( v31 )
          *(_QWORD *)(v22 + 72) = v31;
      }
      else
      {
        if ( (unsigned int)v19 == v18 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v19) )
        {
          LimitEntry = ExpPlFindLimitEntry(1819242320);
          *(_QWORD *)(PoolTrackTable + 80 * v19 + 72) = LimitEntry;
          *(_QWORD *)(v22 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v19) = 1819242320;
          *(_DWORD *)v22 = 1819242320;
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
            v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v38 = (v37 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v37;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        v21 = v41;
      }
    }
    v21 = v41;
    v19 = v17 & (unsigned int)(v19 + 1);
  }
  while ( (_DWORD)v19 != v20 );
  ExpInsertPoolTrackerExpansion(1819242320LL, v7, 512LL);
LABEL_19:
  if ( v4 )
    *v4 = 0LL;
  result = 1LL;
  *a3 = v4;
  return result;
}
