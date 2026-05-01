/*
 * XREFs of ??0FocusHoldingTank@@QEAA@XZ @ 0x1803A6EA8
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180014B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018468 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C84DC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x1803A7114 (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x1803A7360 (-StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x1803A7590 (-Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
FocusHoldingTank *__fastcall FocusHoldingTank::FocusHoldingTank(LONG_PTR dwNewLong)
{
  __int64 WindowInBand; // rax
  const char *v3; // r9
  const char *v4; // r9
  bool v5; // zf
  char v6; // al
  const char *v7; // r9
  WNDCLASSW WndClass; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v10[40]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  *(_QWORD *)dwNewLong = 0LL;
  *(_DWORD *)(dwNewLong + 8) = 0;
  *(_QWORD *)(dwNewLong + 16) = 0LL;
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"CreateHoldingTankWindow");
  v10[0] = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  StartWindowTelemetry::CreateHoldingTankWindow::StartActivity((StartWindowTelemetry::CreateHoldingTankWindow *)v10);
  *(_DWORD *)(dwNewLong + 8) = GetCurrentThreadId();
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = (WNDPROC)FocusHoldingTank::s_WndProc;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.lpszClassName = L"StartAndCortanaFocusHoldingTank";
  RegisterClassW(&WndClass);
  WindowInBand = CreateWindowInBand(
                   2097280LL,
                   L"StartAndCortanaFocusHoldingTank",
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   0LL,
                   6);
  *(_QWORD *)dwNewLong = WindowInBand;
  if ( !WindowInBand )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
      v3);
  if ( *(_QWORD *)dwNewLong )
  {
    SetLastError(0);
    if ( SetWindowLongPtrW(*(HWND *)dwNewLong, -21, dwNewLong) || (v5 = GetLastError() == 0, v6 = 1, v5) )
      v6 = 0;
    if ( v6 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2A,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v4);
    if ( !SetWindowPos(*(HWND *)dwNewLong, 0LL, 0, 0, 0, 0, 0x57u) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v7);
    StartWindowTelemetry::CreateHoldingTankWindow::Stop(
      (StartWindowTelemetry::CreateHoldingTankWindow *)v10,
      *(void **)dwNewLong);
  }
  StartWindowTelemetry::CreateHoldingTankWindow::~CreateHoldingTankWindow((StartWindowTelemetry::CreateHoldingTankWindow *)v10);
  return (FocusHoldingTank *)dwNewLong;
}
