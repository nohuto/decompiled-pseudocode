/*
 * XREFs of PopFxPlatformStateAvailable @ 0x1405CD1FC
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x1403B92D0 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1402D5F7C (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x1405C7DCC (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1405CE144 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1405D6C08 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x1405DBD2C (PopIdleWakeNotifyDevicesActive.c)
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
