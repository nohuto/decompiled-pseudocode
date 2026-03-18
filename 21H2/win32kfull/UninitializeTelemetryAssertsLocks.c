/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1C011CA98
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C011C884 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C011C9A8 (UninitializeTelemetryAssertsKM.c)
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
