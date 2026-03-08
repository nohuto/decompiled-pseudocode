/*
 * XREFs of KeQueryTimerDueTime @ 0x14056E7B0
 * Callers:
 *     ExGetNextWakeTimeForDeepSleep @ 0x1406091D0 (ExGetNextWakeTimeForDeepSleep.c)
 *     ExGetWakeTimerList @ 0x140609248 (ExGetWakeTimerList.c)
 *     NtQueryTimer @ 0x1409F8930 (NtQueryTimer.c)
 *     ExGetNextWakeTime @ 0x140AA7D7C (ExGetNextWakeTime.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryTimerDueTime(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v8; // r9
  int v9; // edx
  bool v10; // zf

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v5 = 4;
    if ( CurrentIrql != 2 )
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v5;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    v2 = *(_QWORD *)(a1 + 24);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    v6 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v10 = (v9 & v8[5]) == 0;
      v8[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
