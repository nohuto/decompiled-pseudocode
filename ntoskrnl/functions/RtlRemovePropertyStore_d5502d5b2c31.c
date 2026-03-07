__int64 __fastcall RtlRemovePropertyStore(void *Key, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v4 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
  if ( RtlpPropStoreEntries
    && (v5 = bsearch(
               Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               RtlpComparePropertyEntry)) != 0LL )
  {
    v6 = RtlpPropStoreEntriesActiveCount;
    *a2 = v5[2];
    memmove(v5, v5 + 3, 24 * (v6 - 0xAAAAAAAAAAAAAAABuLL * (((char *)v5 - (_BYTE *)RtlpPropStoreEntries) >> 3)) - 24);
    LODWORD(RtlpPropStoreEntriesActiveCount) = v6 - 1;
    v7 = 0;
  }
  else
  {
    v7 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v7;
}
