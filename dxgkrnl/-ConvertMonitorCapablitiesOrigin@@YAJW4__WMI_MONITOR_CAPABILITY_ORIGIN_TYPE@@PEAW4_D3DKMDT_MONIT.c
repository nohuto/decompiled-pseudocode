/*
 * XREFs of ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C001F4B8
 * Callers:
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C001F3F0 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?TryGetDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA_NIAEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C01FF790 (-TryGetDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA_NIAEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1C01FF808 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 *     ?SerializeToBuffer@EdidMonitorDescriptor@DxgMonitor@@UEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALIZATION@@I@Z @ 0x1C03CB6C0 (-SerializeToBuffer@EdidMonitorDescriptor@DxgMonitor@@UEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALIZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorCapablitiesOrigin(int a1, _DWORD *a2)
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
  return 3223192407LL;
}
