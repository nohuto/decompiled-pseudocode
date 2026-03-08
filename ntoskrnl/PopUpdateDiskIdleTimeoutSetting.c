/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1408197EC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058B44C (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x140829550 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x14085FBE0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140B53A80 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
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
