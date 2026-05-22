/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800FC4A0
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800FC954 (-erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_ea_1800FC954.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F6934 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@M.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::clear(
        __int64 a1)
{
  unsigned __int64 result; // rax
  void *v3; // rdi
  unsigned __int64 v4; // rcx

  std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>,void *>>>(
    a1,
    *(_QWORD ***)(a1 + 8));
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = *(void **)(a1 + 24);
  v4 = (unsigned __int64)(*(_QWORD *)(a1 + 32) - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 32) )
    v4 = 0LL;
  if ( v4 )
  {
    result = *(_QWORD *)(a1 + 8);
    memset64(v3, result, v4);
  }
  return result;
}
