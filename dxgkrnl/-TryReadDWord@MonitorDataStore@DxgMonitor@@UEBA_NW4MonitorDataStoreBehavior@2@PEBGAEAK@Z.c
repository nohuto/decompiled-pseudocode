char __fastcall DxgMonitor::MonitorDataStore::TryReadDWord(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, a4);
}
