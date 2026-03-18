/*
 * XREFs of ?ReaderUnregistered@DataProviderProxy@@QEAAX_K@Z @ 0x1801E5038
 * Callers:
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E3B2C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DataProviderProxy::ReaderUnregistered(DataProviderProxy *this)
{
  char *v1; // rdi
  __int64 v3; // rax

  v1 = (char *)this + 8;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
  v3 = *(_QWORD *)v1;
  --*((_DWORD *)this + 16);
  (*(void (__fastcall **)(char *))(v3 + 88))(v1);
  if ( !*((_DWORD *)this + 16) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 40LL))(v1);
}
