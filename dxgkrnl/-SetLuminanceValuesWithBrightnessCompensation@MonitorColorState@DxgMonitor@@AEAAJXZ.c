/*
 * XREFs of ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01F89F4
 * Callers:
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C01F89A4 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C01F8A4C (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXI@Z @ 0x1C03C960C (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXI@Z.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03C9714 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03C987C (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x1C03C9CA8 (-_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C03C9E20 (-_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(
        DxgMonitor::MonitorColorState *this)
{
  int v2; // edx
  int v3; // eax
  int v5; // ecx
  float v6; // xmm2_4

  if ( !(80 * *((_DWORD *)this + 98)) )
    WdLogSingleEntry0(1LL);
  v2 = *((_DWORD *)this + 97);
  if ( !v2 )
  {
    v3 = *((_DWORD *)this + 80);
    *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
    *((_DWORD *)this + 83) = v3;
    return 0LL;
  }
  v5 = 80 * *((_DWORD *)this + 98);
  if ( v5 )
  {
    v6 = (float)v2 / (float)v5;
    *((_DWORD *)this + 82) = (int)(float)((float)((float)((float)*((int *)this + 79) / 10000.0) / v6) * 10000.0);
    *((_DWORD *)this + 83) = (int)(float)((float)((float)((float)*((int *)this + 80) / 10000.0) / v6) * 10000.0);
    *((_DWORD *)this + 81) = (int)(float)((float)((float)((float)*((int *)this + 78) / 10000.0) / v6) * 10000.0);
    return 0LL;
  }
  return 3221225473LL;
}
