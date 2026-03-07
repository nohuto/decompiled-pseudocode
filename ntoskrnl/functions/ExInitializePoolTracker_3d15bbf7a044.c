__int64 ExInitializePoolTracker()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // ecx
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // edx
  __int64 v9; // rcx
  _QWORD *LimitEntry; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // r12
  int v16; // r15d
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v19; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = ((unsigned int)ExGenRandom(0) | v2) ^ v1;
  if ( !v3 )
    v3 = 1LL;
  _BitScanReverse((unsigned int *)&v4, KeLargestCacheLine);
  ExpPoolQuotaCookie = v3;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 1 << v4;
  if ( (unsigned int)(1 << v4) < 0x10 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 16;
  }
  else if ( (unsigned int)(1 << v4) > 0x1000 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 4096;
  }
  result = ExpInitializePoolTrackerTable();
  if ( (int)result < 0 )
    return result;
  ExPoolTagTables = (void *)PoolTrackTable;
  ExpSeedHotTags();
  ExpTaggedPoolLock = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (80 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v12 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 1819242320, PoolTrackTable, (80 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v12) = KeGetPcr()->Prcb.Number;
  v13 = PoolTrackTableMask;
  v14 = PoolTrackTableSize;
  v11 = PoolTrackTableMask & 0x40DEDA5;
  v15 = (__int64)*(&ExPoolTagTables + v12);
  v16 = PoolTrackTableMask & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v7 = v15 + 80 * v11;
      if ( *(_DWORD *)v7 == 1819242320 )
      {
        ExpPoolTrackerChargeEntry(1, v6, v15 + 80 * v11);
        return 0LL;
      }
      if ( *(_DWORD *)v7 )
        break;
      v8 = *(_DWORD *)(PoolTrackTable + 80 * v11);
      if ( v8 )
      {
        *(_DWORD *)v7 = v8;
        v9 = *(_QWORD *)(PoolTrackTable + 80 * v11 + 72);
        if ( v9 )
          *(_QWORD *)(v7 + 72) = v9;
      }
      else
      {
        if ( (unsigned int)v11 == v14 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v11) )
        {
          LimitEntry = ExpPlFindLimitEntry(1819242320);
          *(_QWORD *)(PoolTrackTable + 80 * v11 + 72) = LimitEntry;
          *(_QWORD *)(v7 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v11) = 1819242320;
          *(_DWORD *)v7 = 1819242320;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            SchedulerAssist = v19->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)v19);
          }
        }
        __writecr8(OldIrql);
      }
    }
    v11 = v13 & (unsigned int)(v11 + 1);
  }
  while ( (_DWORD)v11 != v16 );
  ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v6, 0x200u);
  return 0LL;
}
