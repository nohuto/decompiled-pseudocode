__int64 __fastcall HalpQueryNumaRangeTableInformation(void *a1, size_t Size, unsigned int *a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  unsigned int v8; // edi
  unsigned int v10; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf

  v5 = Size;
  v6 = 0;
  v7 = ExAcquireSpinLockShared(&HalpNumaMemoryRangeLock);
  v8 = 16 * (HalpNumaMemoryRangeCount + 1);
  if ( a3 )
  {
    if ( HalpNumaMemoryRangeCount )
    {
      v10 = 16 * (HalpNumaMemoryRangeCount + 1);
      if ( v8 > v5 )
        v10 = v5;
      if ( v5 )
        memmove(a1, HalpNumaMemoryRanges, v10);
    }
    else
    {
      v8 = 0;
    }
    *a3 = v8;
  }
  else if ( HalpNumaMemoryRanges )
  {
    if ( v5 >= 8 )
      v5 = 8;
    memmove(a1, &HalpNumaMemoryRanges, v5);
  }
  else
  {
    v6 = -1073741275;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&HalpNumaMemoryRangeLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v6;
}
