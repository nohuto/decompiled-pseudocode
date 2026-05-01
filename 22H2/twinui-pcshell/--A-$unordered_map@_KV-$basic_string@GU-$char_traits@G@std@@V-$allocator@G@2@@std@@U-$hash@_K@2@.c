/*
 * XREFs of ??A?$unordered_map@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEB_K@Z @ 0x1800E8690
 * Callers:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800E3ABC (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 * Callees:
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800E48B4 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$list@U-$pair@$$CB_K.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800E50D0 (--$_Insert_unverified@AEAU-$pair@$$CB_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800EF3E0 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 */

__int64 *__fastcall std::unordered_map<unsigned __int64,std::wstring>::operator[](__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::lower_bound(
    a1,
    &v10,
    a2);
  v5 = v10;
  v6 = *(__int64 **)(a1 + 8);
  if ( v10 == v6 )
  {
    v7 = *v6;
    v10 = a2;
    std::list<std::pair<unsigned __int64 const,std::wstring>>::_Insert<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
      a1 + 8,
      v7,
      v4,
      &v10);
    std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,std::wstring> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::wstring>>>>>(
      a1,
      (__int64)&v9,
      (const unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
      **(__int64 ***)(a1 + 8));
    v5 = v9;
  }
  return v5 + 3;
}
