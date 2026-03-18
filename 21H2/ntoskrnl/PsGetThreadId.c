/*
 * XREFs of PsGetThreadId @ 0x140230790
 * Callers:
 *     PsOpenThread @ 0x1406634A0 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x1407DA91C (PfSnBeginTrace.c)
 *     PfpScenCtxServiceThreadSet @ 0x140A6ACD4 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
