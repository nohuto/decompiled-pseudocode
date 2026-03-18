/*
 * XREFs of ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209428
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C0207988 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03CDF6C (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 *     ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x1C03CE4F4 (-_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z.c)
 * Callees:
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C019DDDC (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C020787C (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C02078E0 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_GetColorPrimariesType@MonitorColorState@DxgMonitor@@AEBA?AW4ColorPrimaryType@12@XZ @ 0x1C020BE18 (-_GetColorPrimariesType@MonitorColorState@DxgMonitor@@AEBA-AW4ColorPrimaryType@12@XZ.c)
 *     ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C03CE66C (-_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(DxgMonitor::MonitorColorState *this)
{
  DxgMonitor::MonitorColorState *v2; // rcx
  unsigned int v3; // r9d

  DxgMonitor::MonitorColorState::_GetColorPrimariesType();
  if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    if ( v3 <= 1 )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(v2);
    if ( !*((_DWORD *)this + 79) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToHDR(this);
  }
  else
  {
    if ( !v3 )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(v2);
    if ( !*((_DWORD *)this + 79) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(this);
  }
}
