void __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r14
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  int v8; // esi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rbx
  char v12; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  v2 = (volatile LONG *)(a1 + 1672);
  v4 = a1 + 1680;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1672));
  v6 = *(_QWORD *)v4;
  v7 = v5;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
    v6 ^= v4;
  v8 = *(_BYTE *)(v4 + 8) & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 )
        break;
      v10 = (_QWORD *)(v6 + 8);
      v9 = *(_QWORD *)(v6 + 8);
      if ( v9 )
      {
LABEL_5:
        if ( v8 )
          v6 ^= v9;
        else
          v6 = v9;
        *v10 = 0LL;
      }
      else
      {
        v11 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v8 && v11 )
          v11 ^= v6;
        PspIoRateEntryVolumeDelete(v6, a2);
        if ( !v11 )
          goto LABEL_13;
        v6 = v11;
      }
    }
    v10 = (_QWORD *)v6;
    goto LABEL_5;
  }
LABEL_13:
  v12 = *(_BYTE *)(v4 + 8);
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( (v12 & 1) != 0 )
    *(_BYTE *)(v4 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
}
