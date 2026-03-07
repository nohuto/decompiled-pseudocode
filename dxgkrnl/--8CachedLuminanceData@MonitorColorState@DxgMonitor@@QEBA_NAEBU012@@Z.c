bool __fastcall DxgMonitor::MonitorColorState::CachedLuminanceData::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2];
}
