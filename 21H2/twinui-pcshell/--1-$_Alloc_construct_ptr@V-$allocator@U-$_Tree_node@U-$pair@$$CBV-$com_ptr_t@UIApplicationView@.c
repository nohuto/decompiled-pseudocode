/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802A86D8
 * Callers:
 *     _std::map_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_____::_Try_emplace_wil::com_ptr_t_IApplicationView_wil::err_exception_policy____::_1_::dtor$18 @ 0x180175111 (_std--map_wil--com_ptr_t_IApplicationView_wil--err_exception_policy__Windows--Internal--Shell--T.c)
 *     _std::list_std::pair_unsigned_int_const__KeyboardHosting::ViewState__std::allocator_std::pair_unsigned_int_const__KeyboardHosting::ViewState_____::_Insert_std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$0 @ 0x1803D5ECF (_std--list_std--pair_unsigned_int_const__KeyboardHosting--ViewState__std--allocator_std--pair_un.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x58);
}
