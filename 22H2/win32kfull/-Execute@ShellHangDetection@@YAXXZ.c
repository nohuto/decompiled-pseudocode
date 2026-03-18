/*
 * XREFs of ?Execute@ShellHangDetection@@YAXXZ @ 0x1C00BB338
 * Callers:
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1C013ACF8 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01E87F0 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x1C021D8C0 (ShellHangDetection--_anonymous_namespace_--ReportHungShellToWer.c)
 */

void __fastcall ShellHangDetection::Execute(ShellHangDetection *this)
{
  __int64 v1; // rdi
  const struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rbx

  v1 = *(_QWORD *)(gptiCurrent + 456LL);
  v2 = *(const struct tagTHREADINFO **)(v1 + 288);
  if ( v2 && IsThreadHungTimeCheck(*(const struct tagTHREADINFO **)(v1 + 288), gdwHungAppTimeout)
    || (v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 192LL)) != 0
    && (v2 = *(const struct tagTHREADINFO **)(v3 + 16)) != 0LL
    && IsThreadHungTimeCheck(v2, gdwHungAppTimeout) )
  {
    ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer(v2);
  }
}
