/*
 * XREFs of ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800FF72C
 * Callers:
 *     ?Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800FF700 (-Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataPr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetUniqueId@VBamoDataProviderProxy@@@DataProviderHelper@@YA_KPEAVBamoDataProviderProxy@@@Z @ 0x1800FF7C0 (--$GetUniqueId@VBamoDataProviderProxy@@@DataProviderHelper@@YA_KPEAVBamoDataProviderProxy@@@Z.c)
 *     ??$emplace@_KAEAPEAVDataProviderProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x1800FF828 (--$emplace@_KAEAPEAVDataProviderProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@.c)
 *     ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1800FFA80 (-RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801B496C (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E03AC (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall DataProviderManager::RegisterDataProvider(
        DataProviderManager *this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  __int64 v5; // rax
  unsigned __int64 **v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 **i; // rbp
  unsigned __int64 *v10; // rsi
  DataSourceProxy *DataSourceProxy; // rax
  int v12; // eax
  const char *v13; // r9
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 Unique; // [rsp+60h] [rbp+8h] BYREF
  struct BamoDataProviderProxy *v18; // [rsp+68h] [rbp+10h] BYREF

  *((_QWORD *)a3 + 9) = this;
  v18 = a3;
  Unique = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::emplace<unsigned __int64,DataProviderProxy * &>(
    (char *)this + 40,
    v15,
    &Unique,
    &v18);
  if ( v15[8] )
  {
    v5 = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>(a3);
    v6 = (unsigned __int64 **)*((_QWORD *)this + 13);
    v7 = v5;
    for ( i = (unsigned __int64 **)*((_QWORD *)this + 14); v6 != i; ++v6 )
    {
      v10 = *v6;
      if ( (*v6)[8] == v7 )
      {
        DataSourceProxy = DataProviderManager::GetDataSourceProxy(this, v7, v10[9]);
        if ( DataSourceProxy )
        {
          v12 = DataSourceProxy::RegisterReader(DataSourceProxy, (struct CDataSourceReader *)v10);
          if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -2147024891 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xEE,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
              v13);
          *((_BYTE *)*v6 + 80) &= ~2u;
        }
      }
    }
    DataProviderManager::RemoveProcessedReadersFromReadyList(this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x800700B7LL);
    return 2147942583LL;
  }
}
