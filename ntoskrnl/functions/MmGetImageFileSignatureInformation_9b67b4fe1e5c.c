char __fastcall MmGetImageFileSignatureInformation(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // di
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  unsigned __int8 v17; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v17 = 0;
  if ( !v1 )
    return 0;
  v3 = MiLockSectionControlArea(v1, 0LL, &v17);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v7 = v17;
      if ( v17 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = v17;
        v16 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v12 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v7 = v17;
    }
    __writecr8(v7);
  }
  else
  {
    ++*(_QWORD *)(v3 + 24);
    MiRemoveUnusedSegment(v3);
    ++*(_QWORD *)(v4 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags && (v8 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v8 <= 0xFu )
    {
      v6 = v17;
      if ( v17 <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v6 = v17;
        v11 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
    else
    {
      v6 = v17;
    }
    __writecr8(v6);
    v2 = *(_BYTE *)(*(_QWORD *)v4 + 15LL) >> 4;
    MiDereferenceControlAreaBySection(v4, 1u);
  }
  return v2;
}
