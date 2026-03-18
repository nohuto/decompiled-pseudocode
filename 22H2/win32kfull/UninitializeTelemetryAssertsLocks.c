/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1C00B7D24
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C00B7A98 (UninitializeTelemetryAssertsKM.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00B7BE4 (InitializeTelemetryAssertsKMWorkerInternal.c)
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
