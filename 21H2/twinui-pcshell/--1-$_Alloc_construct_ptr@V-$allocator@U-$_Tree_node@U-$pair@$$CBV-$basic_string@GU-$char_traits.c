/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DBBD0
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::pair_unsigned_int_enum_Windows::Internal::FamilySafety::AppLimits::TerminationType__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::pair_unsigned_int_enum_Windows::Internal::FamilySafety::AppLimits::TerminationType______0___::emplace_unsigned_short_const___&_std::pair_int_enum_Windows::Internal::FamilySafety::AppLimits::TerminationType____::_1_::dtor$4 @ 0x1800DBAA7 (_std--_Tree_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_1800DBAA7.c)
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____enum_JavaOption_std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption____0___::emplace_hint_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption__const_&__::_1_::dtor$4 @ 0x1800DC88D (_std--_Tree_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_1800DC88D.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$4 @ 0x1803D7149 (_std--_Tree_std--_Tmap_traits_unsigned_int_std--basic_string_unsigned_short_std--ch_ea_1803D7149.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum JavaOption>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum JavaOption>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x48);
}
