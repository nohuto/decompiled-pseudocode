/*
 * XREFs of ?IsInternalMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1C01E05F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsInternalMonitor(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 176) & 2) != 0;
}
