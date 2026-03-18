/*
 * XREFs of ?GetStateString@CRecalcState@@CAPEBDW4State@AdvancedWindowPos@@@Z @ 0x1C02370B8
 * Callers:
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C0236BC0 (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall CRecalcState::GetStateString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Restored";
  v1 = a1 - 1;
  if ( !v1 )
    return "Maximized";
  v2 = v1 - 1;
  if ( !v2 )
    return "Minimized";
  if ( v2 == 1 )
    return "Arranged";
  return "UNKNOWN";
}
