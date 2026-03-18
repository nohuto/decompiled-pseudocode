/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C004CAEC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C004C594 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
