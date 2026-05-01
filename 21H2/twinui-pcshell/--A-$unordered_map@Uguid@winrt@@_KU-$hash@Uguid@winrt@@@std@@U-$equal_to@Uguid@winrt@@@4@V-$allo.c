/*
 * XREFs of ??A?$unordered_map@Uguid@winrt@@_KU?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@@std@@QEAAAEA_KAEBUguid@winrt@@@Z @ 0x1800E8700
 * Callers:
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800E8B14 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800EC284 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUguid@winrt@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUguid@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800E48B4 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUguid@winrt@@@2@V-$tuple@$$V@2@@-$list@U-$.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBUguid@winrt@@_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUguid@winrt@@_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@1@@Z @ 0x1800E4BB8 (--$_Insert_unverified@AEAU-$pair@$$CBUguid@winrt@@_K@std@@V-$_List_unchecked_iterator@V-$_List_v.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@AEBUguid@winrt@@@Z @ 0x1800EF3F8 (-lower_bound@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid.c)
 */

_OWORD *__fastcall std::unordered_map<winrt::guid,unsigned __int64>::operator[](__int64 a1, _OWORD *a2)
{
  __int64 v4; // r8
  _OWORD *v5; // rax
  _OWORD *v6; // rdx
  __int64 v7; // rdx
  _OWORD *v9; // [rsp+30h] [rbp-18h] BYREF
  _OWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::lower_bound(
    a1,
    &v10,
    a2);
  v5 = v10;
  v6 = *(_OWORD **)(a1 + 8);
  if ( v10 == v6 )
  {
    v7 = *(_QWORD *)v6;
    v10 = a2;
    std::list<std::pair<winrt::guid const,unsigned __int64>>::_Insert<std::piecewise_construct_t const &,std::tuple<winrt::guid const &>,std::tuple<>>(
      a1 + 8,
      v7,
      v4,
      &v10);
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Insert_unverified<std::pair<winrt::guid const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>(
      a1,
      (__int64)&v9,
      (winrt::impl *)(**(_QWORD **)(a1 + 8) + 16LL),
      **(_QWORD ****)(a1 + 8));
    v5 = v9;
  }
  return v5 + 2;
}
