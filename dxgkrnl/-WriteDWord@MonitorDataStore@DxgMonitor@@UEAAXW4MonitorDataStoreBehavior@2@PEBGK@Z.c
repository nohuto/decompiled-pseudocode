void __fastcall DxgMonitor::MonitorDataStore::WriteDWord(__int64 a1, char a2, const WCHAR *a3, int a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 4) != 0 )
  {
    v4 = *(__int64 **)(a1 + 16);
    v7 = *v4;
    Handle[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, HANDLE *))(v7 + 8))(v4, 0LL, Handle) >= 0 )
      DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v8, Handle[0], a3, a4);
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
}
