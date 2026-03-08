/*
 * XREFs of PopDeepSleepEnabled @ 0x1402BBA98
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140991184 (PopEnforceDeepSleep.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x140999490 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140999904 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
