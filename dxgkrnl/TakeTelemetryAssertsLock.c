/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C0088E94
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0088914 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex((PFAST_MUTEX)g_AssertFastMutex);
  return 0LL;
}
