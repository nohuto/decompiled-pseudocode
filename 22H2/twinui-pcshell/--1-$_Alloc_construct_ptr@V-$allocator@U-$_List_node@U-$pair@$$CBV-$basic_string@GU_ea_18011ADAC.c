/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18011ADAC
 * Callers:
 *     _std::list_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unordered_map_winrt::hstring_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____________std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unordered_map_winrt::hstring_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______________::_Insert_std::piecewise_construct_t_const_&_std::tuple_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__std::tuple_____::_1_::dtor$0 @ 0x1801185E9 (_std--list_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigned_sho_ea_1801185E9.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_HWND_____const_&__std::tuple_unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&____::_1_::dtor$4 @ 0x1804CB32C (_std--_Tree_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--allocator_s_ea_1804CB32C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,std::unordered_map<winrt::hstring,std::wstring>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,std::unordered_map<winrt::hstring,std::wstring>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x70);
}
