/*
 * XREFs of ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C021A550
 * Callers:
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C01FD958 (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C021A934 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C0180454 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

bool __fastcall DXGMONITOR::_ValidateMonitorOrientation(DXGMONITOR *this)
{
  char IsVirtualModeSupportDisabled; // al
  __int64 v2; // rcx
  int v3; // r9d
  char v4; // r8

  IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(this);
  v4 = 0;
  if ( IsVirtualModeSupportDisabled )
    return v3 == 0;
  if ( (v3 & 0xFFFFFFFD) == 0 || v3 == *(_DWORD *)(v2 + 328) )
    return 1;
  return v4;
}
