/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1C008D720
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C008C5C4 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C008D538 (UninitializeTelemetryAssertsKM.c)
 * Callees:
 *     <none>
 */

void UninitializeTelemetryAssertsLocks()
{
  if ( g_AssertFastMutex )
  {
    ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
    g_AssertFastMutex = 0LL;
  }
}
