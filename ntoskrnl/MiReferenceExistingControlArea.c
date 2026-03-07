__int64 __fastcall MiReferenceExistingControlArea(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  __int64 *v6; // rdi
  unsigned __int8 v7; // bl
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r8
  int v21; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v23; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  unsigned __int8 v27; // [rsp+30h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v27 = 0;
  v3 = MiLockSectionControlArea(*(_QWORD *)(v1 + 40), (*(_BYTE *)(a1 + 19) & 1) == 0, &v27);
  v4 = v3;
  if ( !v3 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v23 = v27;
      if ( v27 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = v27;
        v26 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v13 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v23 = v27;
    }
    __writecr8(v23);
    return 3221225473LL;
  }
  v5 = MiValidateControlAreaPartition(a1, v3);
  if ( v5 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && v27 <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    goto LABEL_24;
  }
  if ( (*(_DWORD *)a1 & 0x8000000) != 0 && (*(_BYTE *)(v4 + 62) & 0xC) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && v27 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v13 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    v5 = -1073739503;
LABEL_24:
    __writecr8(v27);
    return (unsigned int)v5;
  }
  v6 = MiReferenceActiveControlArea((_DWORD *)a1, v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags && (v18 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v18 <= 0xFu )
  {
    v7 = v27;
    if ( v27 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      v7 = v27;
      v21 = ~(unsigned __int16)(-1LL << (v27 + 1));
      v13 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  else
  {
    v7 = v27;
  }
  __writecr8(v7);
  MiReleaseControlAreaWaiters(v6);
  return 0LL;
}
