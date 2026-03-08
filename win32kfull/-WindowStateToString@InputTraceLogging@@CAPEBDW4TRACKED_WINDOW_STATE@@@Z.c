/*
 * XREFs of ?WindowStateToString@InputTraceLogging@@CAPEBDW4TRACKED_WINDOW_STATE@@@Z @ 0x1C0220C28
 * Callers:
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C022070C (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::WindowStateToString(int a1)
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
