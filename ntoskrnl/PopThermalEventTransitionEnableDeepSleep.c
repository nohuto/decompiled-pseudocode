/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x14058D598
 * Callers:
 *     NtInitiatePowerAction @ 0x140988360 (NtInitiatePowerAction.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  result = (unsigned int)(a1 - 3);
  if ( (unsigned int)result <= 3 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140C3C350, 0LL, v3, v4);
    byte_140C3C3D8 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KxReleaseSpinLock((volatile signed __int64 *)&PopThermalEventTransitionContext);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
  return result;
}
