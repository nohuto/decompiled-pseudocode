/*
 * XREFs of ?GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C03CB670
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00111AC (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01CFD80 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetParseResult(DxgMonitor::EdidMonitorDescriptor *a1)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  int PreferredMode; // eax
  unsigned int v3; // ecx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(a1);
  PreferredMode = EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)v5);
  v3 = 2;
  if ( PreferredMode < 0 )
    return 0;
  return v3;
}
