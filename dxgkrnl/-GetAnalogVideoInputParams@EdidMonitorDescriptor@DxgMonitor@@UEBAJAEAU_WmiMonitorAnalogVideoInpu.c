/*
 * XREFs of ?GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0219580
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0023E30 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01CFD80 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetAnalogVideoInputParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  struct _WmiMonitorAnalogVideoInputParams *v3; // rdx

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_ObtainMonitorAnalogVideoInputParams(EdidBaseBlockPtr, v3);
}
