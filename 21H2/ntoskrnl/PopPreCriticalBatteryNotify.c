/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1408EC290
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402C4F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x1408EE214 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
