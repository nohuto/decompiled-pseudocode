/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801B4E20
 * Callers:
 *     ??$emplace@_KAEAPEAVDataProviderProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x1800FF828 (--$emplace@_KAEAPEAVDataProviderProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@.c)
 *     ??$emplace@_KAEAPEAVBamoDataSourceProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801E0E00 (--$emplace@_KAEAPEAVBamoDataSourceProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourcePro.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x180225D3C (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800F8018 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800F8018.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  __int64 **v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  _QWORD *v16; // rdx
  __int64 *v17; // r10
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    result = std::_Fnv1a_append_bytes((__int64)v7, (const unsigned __int8 *const)v9 + 16, 8uLL);
    v13 = a1[3];
    v14 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & result)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    result = *(_QWORD *)(v13 + 16 * (a1[6] & result) + 8);
    v7 = *v11;
    if ( *v11 == *(__int64 **)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v16 = *(_QWORD **)(v12 + 8);
        *v16 = v10;
        v7 = (__int64 *)v10[1];
        *v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v15 + 8) = v7;
        v10[1] = v16;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
        break;
      result = *v17;
      if ( v7 == *(__int64 **)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(_QWORD **)(v12 + 8);
        *v19 = v10;
        v7 = (__int64 *)v10[1];
        *v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v18 + 8) = v7;
        v10[1] = v19;
        *(_QWORD *)(v12 + 8) = result;
        goto LABEL_15;
      }
    }
    v20 = *(_QWORD **)(v12 + 8);
    *v20 = v10;
    v7 = (__int64 *)v10[1];
    *v7 = result;
    result = *v17;
    *(_QWORD *)result = v12;
    *v17 = (__int64)v7;
    v10[1] = v20;
    *(_QWORD *)(v12 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v9 = v10;
  }
  return result;
}
