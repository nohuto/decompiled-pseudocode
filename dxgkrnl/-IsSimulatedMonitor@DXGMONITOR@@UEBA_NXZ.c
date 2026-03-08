/*
 * XREFs of ?IsSimulatedMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1C021AC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsSimulatedMonitor(DXGMONITOR *this)
{
  return *((_DWORD *)this + 78) != 1;
}
