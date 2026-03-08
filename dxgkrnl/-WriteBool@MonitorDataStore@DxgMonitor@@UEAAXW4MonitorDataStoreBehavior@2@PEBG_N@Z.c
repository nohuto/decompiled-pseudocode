/*
 * XREFs of ?WriteBool@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1C03CA760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x1C03CA404 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 */

void __fastcall DxgMonitor::MonitorDataStore::WriteBool(__int64 a1, char a2, const WCHAR *a3, unsigned __int8 a4)
{
  __int64 *v4; // rcx
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 4) != 0 )
  {
    v4 = *(__int64 **)(a1 + 16);
    v6 = a4;
    v7 = *v4;
    Handle[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, HANDLE *))(v7 + 8))(v4, 0LL, Handle) >= 0 )
      DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v8, Handle[0], a3, v6);
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
}
