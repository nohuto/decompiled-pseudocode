/*
 * XREFs of ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1802F660C
 * Callers:
 *     _lambda_1f4f68820907753b977dd0769491499a_::operator() @ 0x1802F5BE4 (_lambda_1f4f68820907753b977dd0769491499a_--operator().c)
 *     _lambda_89df5410cec75dfa270b441e23c20fb9_::operator() @ 0x1802F60C0 (_lambda_89df5410cec75dfa270b441e23c20fb9_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x1802F85BC (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TitleBarController::ConnectTitleBarToSharedVisual(
        TitleBarController *this,
        struct Windows::Internal::Shell::Experience::ITitleBar *a2,
        struct IWin32ApplicationView *a3,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a4)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TitleBarController *v8; // [rsp+30h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp+20h] BYREF

  hObject = a4;
  v8 = this;
  v6 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, TitleBarController **))(*(_QWORD *)a3 + 24LL))(
         a3,
         &v8);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      394LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v6);
  hObject = (HANDLE)-1LL;
  if ( (int)DwmpGetTitleBarVisual(v8, &hObject) >= 0 )
  {
    if ( (((unsigned __int64)hObject + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        398LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)0x80070006LL);
      __debugbreak();
    }
    TitleBarController::UpdateWin32TitleBarSize(retaddr, a3, a2);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
}
