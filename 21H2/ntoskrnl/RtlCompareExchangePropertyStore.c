/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x1405E7300
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405E7AF0 (RtlpAcquirePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlCompareExchangePropertyStore(_OWORD *Key, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v4; // ebp
  void *v5; // r13
  _OWORD *i; // rsi
  unsigned __int64 v8; // rdi
  char *v9; // rax
  char *Pool2; // rbx
  int v11; // r14d
  unsigned int v12; // esi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  void *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax

  v4 = 0;
  v5 = 0LL;
  for ( i = Key; ; i = Key )
  {
    v8 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
    if ( RtlpPropStoreEntries )
    {
      v9 = (char *)bsearch(
                     i,
                     RtlpPropStoreEntries,
                     (unsigned int)RtlpPropStoreEntriesActiveCount,
                     0x18uLL,
                     RtlpComparePropertyEntry);
      if ( v9 )
        break;
    }
    if ( (unsigned __int8)v8 > 2u )
    {
      v25 = -1073741670;
      goto LABEL_42;
    }
    Pool2 = (char *)RtlpPropStoreEntries;
    if ( RtlpPropStoreEntries && (_DWORD)RtlpPropStoreEntriesActiveCount + 1 != RtlpPropStoreEntriesTotalCount )
      goto LABEL_28;
    v11 = RtlpPropStoreEntriesTotalCount;
    if ( RtlpPropStoreEntriesTotalCount )
    {
      v12 = 2 * RtlpPropStoreEntriesTotalCount;
      if ( 2 * RtlpPropStoreEntriesTotalCount < (unsigned int)RtlpPropStoreEntriesTotalCount )
        goto LABEL_40;
    }
    else
    {
      v12 = 16;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v8);
    Pool2 = (char *)ExAllocatePool2(64LL, 24LL * v12, 1886539858LL);
    if ( !Pool2 )
    {
LABEL_40:
      v25 = -1073741801;
      goto LABEL_42;
    }
    v8 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v21 = RtlpPropStoreEntries;
      if ( RtlpPropStoreEntries )
      {
        memmove(Pool2, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v5 = v21;
      }
      RtlpPropStoreEntriesTotalCount = v12;
      i = Key;
      RtlpPropStoreEntries = Pool2;
LABEL_28:
      v22 = 3LL * (unsigned int)RtlpPropStoreEntriesActiveCount;
      LODWORD(RtlpPropStoreEntriesActiveCount) = RtlpPropStoreEntriesActiveCount + 1;
      v9 = &Pool2[8 * v22];
      if ( a3 )
        v23 = *a3;
      else
        v23 = 0LL;
      *((_QWORD *)v9 + 2) = v23;
      v4 = 1;
      *(_OWORD *)v9 = *i;
      break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v16 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v18);
        }
      }
    }
    __writecr8(v8);
    ExFreePoolWithTag(Pool2, 0);
  }
  v24 = *((_QWORD *)v9 + 2);
  if ( !a3 || v24 == *a3 )
    *((_QWORD *)v9 + 2) = a2;
  if ( a4 )
    *a4 = v24;
  if ( v4 )
  {
    qsort(RtlpPropStoreEntries, (unsigned int)RtlpPropStoreEntriesActiveCount, 0x18uLL, RtlpComparePropertyEntry);
    v25 = 0;
  }
  else
  {
    v25 = 0x40000000;
  }
LABEL_42:
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v16 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v27);
      }
    }
  }
  __writecr8((unsigned __int8)v8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v25;
}
