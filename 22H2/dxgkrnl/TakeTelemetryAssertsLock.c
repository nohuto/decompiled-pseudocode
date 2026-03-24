/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C006FBDC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C006F69C (MicrosoftTelemetryAssertTriggeredWorker.c)
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
