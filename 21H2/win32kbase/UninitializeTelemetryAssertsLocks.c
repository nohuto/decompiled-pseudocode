/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1C00C09FC
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C00C090C (UninitializeTelemetryAssertsKM.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00C0AC8 (InitializeTelemetryAssertsKMWorkerInternal.c)
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
