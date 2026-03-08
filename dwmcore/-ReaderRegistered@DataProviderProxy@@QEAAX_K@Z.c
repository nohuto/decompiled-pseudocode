/*
 * XREFs of ?ReaderRegistered@DataProviderProxy@@QEAAX_K@Z @ 0x1801E1CD8
 * Callers:
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E03AC (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DataProviderProxy::ReaderRegistered(DataProviderProxy *this, __int64 a2)
{
  char *v2; // rbx

  ++*((_DWORD *)this + 16);
  v2 = (char *)this + 8;
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 88LL))(
    (char *)this + 8,
    *((unsigned int *)this + 16));
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 24LL))(v2, a2);
}
