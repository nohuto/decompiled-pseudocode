__int64 __fastcall MmIsFileSectionActive(_QWORD *a1, int a2, _DWORD *a3)
{
  char v4; // bl
  int IsSectionActive; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  KIRQL v11; // bl
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  KIRQL v14; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  KIRQL v23; // [rsp+48h] [rbp+10h] BYREF

  v23 = 0;
  v4 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 || (a2 & 4) == 0 )
    return 3221225485LL;
  IsSectionActive = 0;
  if ( (a2 & 1) == 0 )
    goto LABEL_31;
  v7 = MiLockSectionControlArea(a1, 0, &v23);
  if ( !v7 )
    goto LABEL_31;
  IsSectionActive = MiIsSectionActive(v7);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v14 = v23;
    if ( v23 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = v23;
      v17 = ~(unsigned __int16)(-1LL << (v23 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v14 = v23;
  }
  __writecr8(v14);
  if ( !IsSectionActive )
  {
LABEL_31:
    if ( (v4 & 2) != 0 )
    {
      v8 = MiLockSectionControlArea(a1, 1, &v23);
      if ( v8 )
      {
        IsSectionActive = MiIsSectionActive(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
        if ( KiIrqlFlags && (v19 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v19 <= 0xFu )
        {
          v11 = v23;
          if ( v23 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v11 = v23;
            v22 = ~(unsigned __int16)(-1LL << (v23 + 1));
            v18 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        else
        {
          v11 = v23;
        }
        __writecr8(v11);
      }
    }
  }
  *a3 = IsSectionActive;
  return 0LL;
}
