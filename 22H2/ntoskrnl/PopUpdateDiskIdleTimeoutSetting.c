/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14079968C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056EB04 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x14079C2E0 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407D37C0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140A446BC (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1406F2C58 (PopSetPowerSettingValueAcDc.c)
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
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4LL, &PopCurrentDiskIdleTimeout);
  }
  return result;
}
