/*
 * XREFs of PsGetJobLastThrottledIoTime @ 0x140582070
 * Callers:
 *     MiNoPagesLastChance @ 0x140550A08 (MiNoPagesLastChance.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PsGetJobLastThrottledIoTime(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = (volatile LONG *)(a1 + 1456);
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1456));
  v4 = *(_QWORD *)(a1 + 1504);
  v5 = v3;
  ExReleaseSpinLockSharedFromDpcLevel(v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v4;
}
