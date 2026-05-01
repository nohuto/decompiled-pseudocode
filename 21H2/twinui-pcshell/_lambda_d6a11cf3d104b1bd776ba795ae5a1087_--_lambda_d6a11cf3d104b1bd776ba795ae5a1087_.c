/*
 * XREFs of _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x18039403C
 * Callers:
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180393D04 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 *     std::_Func_impl_no_alloc__lambda_d6a11cf3d104b1bd776ba795ae5a1087__void_Concurrency::task_bool___::_Copy @ 0x180396A00 (std--_Func_impl_no_alloc__lambda_d6a11cf3d104b1bd776ba795ae5a1087__void_Concurrency_ea_180396A00.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    a1 + 1,
    a2[1]);
  return a1;
}
