/*
 * XREFs of PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x140988B70
 * Callers:
 *     <none>
 * Callees:
 *     PopSpoilBatteryEstimate @ 0x14087105C (PopSpoilBatteryEstimate.c)
 */

NTSTATUS PopSpoilEstimatesOnPowerStateTransitionWorker()
{
  return PopSpoilBatteryEstimate(1, 0);
}
