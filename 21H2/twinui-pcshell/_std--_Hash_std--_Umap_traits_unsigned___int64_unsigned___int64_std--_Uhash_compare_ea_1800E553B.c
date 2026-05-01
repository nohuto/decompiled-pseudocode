/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned___int64_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__unsigned___int64____0___::_Insert_unverified_std::pair_unsigned___int64_const__unsigned___int64__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64__________::_1_::catch$47 @ 0x1800E553B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@V21@@Z @ 0x1800E65FC (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_K_K@std@@@std@@@std@@.c)
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800EE304 (-_Make_iter@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned___int64_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__unsigned___int64____0___::_Insert_unverified_std::pair_unsigned___int64_const__unsigned___int64__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64__________::_1_::catch_47(
        __int64 a1,
        __int64 a2)
{
  _QWORD *iter; // rax

  iter = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
                     a1,
                     a2 + 96,
                     *(_QWORD *)(a2 + 104));
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>,void>(
    *(_QWORD *)(a2 + 80),
    a2 + 32,
    *iter);
  throw;
}
