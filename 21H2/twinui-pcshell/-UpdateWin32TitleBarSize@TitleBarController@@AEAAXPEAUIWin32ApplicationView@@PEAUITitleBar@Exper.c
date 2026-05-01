/*
 * XREFs of ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x1802F882C
 * Callers:
 *     _lambda_07f8ea383e36690a5ebaa5890ffd342e_::operator() @ 0x1802F5A64 (_lambda_07f8ea383e36690a5ebaa5890ffd342e_--operator().c)
 *     ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1802F687C (-ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x1801F96F8 (-GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z.c)
 *     _anonymous_namespace_::GetWindowTitlebarSize @ 0x1802F7100 (_anonymous_namespace_--GetWindowTitlebarSize.c)
 */

void __fastcall TitleBarController::UpdateWin32TitleBarSize(
        TitleBarController *this,
        struct IWin32ApplicationView *a2,
        struct Windows::Internal::Shell::Experience::ITitleBar *a3)
{
  int v4; // eax
  __int64 WindowDpiAwarenessContext; // rax
  int ScaleFactorForWindow; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int DpiForWindow; // eax
  unsigned __int64 WindowTitlebarSize; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TitleBarController *v13; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  v13 = this;
  v4 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &hWnd);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      337LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(hWnd);
  if ( (unsigned int)GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext) > 1 )
  {
    DpiForWindow = GetDpiForWindow(hWnd);
    v8 = MulDiv(DpiForWindow, 100, 96);
  }
  else
  {
    ScaleFactorForWindow = GetScaleFactorForWindow(hWnd, (unsigned int *)&v13);
    if ( ScaleFactorForWindow < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        346LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)ScaleFactorForWindow);
      __debugbreak();
    }
    v8 = (unsigned int)v13;
  }
  WindowTitlebarSize = anonymous_namespace_::GetWindowTitlebarSize(hWnd, v8, v7);
  v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ITitleBar *, unsigned __int64, _QWORD))(*(_QWORD *)a3 + 152LL))(
          a3,
          WindowTitlebarSize,
          v8);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      363LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
}
