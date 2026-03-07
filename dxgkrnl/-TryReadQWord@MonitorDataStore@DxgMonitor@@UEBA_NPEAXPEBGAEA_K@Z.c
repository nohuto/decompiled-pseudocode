char __fastcall DxgMonitor::MonitorDataStore::TryReadQWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned __int64 *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>((__int64)this, a2, a3, a4);
}
