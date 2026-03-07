unsigned __int64 __fastcall ExAllocateContiguousHeapPool(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 HeapFromType; // rsi
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // r10
  __int64 v22; // rdx
  unsigned int v23; // r13d
  unsigned int v24; // r9d
  __int64 v25; // r15
  int v26; // edx
  __int64 v27; // rcx
  _QWORD *LimitEntry; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+30h] [rbp-68h]
  __int64 v37; // [rsp+38h] [rbp-60h]
  int v38; // [rsp+40h] [rbp-58h]
  __int64 v39; // [rsp+48h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+8h]

  HeapFromType = ExGetHeapFromType(512LL, a5, 0LL);
  if ( v10 > *(_QWORD *)(*(_QWORD *)qword_140C67048 + 17024LL) )
    return 0LL;
  if ( a2 < *(_QWORD *)(*(_QWORD *)qword_140C67048 + 17032LL) )
    return 0LL;
  if ( (unsigned __int64)(a3 - 1) <= 0x1FE )
    return 0LL;
  v13 = 1;
  if ( (*(_BYTE *)(HeapFromType + 333) & 7) == 0 || a4 >= *(unsigned int *)(HeapFromType + 528) )
    return 0LL;
  v14 = HeapFromType + 320;
  v15 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v15 > *(unsigned int *)(HeapFromType + 336) )
    v14 = HeapFromType + 512;
  v16 = RtlpHpSegAlloc(v14, v15, v15, v15, 0x800000u);
  v17 = v16;
  if ( !v16 )
    return 0LL;
  if ( !(unsigned int)ExpAddTagForBigPages(v16, a6, v15, 512, 0, 0) )
  {
    v11 = 0LL;
    RtlpHpFreeHeap(HeapFromType, v17, 0, v18, v35);
    return v11;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a6 == PoolHitTag )
    __debugbreak();
  v19 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v19 = EtwTracePool(3616, 512, a6, v17, v15);
  LODWORD(v19) = KeGetPcr()->Prcb.Number;
  v20 = PoolTrackTableMask;
  v21 = PoolTrackTableSize;
  v22 = (__int64)*(&ExPoolTagTables + v19);
  v36 = v22;
  v38 = PoolTrackTableMask;
  v23 = PoolTrackTableMask & ((40543 * a6) ^ ((40543 * (unsigned __int64)a6) >> 32));
  v39 = PoolTrackTableSize;
  v24 = v23;
  v41 = v23;
  do
  {
    while ( 1 )
    {
      v25 = v22 + 80LL * v23;
      if ( *(_DWORD *)v25 == a6 )
      {
        v13 = ExpPoolTrackerChargeEntry(1LL, v15, v22 + 80LL * v23);
        goto LABEL_19;
      }
      if ( *(_DWORD *)v25 )
        break;
      v26 = *(_DWORD *)(PoolTrackTable + 80LL * v23);
      if ( v26 )
      {
        *(_DWORD *)v25 = v26;
        v22 = v36;
        v27 = *(_QWORD *)(PoolTrackTable + 80LL * v23 + 72);
        if ( v27 )
          *(_QWORD *)(v25 + 72) = v27;
      }
      else
      {
        if ( v23 == v21 - 1 )
        {
          v22 = v36;
          break;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v37 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * v23) )
        {
          LimitEntry = ExpPlFindLimitEntry(a6);
          *(_QWORD *)(v37 + 80LL * v23 + 72) = LimitEntry;
          *(_QWORD *)(v25 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * v23) = a6;
          *(_DWORD *)v25 = a6;
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
            v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        v20 = v38;
        v24 = v41;
        v21 = v39;
        v22 = v36;
      }
    }
    v23 = v20 & (v23 + 1);
  }
  while ( v23 != v24 );
  ExpInsertPoolTrackerExpansion(a6, v15, 512LL);
LABEL_19:
  v11 = v17;
  if ( !v13 )
  {
    ExFreeHeapPool(v17);
    return 0LL;
  }
  return v11;
}
