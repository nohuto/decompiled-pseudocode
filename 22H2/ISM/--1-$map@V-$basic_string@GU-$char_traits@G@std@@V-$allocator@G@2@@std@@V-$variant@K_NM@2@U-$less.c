/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@XZ @ 0x18006E038
 * Callers:
 *     __lambda_f0f9811b609bc44f6b5f596bb37acf9a_::operator()_::_1_::dtor$9 @ 0x1800513FD (__lambda_f0f9811b609bc44f6b5f596bb37acf9a_--operator()_--_1_--dtor$9.c)
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_void__std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float_______::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_void__std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float________::_1_::dtor$0 @ 0x1800514C4 (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsig.c)
 *     __lambda_b16aee874608ec8ce55934157fa7dff9_::operator()_::_1_::dtor$8 @ 0x18007DA33 (__lambda_b16aee874608ec8ce55934157fa7dff9_--operator()_--_1_--dtor$8.c)
 *     __lambda_7a8cdf47427de701aad174af942599f3_::operator()_::_1_::dtor$2 @ 0x180189F79 (__lambda_7a8cdf47427de701aad174af942599f3_--operator()_--_1_--dtor$2.c)
 *     __lambda_c5f59095f0ae3e38eeaa5c86892cff4d_::operator()_::_1_::dtor$53 @ 0x18018C91A (__lambda_c5f59095f0ae3e38eeaa5c86892cff4d_--operator()_--_1_--dtor$53.c)
 *     __lambda_c78139b4692b055c43ac45a1104373ed_::operator()_::_1_::dtor$8 @ 0x180191FC5 (__lambda_c78139b4692b055c43ac45a1104373ed_--operator()_--_1_--dtor$8.c)
 *     __lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator()_::_1_::dtor$5 @ 0x1801985F5 (__lambda_a2967a5fef4bd4911d3370ff5cbae9e9_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180036390 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

void __fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::~map<std::wstring,std::variant<unsigned long,bool,float>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x48);
}
