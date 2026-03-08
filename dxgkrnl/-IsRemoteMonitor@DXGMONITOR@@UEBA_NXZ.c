/*
 * XREFs of ?IsRemoteMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1C01E0630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsRemoteMonitor(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 177) & 0x40) != 0;
}
