ULONG_PTR __fastcall ExpStampBigPoolEntry(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v8; // rsi
  __int64 TrackerEntry; // rax
  int v10; // edx
  ULONG_PTR v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v15; // edx
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  TrackerEntry = ExpBigPoolGetTrackerEntry(BugCheckParameter2, 0LL);
  if ( (*(_DWORD *)(TrackerEntry + 12) & 0x800) != 0 )
  {
    v10 = *(_DWORD *)(TrackerEntry + 8);
    v11 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(TrackerEntry + 24);
    *(_QWORD *)(TrackerEntry + 24) = a3 ^ ExpPoolQuotaCookie ^ BugCheckParameter2;
    *a5 = v10;
    *a4 = *(_QWORD *)(TrackerEntry + 16);
  }
  else
  {
    v11 = -1LL;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  return v11;
}
