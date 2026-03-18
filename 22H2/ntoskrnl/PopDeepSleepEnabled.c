/*
 * XREFs of PopDeepSleepEnabled @ 0x14028E628
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140994234 (PopEnforceDeepSleep.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14099C520 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14099C994 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
