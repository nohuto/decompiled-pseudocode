bool __fastcall DxgMonitor::MonitorDisplayPortState::IsAddressValid(DxgMonitor::MonitorDisplayPortState *this)
{
  return *((_BYTE *)this + 8);
}
