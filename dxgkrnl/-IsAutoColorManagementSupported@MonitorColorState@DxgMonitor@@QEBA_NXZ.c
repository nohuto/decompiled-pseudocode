bool __fastcall DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(DxgMonitor::MonitorColorState *this)
{
  char v1; // r9

  v1 = 0;
  if ( *((_BYTE *)this + 385) )
    return !DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
  return v1;
}
