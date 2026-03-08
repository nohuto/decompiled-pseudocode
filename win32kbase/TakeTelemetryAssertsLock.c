/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C008C6C8
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008C178 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C008D538 (UninitializeTelemetryAssertsKM.c)
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
