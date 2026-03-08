/*
 * XREFs of ?GetPhysicalSize@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x1C01CFC70
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0011090 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetPhysicalSize(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  return EDID_V1_GetPhysicalSize(
           *(_DWORD *)(**((_QWORD **)this + 3) + 16LL),
           (unsigned __int8 *)(**((_QWORD **)this + 3) + 24LL),
           a2,
           a3);
}
