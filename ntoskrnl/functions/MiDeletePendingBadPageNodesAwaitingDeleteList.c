__int64 MiDeletePendingBadPageNodesAwaitingDeleteList()
{
  KIRQL i; // al
  _QWORD *v1; // rcx
  PVOID *v2; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  PVOID v8; // rdi
  KIRQL v9; // bl
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  __int64 result; // rax

  for ( i = ExAcquireSpinLockExclusive(&dword_140C66F90); ; i = ExAcquireSpinLockExclusive(&dword_140C66F90) )
  {
    v8 = qword_140C66FA0;
    v9 = i;
    if ( qword_140C66FA0 == &qword_140C66FA0 )
      break;
    v1 = *(_QWORD **)qword_140C66FA0;
    v2 = (PVOID *)*((_QWORD *)qword_140C66FA0 + 1);
    if ( *(PVOID *)(*(_QWORD *)qword_140C66FA0 + 8LL) != qword_140C66FA0 || *v2 != qword_140C66FA0 )
      __fastfail(3u);
    *v2 = v1;
    v1[1] = v2;
    --qword_140C66FB0;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66F90);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v9);
    ExFreePoolWithTag(v8, 0);
  }
  byte_140C66FB8 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66F90);
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && v9 <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v7 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  result = v9;
  __writecr8(v9);
  return result;
}
