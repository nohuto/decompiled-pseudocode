/*
 * XREFs of ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001ED38
 * Callers:
 *     ?GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ @ 0x1C01FC8D0 (-GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ.c)
 *     ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1C01FCA00 (-GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z.c)
 *     ?AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01FCB40 (-AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01FCF30 (-AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01FCFF0 (-AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FD710 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C03C7540 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_IsEDIDBaseBlock(unsigned __int8 *a1)
{
  _BYTE v2[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v3; // [rsp+70h] [rbp-18h]

  if ( !a1 )
    return 3221225485LL;
  v3 = 0LL;
  return MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v2, a1, 0x80u);
}
