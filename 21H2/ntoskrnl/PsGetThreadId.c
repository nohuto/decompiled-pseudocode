/*
 * XREFs of PsGetThreadId @ 0x1402344C0
 * Callers:
 *     PsOpenThread @ 0x140691E18 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x1406C859C (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x1409A281C (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
