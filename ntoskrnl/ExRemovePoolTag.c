/*
 * XREFs of ExRemovePoolTag @ 0x1403BD8EC
 * Callers:
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     ExpPoolTrackerReturnLimit @ 0x140313B50 (ExpPoolTrackerReturnLimit.c)
 *     ExpFreePoolChecks @ 0x140313BA0 (ExpFreePoolChecks.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140462C3A (ExpRemovePoolTrackerExpansion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 */

__int64 __fastcall ExRemovePoolTag(ULONG_PTR BugCheckParameter2, unsigned int *a2, __int64 *a3, int *a4)
{
  KIRQL v8; // al
  int v9; // r10d
  unsigned __int64 v10; // r14
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  char *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rbp
  unsigned int v17; // r15d
  unsigned __int8 v18; // r12
  unsigned int v19; // r15d
  int v20; // edi
  __int64 v21; // r14
  __int64 v22; // rax
  int v23; // r10d
  unsigned int v24; // edi
  __int64 v25; // r13
  unsigned int v26; // edx
  unsigned int v27; // r11d
  __int64 v28; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v32; // eax
  _DWORD *SchedulerAssist; // r8
  bool v34; // zf
  int v35; // r9d
  __int64 v36; // r9
  _BYTE *v37; // r9
  int v38; // [rsp+70h] [rbp+8h]

  v38 = *a4 & 1;
  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v9 = 1;
  v10 = v8;
  v11 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter2 >> 12))) & (PoolBigPageTableSize - 1);
  v12 = 0;
  while ( 1 )
  {
    v13 = 32LL * v11;
    if ( *(_QWORD *)((char *)PoolBigPageTable + v13) == BugCheckParameter2 )
      break;
    if ( ++v11 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v9 )
        goto LABEL_20;
      v11 = 0;
      v9 = 0;
    }
  }
  v14 = (char *)PoolBigPageTable + v13;
  if ( !v14 )
LABEL_20:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, *a4, 0LL);
  v15 = *((_DWORD *)v14 + 2);
  v16 = *((_QWORD *)v14 + 2);
  *a2 = v15;
  v17 = *((_DWORD *)v14 + 3);
  *a3 = v16;
  *a4 = (v17 >> 8) & 0xFFF;
  if ( v15 == 1819242320 )
  {
    v18 = 0;
    LOWORD(v19) = 0;
  }
  else
  {
    v18 = v17;
    v19 = v17 >> 20;
  }
  _InterlockedAdd(&ExpPoolBigEntriesInUse, 0xFFFFFFFF);
  _InterlockedIncrement64((volatile signed __int64 *)v14);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v34 = (v32 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v32;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  v20 = *a4;
  v21 = *a2;
  if ( (_DWORD)v21 == PoolHitTag )
    __debugbreak();
  v22 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v22 = EtwTracePool(3618, v20, v21, BugCheckParameter2, v16);
  LODWORD(v22) = KeGetPcr()->Prcb.Number;
  v23 = PoolTrackTableMask;
  v24 = v20 & 0xFFFFFFDF;
  v25 = (__int64)*(&ExPoolTagTables + v22);
  v26 = PoolTrackTableMask & ((40543 * v21) ^ ((unsigned __int64)(40543 * v21) >> 32));
  v27 = v26;
  do
  {
    while ( 1 )
    {
      v28 = v25 + 80LL * v26;
      if ( *(_DWORD *)v28 == (_DWORD)v21 )
      {
        ExpPoolTrackerReturnLimit((v24 & 1) == 0, v16, v28);
        goto LABEL_16;
      }
      if ( *(_DWORD *)v28 )
        break;
      v35 = *(_DWORD *)(PoolTrackTable + 80LL * v26);
      if ( !v35 )
        break;
      *(_DWORD *)v28 = v35;
      v36 = *(_QWORD *)(PoolTrackTable + 80LL * v26 + 72);
      if ( v36 )
        *(_QWORD *)(v28 + 72) = v36;
    }
    v26 = v23 & (v26 + 1);
  }
  while ( v26 != v27 );
  ExpRemovePoolTrackerExpansion((unsigned int)v21, v16, v24);
LABEL_16:
  if ( v18 )
  {
    v37 = (_BYTE *)(BugCheckParameter2 + v16 - (unsigned __int16)v19);
    if ( (_WORD)v19 )
    {
      do
      {
        if ( *v37 != v18 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)v37, v18);
        ++v37;
        ++v12;
      }
      while ( v12 < (unsigned __int16)v19 );
    }
  }
  return ExpFreePoolChecks(BugCheckParameter2, *a2, v16, v38, BugCheckParameter2);
}
