/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGMONITOR@@UEBA_NXZ @ 0x1C01E0650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsUsingDefaultMonitorProfile(DXGMONITOR *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 29) + 116LL);
}
