/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800ED8CC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__unsigned___int64____0___::_Insert_unverified_std::pair_unsigned___int64_const__unsigned___int64__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64__________::_1_::catch$48 @ 0x1800E53A7 (_std--_Hash_std--_Umap_traits_unsigned___int64_unsigned___int64_std--_Uhash_compare_unsigned___i.c)
 *     _std::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0___::_Insert_unverified_winrt::guid_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_winrt::guid____std::_Iterator_base0____::_1_::catch$48 @ 0x1800E554C (_std--_Hash_std--_Uset_traits_winrt--guid_std--_Uhash_compare_winrt--guid_std--hash_winrt--guid_.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@Z @ 0x1800EF0AC (-erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@QEAA-AV-$_List_i.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned __int64 const,unsigned __int64>>::erase(a1 + 8, &v3, a2);
}
