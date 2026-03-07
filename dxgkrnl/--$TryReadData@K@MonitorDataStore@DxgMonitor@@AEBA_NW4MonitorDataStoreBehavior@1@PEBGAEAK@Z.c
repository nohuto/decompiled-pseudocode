char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char v4; // bl
  char v7; // si
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+68h] [rbp+28h] BYREF

  v20 = 0;
  v4 = 0;
  v7 = a2;
  if ( (a2 & 8) != 0 )
  {
    v16 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v17 = *v16;
    Handle[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, HANDLE *))(v17 + 24))(v16, a2, Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v18, Handle[0], a3, &v20) )
    {
      v4 = 1;
      *a4 = v20;
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  if ( (v7 & 1) != 0 )
  {
    v9 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v10 = *v9;
    Handle[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, __int64, HANDLE *))(v10 + 16))(v9, a2, 2LL, Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v11, Handle[0], a3, &v20) )
    {
      v4 = 1;
      *a4 = v20;
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  if ( (v7 & 2) != 0 )
  {
    v12 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v13 = *v12;
    Handle[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, HANDLE *))(v13 + 8))(v12, a2, Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v14, Handle[0], a3, &v20) )
    {
      v4 = 1;
      *a4 = v20;
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return v4;
}
