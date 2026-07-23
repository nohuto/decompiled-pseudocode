/*
 * XREFs of PspJobIoRateVolumeEntryReference @ 0x140582454
 * Callers:
 *     PsIoRateControlReference @ 0x140207B68 (PsIoRateControlReference.c)
 * Callees:
 *     PspIoRateEntryIoControlReference @ 0x140207C04 (PspIoRateEntryIoControlReference.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x140530F10 (MiLockTrackerCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryReference(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r14
  signed __int64 v5; // rbp
  KIRQL v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  bool v9; // zf
  signed __int64 Count; // rbx
  int v11; // edi
  int v12; // eax
  struct _EX_RUNDOWN_REF v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx

  v2 = (volatile LONG *)(a1 + 1456);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1456));
  v7 = a1 + 1464;
  v8 = v6;
  v9 = (*(_BYTE *)(a1 + 1472) & 1) == 0;
  Count = *(_QWORD *)(a1 + 1464);
  if ( !v9 && Count )
    Count ^= v7;
  v11 = *(_BYTE *)(v7 + 8) & 1;
  if ( Count )
  {
    do
    {
      v12 = MiLockTrackerCompare(a2, Count);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v13.Count = *(_QWORD *)(Count + 8);
      }
      else
      {
        v13.Count = *(_QWORD *)Count;
      }
      if ( v11 && v13.Count )
        Count ^= v13.Count;
      else
        Count = v13.Count;
    }
    while ( Count );
    if ( Count )
    {
      v5 = Count;
      PspIoRateEntryIoControlReference((struct _EX_RUNDOWN_REF *)Count);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v9 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v5;
}
