/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x14098F6C0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402F6DE0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140990844 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
