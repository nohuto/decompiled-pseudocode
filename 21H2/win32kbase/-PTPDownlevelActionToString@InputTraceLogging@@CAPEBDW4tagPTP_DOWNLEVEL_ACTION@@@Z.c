/*
 * XREFs of ?PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z @ 0x1C01A6E08
 * Callers:
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01A58BC (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PTPDownlevelActionToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Wheel";
  v1 = a1 - 1;
  if ( !v1 )
    return "HWheel";
  if ( v1 == 1 )
    return "CtrlKey";
  return "UNKNOWN";
}
