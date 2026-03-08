/*
 * XREFs of MonitorLogBadEDID @ 0x1C03BFCE4
 * Callers:
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01F9AA4 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ @ 0x1C01FC8D0 (-GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ.c)
 *     ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1C01FCA00 (-GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z.c)
 *     ?AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01FCB40 (-AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01FCF30 (-AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01FCFF0 (-AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FD710 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1C01FF808 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 *     ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0215D74 (-OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorLogBadEDID(int a1)
{
  __int64 result; // rax

  result = 3223126025LL;
  if ( a1 <= -1071841271 )
  {
    if ( a1 != -1071841271
      && a1 != -1071841278
      && a1 != -1071841277
      && a1 != -1071841276
      && a1 != -1071841275
      && a1 != -1071841274
      && a1 != -1071841273
      && a1 != -1071841272 )
    {
      return result;
    }
LABEL_17:
    if ( byte_1C013BBD0 )
      return WdLogSingleEntry1(2LL, a1);
    return result;
  }
  if ( a1 == -1071841270
    || a1 == -1071774966
    || a1 == -1071774965
    || a1 == -1071774942
    || a1 == -1071774889
    || a1 == -1071774888 )
  {
    goto LABEL_17;
  }
  return result;
}
