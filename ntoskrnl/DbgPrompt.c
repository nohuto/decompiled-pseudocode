/*
 * XREFs of DbgPrompt @ 0x1405A5370
 * Callers:
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x1409B0A80 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140420410 (DebugPrompt.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // r9
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 0LL;
  WORD1(v6[0]) = Length;
  v6[1] = Response;
  v7 = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Prompt[v4] );
  *((_QWORD *)&v7 + 1) = Prompt;
  LOWORD(v7) = v4;
  return DebugPrompt((__int64)&v7, (__int64)v6, *(__int64 *)&Length, v3);
}
