/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_K_K@std@@@1@@Z @ 0x1800E7310
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x1800EABCC (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 * Callees:
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@@Z @ 0x1800E4368 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$p.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAXXZ @ 0x1800ED3DC (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  *(_DWORD *)a1 = *a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Alloc_sentinel_and_proxy(a1 + 8);
  v7 = *v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>(
    a1 + 24,
    v5,
    &v7);
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}
