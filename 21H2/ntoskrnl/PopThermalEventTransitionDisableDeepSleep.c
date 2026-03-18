/*
 * XREFs of PopThermalEventTransitionDisableDeepSleep @ 0x1405D04CC
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140990548 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402D5F7C (PopDeepSleepSetDisengageReason.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopThermalEventTransitionDisableDeepSleep(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( a1 <= 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    if ( byte_140C22168 || a1 < dword_140C2216C )
    {
      PopDeepSleepSetDisengageReason(0xAu);
      dword_140C2216C = a1;
      byte_140C22168 = 0;
      KeSetTimer2((__int64)&unk_140C22170, a1 != 0 ? -50000000LL : -600000000LL, 0LL, 0LL);
      byte_140C221F8 = 1;
    }
    KxReleaseSpinLock(&PopThermalEventTransitionContext);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
