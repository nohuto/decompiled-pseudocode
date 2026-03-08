/*
 * XREFs of ??$emplace@_KAEAPEAVBamoDataSourceProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801E0E00
 * Callers:
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1140 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1801B4D7C (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801B4E20 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhas.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1801E0BC8 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@.c)
 *     ??$?0_KAEAPEAVBamoDataSourceProxy@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801E0C20 (--$-0_KAEAPEAVBamoDataSourceProxy@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801E0DA8 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_U.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801E0FD4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@VBamoDataSourcePr.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::emplace<unsigned __int64,BamoDataSourceProxy * &>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 appended; // rbp
  _QWORD *v9; // r8
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-10h]

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
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
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>(
      &v19,
      (__int64)(a1 + 2),
      v9,
      a4);
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v13 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    v15 = v20;
    if ( (float)(v11 / v13) > *a1 )
    {
      v16 = std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v10);
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Forced_rehash(
        a1,
        v16);
      v18 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
                         a1,
                         &v18,
                         v15 + 2,
                         appended);
    }
    v20 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v18,
                      v15);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>(&v19);
  }
  return a2;
}
