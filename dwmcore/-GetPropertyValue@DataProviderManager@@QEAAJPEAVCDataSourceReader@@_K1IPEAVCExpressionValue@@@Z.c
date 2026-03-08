/*
 * XREFs of ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x1801B49C0
 * Callers:
 *     ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180225B60 (-GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801B46D8 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_comp.c)
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801DFC50 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x1801E11C8 (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 */

int __fastcall DataProviderManager::GetPropertyValue(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct CExpressionValue *a6)
{
  __int64 v9; // rdx
  DataSourceProxy *DataSource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::find<void>(
    (_QWORD *)this + 5,
    &v13,
    (const unsigned __int8 *)&v14);
  if ( v13 == *((_QWORD *)this + 6) )
  {
    v9 = 318LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x80004005LL);
    return -2147467259;
  }
  DataSource = DataProviderProxy::GetDataSource(*(DataProviderProxy **)(v13 + 24), a4);
  if ( !DataSource )
  {
    v9 = 321LL;
    goto LABEL_3;
  }
  return DataSourceProxy::GetPropertyValue(DataSource, a2, a5, a6);
}
