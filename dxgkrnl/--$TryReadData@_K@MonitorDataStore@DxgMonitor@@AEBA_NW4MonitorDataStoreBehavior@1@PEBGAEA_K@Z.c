char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  char v4; // bl
  char v7; // si
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-8h] BYREF

  v19 = 0LL;
  v4 = 0;
  v7 = a2;
  if ( (a2 & 8) != 0 )
  {
    v13 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v14 = *v13;
    Handle = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, HANDLE *))(v14 + 24))(v13, a2, &Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v15, Handle, a3, &v19) )
    {
      v4 = 1;
      *a4 = v19;
    }
    if ( Handle )
      ZwClose(Handle);
  }
  if ( (v7 & 1) != 0 )
  {
    v16 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v17 = *v16;
    Handle = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, __int64, HANDLE *))(v17 + 16))(v16, a2, 2LL, &Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v18, Handle, a3, &v19) )
    {
      v4 = 1;
      *a4 = v19;
    }
    if ( Handle )
      ZwClose(Handle);
  }
  if ( (v7 & 2) != 0 )
  {
    v9 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v10 = *v9;
    Handle = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, HANDLE *))(v10 + 8))(v9, a2, &Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v11, Handle, a3, &v19) )
    {
      v4 = 1;
      *a4 = v19;
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return v4;
}
