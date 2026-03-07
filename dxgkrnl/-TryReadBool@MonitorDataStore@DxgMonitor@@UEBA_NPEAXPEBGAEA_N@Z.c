char __fastcall DxgMonitor::MonitorDataStore::TryReadBool(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  char result; // al
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0;
  result = DxgMonitor::MonitorDataStore::TryReadData<unsigned long>((__int64)this, a2, a3, v6);
  if ( result )
    *a4 = v6[0] != 0;
  return result;
}
