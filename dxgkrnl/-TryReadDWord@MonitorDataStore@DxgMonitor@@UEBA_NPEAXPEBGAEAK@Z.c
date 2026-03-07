char __fastcall DxgMonitor::MonitorDataStore::TryReadDWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned long>((__int64)this, a2, a3, a4);
}
