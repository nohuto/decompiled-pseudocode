bool __fastcall DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  int v4; // ebx
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v6 = a4;
  if ( (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, &v6) )
    v4 = v6;
  return v4 != 0;
}
