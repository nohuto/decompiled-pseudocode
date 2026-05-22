/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x180069B64
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x1800365F8 (--$_Insert_at@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIV-.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Insert_hint_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____&_std::_Tree_node_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____void_______::_1_::catch$23 @ 0x180051E96 (_std--_Tree_std--_Tmap_traits_unsigned_int_std--function_void___cdecl(bool)__std--less_unsigned_.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Insert_nohint_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____&_std::_Tree_node_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____void_______::_1_::catch$20 @ 0x180069321 (_std--_Tree_std--_Tmap_traits_unsigned_int_std--function_void___cdecl(bool)__std--l_ea_180069321.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Destroy_if_node(
        __int64 a1,
        void *a2)
{
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)a2 + 40, (__int64)a2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x68);
}
