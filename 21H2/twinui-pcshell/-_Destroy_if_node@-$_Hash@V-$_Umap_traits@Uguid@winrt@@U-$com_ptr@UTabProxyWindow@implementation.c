/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800F313C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow______0___::_Insert_unverified_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow____________::_1_::catch$48 @ 0x1800F1778 (_std--_Hash_std--_Umap_traits_winrt--guid_winrt--com_ptr_winrt--Windows--Internal--Shell--implem.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800F3A68 (-erase@-$list@U-$pair@$$CBUguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>::erase(
           a1 + 8,
           &v3,
           a2);
}
