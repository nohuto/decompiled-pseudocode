/*
 * XREFs of ?HasOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C021AC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DxgMonitor::EdidMonitorDescriptor::HasOverrides(DxgMonitor::EdidMonitorDescriptor *this)
{
  return *((_DWORD *)this + 5) != 0;
}
