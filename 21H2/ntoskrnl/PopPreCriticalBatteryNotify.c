/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140993C50
 * Callers:
 *     PopPolicyWorkerThread @ 0x140250220 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140995B08 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
