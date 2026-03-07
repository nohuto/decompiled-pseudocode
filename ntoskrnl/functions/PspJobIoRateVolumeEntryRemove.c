unsigned __int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r15
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  KIRQL v6; // al
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v14; // edx
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v2 = (volatile LONG *)(a1 + 1672);
  v4 = a1 + 1680;
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1672));
  v7 = *(_QWORD *)v4;
  v8 = v6;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v9 = *(_BYTE *)(v4 + 8) & 1;
  while ( v7 )
  {
    v10 = MiLockTrackerCompare(a2, v7);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v7;
    }
    if ( v9 && v11 )
      v7 ^= v11;
    else
      v7 = v11;
  }
  if ( v7 )
  {
    RtlRbRemoveNode((unsigned __int64 *)v4, v7);
    v5 = v7;
    *(_QWORD *)(v7 + 16) = -1LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
  return v5;
}
