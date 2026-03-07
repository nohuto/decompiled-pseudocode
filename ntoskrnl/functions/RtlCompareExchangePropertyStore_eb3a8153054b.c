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
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  void *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax

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
      v26 = -1073741670;
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
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v8);
    Pool2 = (char *)ExAllocatePool2(64LL, 24LL * v12, 1886539858LL);
    if ( !Pool2 )
    {
LABEL_40:
      v26 = -1073741801;
      goto LABEL_42;
    }
    v8 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v22 = RtlpPropStoreEntries;
      if ( RtlpPropStoreEntries )
      {
        memmove(Pool2, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v5 = v22;
      }
      RtlpPropStoreEntriesTotalCount = v12;
      i = Key;
      RtlpPropStoreEntries = Pool2;
LABEL_28:
      v23 = 3LL * (unsigned int)RtlpPropStoreEntriesActiveCount;
      LODWORD(RtlpPropStoreEntriesActiveCount) = RtlpPropStoreEntriesActiveCount + 1;
      v9 = &Pool2[8 * v23];
      if ( a3 )
        v24 = *a3;
      else
        v24 = 0LL;
      *((_QWORD *)v9 + 2) = v24;
      v4 = 1;
      *(_OWORD *)v9 = *i;
      break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
    __writecr8(v8);
    ExFreePoolWithTag(Pool2, 0);
  }
  v25 = *((_QWORD *)v9 + 2);
  if ( !a3 || v25 == *a3 )
    *((_QWORD *)v9 + 2) = a2;
  if ( a4 )
    *a4 = v25;
  if ( v4 )
  {
    qsort(RtlpPropStoreEntries, (unsigned int)RtlpPropStoreEntriesActiveCount, 0x18uLL, RtlpComparePropertyEntry);
    v26 = 0;
  }
  else
  {
    v26 = 0x40000000;
  }
LABEL_42:
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v17 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v28);
    }
  }
  __writecr8((unsigned __int8)v8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v26;
}
