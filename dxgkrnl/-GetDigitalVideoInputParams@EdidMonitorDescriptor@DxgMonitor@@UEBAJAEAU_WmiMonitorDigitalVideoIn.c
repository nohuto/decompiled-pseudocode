/*
 * XREFs of ?GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C021A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C00240EC (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01CFD80 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDigitalVideoInputParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorDigitalVideoInputParams *a2)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  struct _WmiMonitorDigitalVideoInputParams *v3; // rdx

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_ObtainMonitorDigitalVideoInputParams(EdidBaseBlockPtr, v3);
}
