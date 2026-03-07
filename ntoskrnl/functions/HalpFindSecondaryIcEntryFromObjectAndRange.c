__int64 __fastcall HalpFindSecondaryIcEntryFromObjectAndRange(__int64 a1, int a2, int a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v6 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v7 = SecondaryIcList;
  v8 = 0LL;
  v9 = v6;
  while ( (__int64 *)v7 != &SecondaryIcList )
  {
    if ( *(_DWORD *)(v7 + 16) == a2 && *(_DWORD *)(v7 + 20) == a3 && *(_QWORD *)(v7 + 48) == a1 )
    {
      v8 = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 112));
      break;
    }
    v7 = *(_QWORD *)v7;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&SecondaryIcListSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return v8;
}
