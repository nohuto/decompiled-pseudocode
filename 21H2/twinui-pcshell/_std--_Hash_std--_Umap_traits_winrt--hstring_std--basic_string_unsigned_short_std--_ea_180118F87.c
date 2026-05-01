/*
 * XREFs of _std::_Hash_std::_Umap_traits_winrt::hstring_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0___::_Insert_unverified_std::pair_winrt::hstring_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::_Not_a_node_tag__::_1_::catch$50 @ 0x180118F87
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800EE304 (-_Make_iter@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x180119C3C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUhstring@winrt@@V-$bas.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_winrt::hstring_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0___::_Insert_unverified_std::pair_winrt::hstring_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::_Not_a_node_tag__::_1_::catch_50(
        __int64 a1,
        __int64 a2)
{
  _QWORD *iter; // rax

  iter = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
           a1,
           (_QWORD *)(a2 + 112),
           *(_QWORD *)(a2 + 112));
  std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::wstring>>>>,void>(
    *(_QWORD *)(a2 + 96),
    a2 + 32,
    *iter);
  throw;
}
