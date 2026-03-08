/*
 * XREFs of PopFxPlatformStateAvailable @ 0x140588EBC
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x1402F295C (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402BBB98 (PopDeepSleepSetDisengageReason.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x140582980 (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1405895A4 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140597458 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14059B40C (PopIdleWakeNotifyDevicesActive.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(unsigned int a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  PpmIdleCsVetoAccountingDeviceUpdate(a1, a2);
  result = PpmPlatformStates;
  if ( a1 == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( a2 )
    {
      PopFxSetDripsBlockedByDeviceActivity(0LL);
      PopIdleWakeNotifyDevicesActive(0LL);
      PopUpdateNonAttributedCpuTimeReference(0LL);
      return PopDeepSleepClearDisengageReason(6u);
    }
    else
    {
      LOBYTE(v4) = 1;
      PopFxSetDripsBlockedByDeviceActivity(v4);
      LOBYTE(v6) = 1;
      PopIdleWakeNotifyDevicesActive(v6);
      LOBYTE(v7) = 1;
      PopUpdateNonAttributedCpuTimeReference(v7);
      return PopDeepSleepSetDisengageReason(6u);
    }
  }
  return result;
}
