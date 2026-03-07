__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  char v5; // r13
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // r12
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // r11
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v20; // zf
  unsigned __int64 v21; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  __int64 v26; // rax
  volatile signed __int64 *v27; // rcx
  __int64 v28; // rdi
  void *HeapPages; // rax
  __int64 v30; // rbx
  int v31; // r8d
  __int64 v32; // r10
  __int64 Number; // rcx
  __int64 v34; // rbx
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // r13
  int v38; // edx
  __int64 v39; // rcx
  _QWORD *LimitEntry; // rax
  unsigned __int64 v41; // rsi
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rbx
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  unsigned __int64 v52; // r12
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  __int64 v55; // [rsp+38h] [rbp-49h]
  __int64 v56; // [rsp+38h] [rbp-49h]
  unsigned __int64 Size; // [rsp+40h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-39h] BYREF
  __int64 v59; // [rsp+60h] [rbp-21h]
  __int64 v60; // [rsp+68h] [rbp-19h]
  __int64 v61; // [rsp+70h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE v62; // [rsp+78h] [rbp-9h] BYREF
  __int64 v63; // [rsp+90h] [rbp+Fh]
  int v66; // [rsp+100h] [rbp+7Fh]

  v4 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a3;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v6 = PoolTrackTableExpansionSize;
  v7 = 0LL;
  v8 = PoolTrackTableSize;
  v9 = PoolTrackTable;
  v10 = (_QWORD *)PoolTrackTableExpansion;
  v55 = PoolTrackTableSize;
  if ( PoolTrackTableExpansionSize )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_DWORD *)(PoolTrackTableExpansion + 80 * v11);
      if ( v12 == (_DWORD)v4 )
        break;
      if ( !v12 )
      {
        *(_DWORD *)(80 * v7 + PoolTrackTableExpansion) = v4;
        v13 = v4 & (-1LL << (dword_140CF7E04 & 0x1F));
        if ( (unsigned int)dword_140CF7E04 >> 5 )
        {
          v63 = v4 & (-1LL << (dword_140CF7E04 & 0x1F));
          v14 = (char *)qword_140CF7E08
              + 8
              * ((37
                * (BYTE6(v13)
                 + 37
                 * (BYTE5(v13)
                  + 37
                  * (BYTE4(v13)
                   + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                + HIBYTE(v13)) & (((unsigned int)dword_140CF7E04 >> 5) - 1));
          while ( 1 )
          {
            v15 = (_QWORD *)*v14;
            v14 = v15;
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            if ( v13 == ((-1LL << (dword_140CF7E04 & 0x1F)) & v15[1]) )
            {
              if ( v15 )
                goto LABEL_13;
              break;
            }
          }
        }
        v15 = 0LL;
LABEL_13:
        v10[10 * v7 + 9] = v15;
        break;
      }
      v7 = (unsigned int)(v7 + 1);
      v11 = (unsigned int)v7;
    }
    while ( (unsigned int)v7 < (unsigned __int64)PoolTrackTableExpansionSize );
    v8 = v55;
  }
  if ( (unsigned int)v7 != v6 )
  {
    ExpPoolTrackerChargeEntry((v5 & 1) == 0, a2, (__int64)&v10[10 * v7]);
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v20 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return result;
  }
  if ( *(_DWORD *)(v9 + 80 * v8 - 80) )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v21 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
    __writecr8(v21);
    v26 = v9 + 80LL * (unsigned int)(v55 - 1);
    if ( (v5 & 1) != 0 )
    {
      v27 = (volatile signed __int64 *)(v26 + 32);
      result = v26 + 40;
    }
    else
    {
      v27 = (volatile signed __int64 *)(v26 + 8);
      result = v26 + 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)result);
    _InterlockedExchangeAdd64(v27, a2);
    return result;
  }
  v28 = 80 * v6;
  Size = (80 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages();
  v30 = (__int64)HeapPages;
  if ( !HeapPages )
  {
    *(_DWORD *)(v9 + 80LL * (unsigned int)(v55 - 1)) = 1818654287;
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v52 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v53 = KeGetCurrentPrcb();
        v54 = v53->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = ((unsigned int)result & v54[5]) == 0;
        v54[5] &= result;
        if ( v20 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v53);
      }
    }
    __writecr8(v52);
    if ( (v5 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v55 - 1) + 40));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v55 - 1) + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v55 - 1) + 16));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v55 - 1) + 8), a2);
    }
    return result;
  }
  if ( v10 )
    memmove(HeapPages, v10, Size);
  memset((void *)(v28 + v30), 0, Size + 4096 - v28);
  PoolTrackTableExpansionSize = (Size + 4096) / 0x50;
  PoolTrackTableExpansion = v30;
  memset(&v62, 0, sizeof(v62));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 1819242320, v30, Size + 4096);
  v31 = PoolTrackTableMask;
  v32 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v34 = PoolTrackTableMask & 0x40DEDA5;
  v60 = PoolTrackTableMask;
  v61 = PoolTrackTableSize;
  v35 = PoolTrackTableMask & 0x40DEDA5;
  v66 = PoolTrackTableMask & 0x40DEDA5;
  v36 = (__int64)*(&ExPoolTagTables + Number);
  v56 = v36;
  while ( 1 )
  {
    v37 = v36 + 80 * v34;
    if ( *(_DWORD *)v37 == 1819242320 )
      break;
    if ( *(_DWORD *)v37 )
    {
LABEL_60:
      v36 = v56;
      v34 = v31 & (unsigned int)(v34 + 1);
      if ( (_DWORD)v34 == v35 )
      {
        v46 = Size;
        ExpInsertPoolTrackerExpansion(1819242320LL, Size + 4096, 512LL);
        goto LABEL_63;
      }
    }
    else
    {
      v38 = *(_DWORD *)(PoolTrackTable + 80 * v34);
      if ( v38 )
      {
        *(_DWORD *)v37 = v38;
        v39 = *(_QWORD *)(PoolTrackTable + 80 * v34 + 72);
        v36 = v56;
        if ( v39 )
          *(_QWORD *)(v37 + 72) = v39;
      }
      else
      {
        if ( (unsigned int)v34 == v32 - 1 )
          goto LABEL_60;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v62);
        v59 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v34) )
        {
          LimitEntry = ExpPlFindLimitEntry(1819242320);
          *(_QWORD *)(v59 + 80 * v34 + 72) = LimitEntry;
          *(_QWORD *)(v37 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v34) = 1819242320;
          *(_DWORD *)v37 = 1819242320;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v62);
        v41 = v62.OldIrql;
        if ( KiIrqlFlags )
        {
          v42 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && v62.OldIrql <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v45 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
            v20 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)v43);
          }
        }
        __writecr8(v41);
        v31 = v60;
        v35 = v66;
        v32 = v61;
        v36 = v56;
      }
    }
  }
  v46 = Size;
  ExpPoolTrackerChargeEntry(1, Size + 4096, v37);
LABEL_63:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v47 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v48 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v48 <= 0xFu && LockHandle.OldIrql <= 0xFu && v48 >= 2u )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->SchedulerAssist;
      v51 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = (v51 & v50[5]) == 0;
      v50[5] &= v51;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)v49);
    }
  }
  __writecr8(v47);
  if ( v10 )
    ExPoolCleanupExpansionTable((ULONG_PTR)v10, v46);
  return ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
