/*
 * XREFs of ExpAddTagForBigPages @ 0x1402C7A20
 * Callers:
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1403B4DF4 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1403B51DC (ExInsertPoolTag.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpResizeBigPageTable @ 0x1403B453C (ExpResizeBigPageTable.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1403C1810 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // edi
  __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // si
  char *v13; // rdx
  unsigned __int64 v14; // r9
  volatile signed __int64 *v15; // rcx
  volatile signed __int64 *v16; // r10
  char *v17; // r8
  volatile signed __int64 v18; // rtt
  int v19; // r8d
  char *v21; // rcx
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  void *v30; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  void *v42; // rcx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v49; // r8
  int v50; // eax
  unsigned __int8 v51; // cl
  _DWORD *v52; // r8
  int v53; // eax
  signed __int32 v54; // [rsp+20h] [rbp-38h]
  PVOID P[6]; // [rsp+28h] [rbp-30h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v57; // [rsp+60h] [rbp+8h]
  signed __int32 v58; // [rsp+60h] [rbp+8h]

  v6 = 0;
  v9 = 40543LL * (unsigned int)(a1 >> 12);
  P[0] = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v32) = 4;
        else
          v32 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v32;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
      }
      else
      {
        _m_prefetchw(&ExpLargePoolTableLock);
        v57 = ExpLargePoolTableLock & 0x7FFFFFFF;
        v54 = _InterlockedCompareExchange(
                &ExpLargePoolTableLock,
                (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                ExpLargePoolTableLock & 0x7FFFFFFF);
        if ( v54 != v57 )
        {
          while ( v54 >= 0 )
          {
            v58 = v54;
            v54 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v54 + 1, v54);
            if ( v54 == v58 )
              goto LABEL_5;
          }
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
        }
      }
LABEL_5:
      v13 = (char *)PoolBigPageTable;
      v14 = PoolBigPageTableSize;
      if ( PoolBigPageTable && ExpPoolBigEntriesInUse != PoolBigPageTableSize )
      {
        v15 = (volatile signed __int64 *)((char *)PoolBigPageTable
                                        + 32 * (((unsigned int)v9 ^ HIDWORD(v9)) & ((_DWORD)PoolBigPageTableSize - 1)));
        v16 = v15;
        v17 = (char *)PoolBigPageTable + 32 * PoolBigPageTableSize;
        while ( 1 )
        {
          if ( (*v15 & 1) != 0 )
          {
            v18 = *v15;
            if ( v18 == _InterlockedCompareExchange64(v15, a1, *v15) )
              break;
          }
          v21 = (char *)(v15 + 4);
          ++v6;
          v22 = v13;
          if ( v21 < v17 )
            v22 = v21;
          v15 = (volatile signed __int64 *)v22;
          if ( v22 == (char *)v16 )
            goto LABEL_21;
        }
        *((_BYTE *)v15 + 12) = a6;
        *((_DWORD *)v15 + 2) = a2;
        v19 = (unsigned __int8)*((_DWORD *)v15 + 3) | ((a4 & 0xFFF | (a5 << 12)) << 8);
        *((_QWORD *)v15 + 2) = a3;
        *((_DWORD *)v15 + 3) = v19;
        if ( (a4 & 8) != 0 )
          *((_QWORD *)v15 + 3) = ExpPoolQuotaCookie ^ a1;
        _InterlockedIncrement(&ExpPoolBigEntriesInUse);
        if ( v6 < 0x10 || ExpPoolBigEntriesInUse <= (unsigned int)(v14 >> 2) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
          }
          else
          {
            _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
            _InterlockedDecrement(&ExpLargePoolTableLock);
          }
          if ( !KiIrqlFlags )
            goto LABEL_16;
          v51 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_16;
          if ( v51 > 0xFu )
            goto LABEL_16;
          if ( CurrentIrql > 0xFu )
            goto LABEL_16;
          if ( v51 < 2u )
            goto LABEL_16;
          CurrentPrcb = KeGetCurrentPrcb();
          v52 = CurrentPrcb->SchedulerAssist;
          v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v37 = (v53 & v52[5]) == 0;
          v52[5] &= v53;
          if ( !v37 )
            goto LABEL_16;
        }
        else
        {
          if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
          {
            ExpResizeBigPageTable(v28, v27, P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
            if ( KiIrqlFlags )
            {
              v43 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
              {
                v44 = KeGetCurrentPrcb();
                v45 = v44->SchedulerAssist;
                v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v37 = (v46 & v45[5]) == 0;
                v45[5] &= v46;
                if ( v37 )
                  KiRemoveSystemWorkPriorityKick(v44);
              }
            }
            __writecr8(CurrentIrql);
            v29 = P[0];
            if ( P[0] )
            {
              do
              {
                v30 = v29;
                v29 = (_QWORD *)*v29;
                ExFreePoolWithTag(v30, 0);
              }
              while ( v29 );
            }
            return 1LL;
          }
          ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
          if ( !KiIrqlFlags
            || (v47 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
            || v47 > 0xFu
            || CurrentIrql > 0xFu
            || v47 < 2u
            || (CurrentPrcb = KeGetCurrentPrcb(),
                v49 = CurrentPrcb->SchedulerAssist,
                v50 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
                v37 = (v50 & v49[5]) == 0,
                v49[5] &= v50,
                !v37) )
          {
LABEL_16:
            __writecr8(CurrentIrql);
            return 1LL;
          }
        }
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        goto LABEL_16;
      }
LABEL_21:
      if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v37 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      __writecr8(CurrentIrql);
    }
    v25 = ExpResizeBigPageTable(v24, v23, P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v37 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    __writecr8(CurrentIrql);
    if ( !v25 )
      break;
    v26 = P[0];
    if ( P[0] )
    {
      do
      {
        v42 = v26;
        v26 = (_QWORD *)*v26;
        ExFreePoolWithTag(v42, 0);
      }
      while ( v26 );
      P[0] = 0LL;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
