/*
 * XREFs of DbgPrompt @ 0x1405854B0
 * Callers:
 *     RtlAssert @ 0x140588750 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14090AF34 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1409D826C (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140406F60 (DebugPrompt.c)
 */

ULONG __stdcall DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
