/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1803DA324
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1803D5D8C (--$_Insert_at@AEAU-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0___::_Insert_hint_std::pair_unsigned_int_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______&_std::_Tree_node_std::pair_unsigned_int_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______void_______::_1_::catch$23 @ 0x1803D633C (_std--_Tree_std--_Tmap_traits_unsigned_int_std--basic_string_unsigned_short_std--char_traits_uns.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0___::_Insert_nohint_std::pair_unsigned_int_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______&_std::_Tree_node_std::pair_unsigned_int_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______void_______::_1_::catch$22 @ 0x1803D65F5 (_std--_Tree_std--_Tmap_traits_unsigned_int_std--basic_string_unsigned_short_std--ch_ea_1803D65F5.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  std::wstring::_Tidy_deallocate(a2 + 5);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x48);
}
