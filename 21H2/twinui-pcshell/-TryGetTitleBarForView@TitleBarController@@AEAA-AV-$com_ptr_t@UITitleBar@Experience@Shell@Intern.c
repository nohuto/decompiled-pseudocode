/*
 * XREFs of ?TryGetTitleBarForView@TitleBarController@@AEAA?AV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x1802F848C
 * Callers:
 *     _lambda_07f8ea383e36690a5ebaa5890ffd342e_::operator() @ 0x1802F5A64 (_lambda_07f8ea383e36690a5ebaa5890ffd342e_--operator().c)
 *     _lambda_0d811e3ff9caf4aeb25826d22c7c0665_::operator() @ 0x1802F5B3C (_lambda_0d811e3ff9caf4aeb25826d22c7c0665_--operator().c)
 *     _lambda_89df5410cec75dfa270b441e23c20fb9_::operator() @ 0x1802F6330 (_lambda_89df5410cec75dfa270b441e23c20fb9_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f5ba80620eaa3e32c23738988a6a60f___::Run @ 0x1802F7FC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f5ba80620eaa3e32c23738988a6a60f___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1802D8554 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 */

__int64 *__fastcall TitleBarController::TryGetTitleBarForView(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v5 = (RTL_SRWLOCK *)(a1 + 80);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)(a1 + 88),
    &v8,
    &v9);
  if ( v8 == *(__int64 **)(a1 + 88) )
  {
    *a2 = 0LL;
  }
  else
  {
    v6 = v8[5];
    *a2 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return a2;
}
