__int64 HalpProcessSecondarySignalList()
{
  unsigned __int8 i; // al
  __int64 v1; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  __int64 result; // rax

  for ( i = HalpAcquireHighLevelLock(&SecondarySignalListLock); ; i = HalpAcquireHighLevelLock(&SecondarySignalListLock) )
  {
    v1 = SecondarySignalList;
    v2 = i;
    if ( (__int64 *)SecondarySignalList == &SecondarySignalList )
      break;
    v3 = *(_QWORD *)SecondarySignalList;
    if ( *(__int64 **)(SecondarySignalList + 8) != &SecondarySignalList || *(_QWORD *)(v3 + 8) != SecondarySignalList )
      __fastfail(3u);
    SecondarySignalList = *(_QWORD *)SecondarySignalList;
    *(_QWORD *)(v3 + 8) = &SecondarySignalList;
    KxReleaseSpinLock((volatile signed __int64 *)&SecondarySignalListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (v2 + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
    KeSetEvent((PRKEVENT)(v1 - 24), 0, 0);
  }
  SecondarySignalDpcRunning = 0;
  KxReleaseSpinLock((volatile signed __int64 *)&SecondarySignalListLock);
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && v2 <= 0xFu && v9 >= 2u )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v2 + 1));
      v8 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  result = v2;
  __writecr8(v2);
  return result;
}
