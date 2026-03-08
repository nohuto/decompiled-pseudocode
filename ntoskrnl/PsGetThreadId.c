/*
 * XREFs of PsGetThreadId @ 0x1402DC330
 * Callers:
 *     PsOpenThread @ 0x14076A000 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x1407E31A8 (PfSnBeginTrace.c)
 *     PfpScenCtxServiceThreadSet @ 0x140A8EA80 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
