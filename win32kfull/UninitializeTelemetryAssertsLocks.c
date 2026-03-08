/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1C00F0274
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C00EFFE8 (UninitializeTelemetryAssertsKM.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00F0134 (InitializeTelemetryAssertsKMWorkerInternal.c)
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
