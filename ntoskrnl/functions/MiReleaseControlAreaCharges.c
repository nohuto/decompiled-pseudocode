__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v6; // rsi
  KIRQL v7; // di
  char v8; // al
  BOOL v9; // r9d
  __int64 v10; // r8
  int v11; // r10d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  if ( (unsigned int)MiAweControlArea(a1, a2, (unsigned int)a2) || !(unsigned int)MiIncludeSharedCommit() )
    return 0LL;
  v6 = 0LL;
  if ( v4 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v8 = *(_BYTE *)(a1 + 62);
  if ( (v8 & 2) != 0 )
  {
    *(_BYTE *)(a1 + 62) = v8 & 0xFD;
    v9 = (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64);
    v10 = a1 + 128;
    if ( a1 != -128 )
    {
      v11 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v10 + 34) & 1) != 0 )
          goto LABEL_22;
        if ( (v11 & *(_DWORD *)(v10 + 48)) == v11 || v9 )
          break;
LABEL_23:
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_7;
      }
      v6 += MiComputeCrossPartitionSectionCharges(v10);
LABEL_22:
      if ( v9 )
        goto LABEL_7;
      goto LABEL_23;
    }
  }
LABEL_7:
  if ( v7 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v7 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  return v6;
}
