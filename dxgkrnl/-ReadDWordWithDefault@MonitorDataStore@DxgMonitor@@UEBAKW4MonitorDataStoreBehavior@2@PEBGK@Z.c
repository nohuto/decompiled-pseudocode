__int64 __fastcall DxgMonitor::MonitorDataStore::ReadDWordWithDefault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v6 = a4;
  if ( DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, &v6) )
    return v6;
  return v4;
}
