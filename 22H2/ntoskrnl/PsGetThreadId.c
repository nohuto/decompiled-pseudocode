/*
 * XREFs of PsGetThreadId @ 0x14030DA30
 * Callers:
 *     PsOpenThread @ 0x140626120 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x14062E040 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1408BD970 (KiSwapToUmsThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x1409A155C (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
