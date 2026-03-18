/*
 * XREFs of PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x14098BC20
 * Callers:
 *     <none>
 * Callees:
 *     PopSpoilBatteryEstimate @ 0x140873F1C (PopSpoilBatteryEstimate.c)
 */

NTSTATUS PopSpoilEstimatesOnPowerStateTransitionWorker()
{
  return PopSpoilBatteryEstimate(1, 0);
}
