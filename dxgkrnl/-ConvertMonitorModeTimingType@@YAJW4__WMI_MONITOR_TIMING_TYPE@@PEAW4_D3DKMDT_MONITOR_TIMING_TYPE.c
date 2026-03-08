/*
 * XREFs of ?ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x1C001F4F4
 * Callers:
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1C01FF808 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorModeTimingType(int a1, _DWORD *a2)
{
  switch ( a1 )
  {
    case 1:
      *a2 = 1;
      return 0LL;
    case 2:
      *a2 = 2;
      return 0LL;
    case 3:
      *a2 = 3;
      return 0LL;
    case 4:
      *a2 = 4;
      return 0LL;
  }
  WdLogSingleEntry1(2LL, a1);
  *a2 = 0;
  return 3223192354LL;
}
