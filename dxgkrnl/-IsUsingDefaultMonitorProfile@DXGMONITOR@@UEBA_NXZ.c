bool __fastcall DXGMONITOR::IsUsingDefaultMonitorProfile(DXGMONITOR *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 29) + 116LL);
}
