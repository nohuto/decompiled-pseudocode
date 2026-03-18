/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14083248C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1405CFB5C (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x14085FC80 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1408638B0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140B15390 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4u, &PopCurrentDiskIdleTimeout);
  }
  return result;
}
