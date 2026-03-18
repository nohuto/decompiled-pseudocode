/*
 * XREFs of ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C0193B3C
 * Callers:
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0193AA8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C019ADDC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01ABA70 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C0228B10 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03C3E20 (MonitorDisableMonitorVirtualModeSupport.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGMONITOR::_IsVirtualModeSupportDisabled(DXGMONITOR *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) || *((char *)this + 176) < 0 )
    return 1;
  return v1;
}
