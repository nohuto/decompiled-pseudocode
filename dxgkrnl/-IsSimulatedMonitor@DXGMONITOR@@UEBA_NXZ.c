bool __fastcall DXGMONITOR::IsSimulatedMonitor(DXGMONITOR *this)
{
  return *((_DWORD *)this + 78) != 1;
}
