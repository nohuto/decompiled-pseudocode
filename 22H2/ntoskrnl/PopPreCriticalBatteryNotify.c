/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140992770
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361740 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x1409938F4 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
