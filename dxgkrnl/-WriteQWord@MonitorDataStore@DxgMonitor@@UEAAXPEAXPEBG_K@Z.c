void __fastcall DxgMonitor::MonitorDataStore::WriteQWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3)
{
  DxgMonitor::MonitorDataStore::WriteData<unsigned __int64>((__int64)this, a2, a3);
}
