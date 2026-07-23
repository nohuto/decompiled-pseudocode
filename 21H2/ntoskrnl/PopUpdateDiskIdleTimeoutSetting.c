/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14079105C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056EE04 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x140793630 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407D3A10 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140A3A1C0 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14066D5A8 (PopSetPowerSettingValueAcDc.c)
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
