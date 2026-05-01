/*
 * XREFs of ?RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ @ 0x1803ED988
 * Callers:
 *     ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x1803ECBCC (--$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Micros.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ForegroundStagingWindow::RuntimeClassInitialize(ForegroundStagingWindow *this)
{
  HCURSOR CursorW; // rax
  const char *v3; // r9
  WNDCLASSEXW v5; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v5.cbSize = 80;
  memset_0(&v5.style, 0, 0x4CuLL);
  v5.lpfnWndProc = (WNDPROC)CWRLImpWndProc<ForegroundStagingWindow>::s_WndProcBase;
  v5.hInstance = &_ImageBase;
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  v5.cbWndExtra = 8;
  v5.hCursor = CursorW;
  v5.lpszClassName = L"ForegroundStaging";
  RegisterClassExW(&v5);
  if ( CreateWindowInBand(
         136315016LL,
         L"ForegroundStaging",
         0LL,
         0x80000000LL,
         0,
         0,
         0,
         0,
         0LL,
         0LL,
         &_ImageBase,
         this,
         16) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x3F,
             (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
             v3);
  }
}
