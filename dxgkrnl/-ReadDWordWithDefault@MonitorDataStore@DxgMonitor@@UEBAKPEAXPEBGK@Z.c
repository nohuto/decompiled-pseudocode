__int64 __fastcall DxgMonitor::MonitorDataStore::ReadDWordWithDefault(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v6 = a4;
  if ( DxgMonitor::MonitorDataStore::TryReadData<unsigned long>((__int64)this, a2, a3, &v6) )
    return v6;
  return v4;
}
