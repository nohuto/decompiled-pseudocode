/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C011CAD0
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C011C9A8 (UninitializeTelemetryAssertsKM.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0147EB4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex(g_AssertFastMutex);
  return 0LL;
}
