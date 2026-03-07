__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        _DWORD *a4,
        int *a5,
        _QWORD *a6,
        ULONG_PTR *a7)
{
  ULONG_PTR v9; // r12
  unsigned __int8 CurrentIrql; // di
  int v12; // r10d
  unsigned int v13; // edx
  char *v14; // rax
  int v15; // r8d
  ULONG_PTR v16; // rdx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rdx
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  signed __int32 v25; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v27; // [rsp+70h] [rbp+8h]
  signed __int32 v28; // [rsp+70h] [rbp+8h]

  v9 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v19) = 4;
    else
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v19;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v27 = ExpLargePoolTableLock & 0x7FFFFFFF;
    v25 = _InterlockedCompareExchange(
            &ExpLargePoolTableLock,
            (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
            ExpLargePoolTableLock & 0x7FFFFFFF);
    if ( v25 != v27 )
    {
      while ( v25 >= 0 )
      {
        v28 = v25;
        v25 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v25 + 1, v25);
        if ( v25 == v28 )
          goto LABEL_4;
      }
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
    }
  }
LABEL_4:
  v12 = 1;
  v13 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter2 >> 12))) & (PoolBigPageTableSize - 1);
  while ( 1 )
  {
    v14 = (char *)PoolBigPageTable + 32 * v13;
    if ( *(_QWORD *)v14 == BugCheckParameter2 )
      break;
    if ( ++v13 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v12 )
        goto LABEL_30;
      v13 = 0;
      v12 = 0;
    }
  }
  if ( !v14 )
LABEL_30:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v9, 0LL);
  v15 = *((_DWORD *)v14 + 3) >> 8;
  *a4 = *((_DWORD *)v14 + 2);
  *a5 = v15 & 0xFFF;
  *a6 = *((_QWORD *)v14 + 2);
  if ( (v15 & 8) != 0 )
    v16 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v14 + 3);
  else
    v16 = -1LL;
  *a7 = v16;
  if ( a3 )
  {
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v14 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v14);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
