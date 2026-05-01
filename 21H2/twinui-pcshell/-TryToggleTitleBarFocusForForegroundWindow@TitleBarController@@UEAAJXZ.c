/*
 * XREFs of ?TryToggleTitleBarFocusForForegroundWindow@TitleBarController@@UEAAJXZ @ 0x1802F8530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801CA3F4 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1802F8080 (-SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TitleBarController::TryToggleTitleBarFocusForForegroundWindow(TitleBarController *this)
{
  HWND ForegroundWindow; // r14
  int v3; // eax
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, HWND, struct IApplicationView **); // rbx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+48h] [rbp+10h] BYREF

  ForegroundWindow = GetForegroundWindow();
  try
  {
    v3 = (*(__int64 (**)(void))(**((_QWORD **)this + 17) + 104LL))();
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        290LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v3);
    v9 = 0LL;
    v4 = *((_QWORD *)this + 15);
    v5 = *(int (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v4 + 48LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v9);
    if ( v5(v4, ForegroundWindow, &v9) >= 0 )
      TitleBarController::SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate(
        (TitleBarController *)((char *)this - 8),
        v9,
        1);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13E,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v6);
  }
  return result;
}
