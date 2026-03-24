/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14078FAAC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056EBC4 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x140792080 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407D38A0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140A391C0 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x140679E68 (PopSetPowerSettingValueAcDc.c)
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
