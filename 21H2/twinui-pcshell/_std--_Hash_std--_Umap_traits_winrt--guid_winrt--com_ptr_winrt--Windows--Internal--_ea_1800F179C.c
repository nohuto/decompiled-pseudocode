/*
 * XREFs of _std::_Hash_std::_Umap_traits_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow______0___::_Insert_unverified_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow____________::_1_::catch$47 @ 0x1800F179C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800EE304 (-_Make_iter@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@1@V21@@Z @ 0x1800F19B0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUguid@winrt@@U-$com_pt.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow______0___::_Insert_unverified_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow____________::_1_::catch_47(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *iter; // rax

  iter = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
           a1,
           a2 + 12,
           a2[13]);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>>>,void>(
    a2[10],
    a2 + 4,
    *iter);
  throw;
}
