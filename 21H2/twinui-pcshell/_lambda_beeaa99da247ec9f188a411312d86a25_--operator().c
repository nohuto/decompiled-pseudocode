/*
 * XREFs of _lambda_beeaa99da247ec9f188a411312d86a25_::operator() @ 0x18039205C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___::Invoke @ 0x1803921E0 (CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180395B18 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_beeaa99da247ec9f188a411312d86a25_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int AppViewFromSwitchItem; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v8);
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v2, *(_QWORD *)(a1 + 8), &v8);
  v4 = AppViewFromSwitchItem;
  if ( AppViewFromSwitchItem >= 0 )
  {
    AppViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL));
    v4 = AppViewFromSwitchItem;
    if ( AppViewFromSwitchItem >= 0 )
    {
      AppViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16)
                                                                                                + 160LL)
                                                                                  + 24LL))(
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL),
                                v8,
                                *(_QWORD *)(a1 + 16) + 168LL);
      v4 = AppViewFromSwitchItem;
      if ( AppViewFromSwitchItem >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v5 = 37LL;
    }
    else
    {
      v5 = 36LL;
    }
  }
  else
  {
    v5 = 34LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
    (const char *)(unsigned int)AppViewFromSwitchItem);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return v4;
}
