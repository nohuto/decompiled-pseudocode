/*
 * XREFs of ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C03C9E20
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C01FA1E0 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 * Callees:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01F89F4 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::_SetLuminanceValuesToHDR(DxgMonitor::MonitorColorState *this)
{
  int v1; // eax

  *((_DWORD *)this + 78) = 100;
  *((_DWORD *)this + 79) = 14990000;
  *((_DWORD *)this + 80) = 7990000;
  v1 = *((_DWORD *)this + 80);
  *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
  *((_DWORD *)this + 83) = v1;
  *((_DWORD *)this + 84) = 3;
  DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
}
