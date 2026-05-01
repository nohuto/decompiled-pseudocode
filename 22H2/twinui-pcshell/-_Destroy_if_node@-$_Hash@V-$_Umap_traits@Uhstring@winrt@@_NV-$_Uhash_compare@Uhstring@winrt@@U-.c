/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@@Z @ 0x180126234
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0___::_Insert_unverified_std::pair_winrt::hstring_const__bool__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::hstring_const__bool__________::_1_::catch$73 @ 0x180118AA6 (_std--_Hash_std--_Umap_traits_winrt--hstring_bool_std--_Uhash_compare_winrt--hstring_std--hash_w.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0___::_Insert_unverified_std::pair_winrt::hstring_const__bool__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::hstring_const__bool__________::_1_::catch$47 @ 0x18011917C (_std--_Hash_std--_Umap_traits_winrt--hstring_bool_std--_Uhash_compare_winrt--hstrin_ea_18011917C.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@@Z @ 0x180127E98 (-erase@-$list@U-$pair@$$CBUhstring@winrt@@_N@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@@_N@st.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<winrt::hstring const,bool>>::erase(a1 + 8, &v3, a2);
}
