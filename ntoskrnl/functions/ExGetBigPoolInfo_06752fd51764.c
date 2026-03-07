__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  char *HeapPages; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // edx
  __int64 v14; // r8
  ULONG_PTR v15; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  ULONG_PTR v21; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  ULONG_PTR HeapFromVA; // rax
  unsigned int v27; // [rsp+30h] [rbp-48h]
  unsigned int v28; // [rsp+34h] [rbp-44h]
  char *i; // [rsp+38h] [rbp-40h]
  _DWORD *v30; // [rsp+40h] [rbp-38h]
  unsigned __int64 v31; // [rsp+80h] [rbp+8h]

  HeapPages = 0LL;
  v28 = 0;
  v31 = 0LL;
  v27 = 8;
  v30 = a1 + 2;
  if ( a2 )
    *a1 = 0;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    if ( !PoolBigPageTable )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v6);
      if ( HeapPages )
      {
        HeapFromVA = ExGetHeapFromVA((ULONG_PTR)HeapPages);
        RtlpHpFreeHeap(HeapFromVA, (unsigned __int64)HeapPages, 0, 0LL, 0LL);
      }
      *a3 = 0;
      return 0LL;
    }
    if ( HeapPages && v31 >= PoolBigPageTableSize )
      break;
    v31 = PoolBigPageTableSize;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
    __writecr8(v6);
    if ( HeapPages )
    {
      v21 = ExGetHeapFromVA((ULONG_PTR)HeapPages);
      RtlpHpFreeHeap(v21, (unsigned __int64)HeapPages, 0, 0LL, 0LL);
    }
    HeapPages = (char *)ExAllocateHeapPages();
    if ( !HeapPages )
      return 3221225626LL;
  }
  v7 = 32 * PoolBigPageTableSize;
  memmove(HeapPages, PoolBigPageTable, 32 * PoolBigPageTableSize);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v8 >= 2u )
    {
      v9 = KeGetCurrentPrcb();
      v10 = v9->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
  }
  __writecr8(v6);
  for ( i = HeapPages; ; i += 32 )
  {
    v13 = v27;
    if ( i >= &HeapPages[v7] )
      break;
    v14 = *(_QWORD *)i;
    if ( (*(_QWORD *)i & 1) == 0 )
    {
      if ( a2 )
        ++*a1;
      v27 += 24;
      if ( v13 >= 0xFFFFFFE8 )
      {
        v28 = -1073741675;
        break;
      }
      if ( v27 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v30 = v14;
          if ( (*((_DWORD *)i + 3) & 0x100) == 0 )
            *(_QWORD *)v30 = v14 | 1;
          v30[4] = *((_DWORD *)i + 2);
          *((_QWORD *)v30 + 1) = *((_QWORD *)i + 2);
          v30 += 6;
        }
      }
      else
      {
        v28 = -1073741820;
      }
    }
  }
  v15 = ExGetHeapFromVA((ULONG_PTR)HeapPages);
  RtlpHpFreeHeap(v15, (unsigned __int64)HeapPages, 0, 0LL, 0LL);
  *a3 = v27;
  return v28;
}
