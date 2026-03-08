/*
 * XREFs of ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C01F8940
 * Callers:
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C0169354 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C01F8A4C (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C01FA1E0 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(DxgMonitor::MonitorColorState *this)
{
  *((_DWORD *)this + 59) = 670720;
  *((_DWORD *)this + 60) = 346112;
  *((_DWORD *)this + 61) = 314368;
  *((_DWORD *)this + 62) = 628736;
  *((_DWORD *)this + 63) = 156672;
  *((_DWORD *)this + 64) = 62464;
  *((_DWORD *)this + 65) = 327680;
  *((_DWORD *)this + 66) = 345088;
  *((_DWORD *)this + 68) = 1;
}
