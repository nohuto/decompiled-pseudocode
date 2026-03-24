/*
 * XREFs of PsGetThreadId @ 0x1402B62E0
 * Callers:
 *     PsOpenThread @ 0x140625D00 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x14071A8AC (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1408BD920 (KiSwapToUmsThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x1409A18EC (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
