/*
 * XREFs of ExAllocateHeapSpecialPool @ 0x14060C980
 * Callers:
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14020DEF0 (MiDeterminePoolType.c)
 *     RtlpHpSegAlloc @ 0x1402491F0 (RtlpHpSegAlloc.c)
 *     ExpPlFindLimitEntry @ 0x1402F00EC (ExpPlFindLimitEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExGetHeapFromType @ 0x1403B509C (ExGetHeapFromType.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403B53DC (ExpPoolTrackerChargeEntry.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140605758 (ExpInsertPoolTrackerExpansion.c)
 *     ExpFreeHeapSpecialPool @ 0x14060CCF8 (ExpFreeHeapSpecialPool.c)
 */

unsigned __int64 __fastcall ExAllocateHeapSpecialPool(int a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // edi
  __int64 v4; // r15
  int v6; // ecx
  unsigned __int8 CurrentIrql; // dl
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  char v10; // bl
  size_t v11; // rbp
  unsigned __int64 v12; // rbx
  int v13; // eax
  int v14; // edi
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  int v17; // r8d
  unsigned int v18; // edi
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // ebp
  unsigned int v22; // r9d
  __int64 v23; // r14
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r13
  _QWORD *LimitEntry; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  int v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 HeapFromType; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v39; // [rsp+A0h] [rbp+8h]
  __int64 v40; // [rsp+B8h] [rbp+20h]

  v3 = a1;
  v4 = a3;
  v6 = a1 & 1;
  if ( !v6 && (_bittest(&ExpPoolFlags, 0xAu) & ((v3 & 0x200) == 0)) != 0 )
    v3 |= 0x200u;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v6 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v3, a2, 0x30uLL);
  HeapFromType = ExGetHeapFromType(v3, 0x80000000, 1);
  v8 = RtlpHpSegAlloc(HeapFromType + 320, 4096LL, 4096LL, 4096LL, 4u);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = MEMORY[0xFFFFF78000000320];
  memset((void *)(v8 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  v11 = a2 - 8;
  if ( (v3 & 0x40) == 0 )
    v11 = a2;
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_DWORD *)v9 = v11;
  *(_BYTE *)(v9 + 2) = v10 | 1;
  *(_DWORD *)(v9 + 4) = v4;
  if ( (v3 & 0x40) != 0 )
    *(_DWORD *)v9 |= 0x4000u;
  v12 = (v9 - v11 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0x400) != 0 )
    memset((void *)((v9 - v11 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v11);
  v13 = MiDeterminePoolType(v9);
  v14 = 0;
  LockHandle.LockQueue = 0LL;
  if ( v13 != 32 )
    v14 = v13;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v15 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (_DWORD)v4 == PoolHitTag )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v14, v4, v9, (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  LODWORD(v16) = KeGetPcr()->Prcb.Number;
  v17 = PoolTrackTableMask;
  v18 = v14 & 0xFFFFFFDF;
  v19 = PoolTrackTableSize;
  v20 = (__int64)*(&ExPoolTagTables + v16);
  v40 = v20;
  v35 = PoolTrackTableMask;
  v21 = PoolTrackTableMask & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
  v36 = PoolTrackTableSize;
  v22 = v21;
  v39 = v21;
  while ( 1 )
  {
    v23 = v20 + 80LL * v21;
    if ( *(_DWORD *)v23 == (_DWORD)v4 )
      break;
    if ( *(_DWORD *)v23 )
    {
LABEL_37:
      v21 = v17 & (v21 + 1);
      if ( v21 == v22 )
      {
        ExpInsertPoolTrackerExpansion(v4, v15, v18);
        return v12;
      }
    }
    else
    {
      v24 = *(_DWORD *)(PoolTrackTable + 80LL * v21);
      if ( v24 )
      {
        *(_DWORD *)v23 = v24;
        v20 = v40;
        v25 = *(_QWORD *)(PoolTrackTable + 80LL * v21 + 72);
        if ( v25 )
          *(_QWORD *)(v23 + 72) = v25;
      }
      else
      {
        if ( v21 == v19 - 1 )
        {
          v20 = v40;
          goto LABEL_37;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v26 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * v21) )
        {
          LimitEntry = ExpPlFindLimitEntry(v4);
          *(_QWORD *)(v26 + 80LL * v21 + 72) = LimitEntry;
          *(_QWORD *)(v23 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * v21) = v4;
          *(_DWORD *)v23 = v4;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v29 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        v17 = v35;
        v22 = v39;
        v19 = v36;
        v20 = v40;
      }
    }
  }
  if ( !(unsigned int)ExpPoolTrackerChargeEntry((v18 & 1) == 0, v15, v20 + 80LL * v21) )
  {
    ExpFreeHeapSpecialPool(HeapFromType, v12);
    return 0LL;
  }
  return v12;
}
