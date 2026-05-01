/*
 * XREFs of _std::vector_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__const_&__::_1_::catch$33 @ 0x180176DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001C9F0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180090964 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__const____::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
