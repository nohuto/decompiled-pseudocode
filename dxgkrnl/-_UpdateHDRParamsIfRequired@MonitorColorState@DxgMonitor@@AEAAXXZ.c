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
