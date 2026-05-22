/*
 * XREFs of _std::_Hash_std::_Umap_traits_void___wil::com_ptr_t_PenDevice_wil::err_exception_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy______0___::_Insert_unverified_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy____________::_1_::catch$56 @ 0x18012E72F
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180131168 (-erase@-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$all.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_void___wil::com_ptr_t_PenDevice_wil::err_exception_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy______0___::_Insert_unverified_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::erase(
    *(_QWORD *)(a2 + 64) + 8LL,
    a2 + 64,
    *(_QWORD *)(a2 + 88));
  throw;
}
