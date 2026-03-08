/*
 * XREFs of ?QueueForDeferredDestruction@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1C5C
 * Callers:
 *     ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x1801DFDF0 (-OnDisconnected@DataSourceProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z @ 0x1801B44F0 (--$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z.c)
 *     ??$_Emplace_reallocate@AEA_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEA_K@Z @ 0x1801E0C94 (--$_Emplace_reallocate@AEA_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEA_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801E0F78 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_co.c)
 */

__int64 __fastcall DataProviderProxy::QueueForDeferredDestruction(
        DataProviderProxy *this,
        struct BamoDataSourceProxy *a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rdx
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  Unique = DataProviderHelper::GetUniqueId<BamoDataSourceProxy>((__int64)a2);
  v3 = Unique;
  if ( *std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find<void>(
          (_QWORD *)this + 10,
          &v7,
          (const unsigned __int8 *)&Unique) != *((_QWORD *)this + 11) )
  {
    v4 = (_BYTE *)*((_QWORD *)this + 19);
    if ( v4 == *((_BYTE **)this + 20) )
    {
      std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 &>((const void **)this + 18, v4, &Unique);
    }
    else
    {
      *(_QWORD *)v4 = v3;
      *((_QWORD *)this + 19) += 8LL;
    }
  }
  return 0LL;
}
