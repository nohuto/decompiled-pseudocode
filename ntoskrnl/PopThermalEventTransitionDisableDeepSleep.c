/*
 * XREFs of PopThermalEventTransitionDisableDeepSleep @ 0x14058D4A8
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140987DC8 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402BBB98 (PopDeepSleepSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( byte_140C3C348 || a1 < dword_140C3C34C )
    {
      PopDeepSleepSetDisengageReason(0xAu);
      dword_140C3C34C = a1;
      byte_140C3C348 = 0;
      KeSetTimer2((__int64)&unk_140C3C350, a1 != 0 ? -50000000LL : -600000000LL, 0LL, 0LL);
      byte_140C3C3D8 = 1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&PopThermalEventTransitionContext);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
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
    __writecr8(v2);
  }
}
