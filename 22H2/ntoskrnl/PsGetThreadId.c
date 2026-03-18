/*
 * XREFs of PsGetThreadId @ 0x140346280
 * Callers:
 *     PfSnBeginTrace @ 0x14074DEC8 (PfSnBeginTrace.c)
 *     PsOpenThread @ 0x1407BBD70 (PsOpenThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x140A91CE0 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
