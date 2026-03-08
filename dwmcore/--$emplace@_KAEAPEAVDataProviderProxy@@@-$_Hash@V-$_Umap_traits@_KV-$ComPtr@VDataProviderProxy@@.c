/*
 * XREFs of ??$emplace@_KAEAPEAVDataProviderProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x1800FF828
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800FF72C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800FF960 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uha.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800FF994 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@.c)
 *     ??$?0_KAEAPEAVDataProviderProxy@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x1800FF9DC (--$-0_KAEAPEAVDataProviderProxy@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800FFA50 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@VDataProviderProx.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1801B4D7C (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801B4E20 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhas.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::emplace<unsigned __int64,DataProviderProxy * &>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 a4)
{
  __int64 appended; // rbp
  __int64 v9; // r8
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h]

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Find_last<unsigned __int64>(
    a1,
    &v18,
    a3,
    appended);
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v18 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(
      v19,
      a1 + 8,
      v9,
      a4);
    v10 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 < 0 )
    {
      v16 = *(_QWORD *)(a1 + 56) & 1LL | (*(_QWORD *)(a1 + 56) >> 1);
      v13 = (float)(int)v16 + (float)(int)v16;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    v14 = v20;
    if ( (float)(v11 / v13) > *(float *)a1 )
    {
      v17 = std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Forced_rehash(
        a1,
        v17);
      v18 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Find_last<unsigned __int64>(
                         a1,
                         &v18,
                         v14 + 16,
                         appended);
    }
    v20 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v18,
                      v14);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(v19);
  }
  return a2;
}
