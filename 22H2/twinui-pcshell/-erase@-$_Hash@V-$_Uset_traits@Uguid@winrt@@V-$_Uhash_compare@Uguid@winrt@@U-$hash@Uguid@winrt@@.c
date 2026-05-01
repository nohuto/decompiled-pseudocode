/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@2@V32@@Z @ 0x1800EECB4
 * Callers:
 *     _std::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0___::_Insert_unverified_winrt::guid_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_winrt::guid____std::_Iterator_base0____::_1_::catch$47 @ 0x1800E5570 (_std--_Hash_std--_Uset_traits_winrt--guid_std--_Uhash_compare_winrt--guid_std--hash_ea_1800E5570.c)
 *     _std::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0___::_Insert_unverified_winrt::guid_const__std::_Not_a_node_tag__::_1_::catch$51 @ 0x1800F148A (_std--_Hash_std--_Uset_traits_winrt--guid_std--_Uhash_compare_winrt--guid_std--hash_ea_1800F148A.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@Z @ 0x1800EF0AC (-erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@QEAA-AV-$_List_i.c)
 *     ?hash_data@impl@winrt@@YA_KPEBX_K@Z @ 0x1800EF24C (-hash_data@impl@winrt@@YA_KPEBX_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = winrt::impl::hash_data((winrt::impl *)(a3 + 16), (const void *)0x10, a3);
  v7 = a1[3];
  v8 = 2 * (a1[6] & v5);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
    {
      *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = a1[1];
      v7 = a1[3];
      v9 = a1[1];
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = *v6;
  }
  v10 = *(_QWORD *)std::list<std::pair<unsigned __int64 const,unsigned __int64>>::erase(a1 + 1, &v12, v6);
  result = a2;
  *a2 = v10;
  return result;
}
