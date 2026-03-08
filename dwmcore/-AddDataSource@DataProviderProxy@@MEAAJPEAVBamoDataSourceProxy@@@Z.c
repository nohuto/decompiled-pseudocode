/*
 * XREFs of ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z @ 0x1801B44F0 (--$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801B489C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ??$emplace@_KAEAPEAVBamoDataSourceProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801E0E00 (--$emplace@_KAEAPEAVBamoDataSourceProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourcePro.c)
 */

__int64 __fastcall DataProviderProxy::AddDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  DataProviderManager *v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 Unique; // [rsp+40h] [rbp+8h] BYREF
  struct BamoDataSourceProxy *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *((_QWORD *)a2 + 24) = this;
  Unique = DataProviderHelper::GetUniqueId<BamoDataSourceProxy>((__int64)a2);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::emplace<unsigned __int64,BamoDataSourceProxy * &>(
    (float *)this + 20,
    (__int64)v5,
    (unsigned __int8 *)&Unique,
    (void (__fastcall ****)(_QWORD))&v7);
  if ( !v5[8] )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, 2147942583LL);
  v3 = (DataProviderManager *)*((_QWORD *)this + 9);
  if ( v3 )
    DataProviderManager::CheckAndRegisterReadyReaders(v3, this, v7);
  return 0LL;
}
