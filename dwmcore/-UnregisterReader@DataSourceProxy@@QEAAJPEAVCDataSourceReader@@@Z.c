/*
 * XREFs of ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E082C
 * Callers:
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x1801B4CB8 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009990C (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1801DE4C8 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?ReaderUnregistered@DataProviderProxy@@QEAAX_K@Z @ 0x1801E1D38 (-ReaderUnregistered@DataProviderProxy@@QEAAX_K@Z.c)
 */

__int64 __fastcall DataSourceProxy::UnregisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  struct CWeakResourceReference *v5; // rsi
  _QWORD *v6; // rbp
  DataProviderProxy *v7; // rbx
  unsigned __int64 Unique; // rax
  struct CWeakResourceReference *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v10 = 0LL;
    CWeakReference<CResource>::Create(a2, &v10);
    v3 = (_QWORD *)*((_QWORD *)this + 26);
    v4 = (_QWORD *)*((_QWORD *)this + 25);
    v5 = v10;
    if ( v4 != v3 )
    {
      while ( 1 )
      {
        v6 = v4 + 1;
        if ( (struct CWeakResourceReference *)*v4 == v10 )
          break;
        ++v4;
        if ( v6 == v3 )
          goto LABEL_7;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
      memmove_0(v4, v4 + 1, *((_QWORD *)this + 26) - (_QWORD)v6);
      *((_QWORD *)this + 26) -= 8LL;
      v7 = (DataProviderProxy *)*((_QWORD *)this + 24);
      Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
      DataProviderProxy::ReaderUnregistered(v7, Unique);
    }
LABEL_7:
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return 0LL;
}
