/*
 * XREFs of ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01CFD80
 * Callers:
 *     ?_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z @ 0x1C01CFB98 (-_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z.c)
 *     ?AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01CFCC0 (-AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z @ 0x1C01CFD60 (-GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z.c)
 *     ?GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0219580 (-GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInpu.c)
 *     ?GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C021A5C0 (-GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoIn.c)
 *     ?GetBasicDisplayParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C03CB650 (-GetBasicDisplayParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@.c)
 *     ?GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C03CB670 (-GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA-AW4MonitorDescriptorParseResult@2@XZ.c)
 * Callees:
 *     <none>
 */

const unsigned __int8 *__fastcall DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  __int64 v1; // rax

  v1 = **((_QWORD **)this + 3);
  if ( *(_QWORD *)(v1 + 16) < 0x80uLL )
    return 0LL;
  else
    return (const unsigned __int8 *)(v1 + 24);
}
