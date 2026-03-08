/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x1402048C0
 * Callers:
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14068D630 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402BBB98 (PopDeepSleepSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopIncrementPowerSettingPendingUpdates(char a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  _InterlockedIncrement(&PopPendingPowerSettingUpdates);
  if ( a1 )
    ++PopPendingPowerSettingUpdatesQueued;
  if ( PopPendingPowerSettingUpdates == 1 )
  {
    PopPendingPowerSettingUpdateTime = MEMORY[0xFFFFF78000000008];
    PopDeepSleepSetDisengageReason(3LL);
  }
  result = KxReleaseSpinLock(&PopPendingPowerSettingUpdateLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v6 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
