/*
 * XREFs of ?s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180281520
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1802806C0 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 */

LRESULT __fastcall CortanaDesktopExperienceView::s_CortanaAltTabProxyWndProc(
        HWND hWnd,
        UINT a2,
        WPARAM a3,
        LONG_PTR *a4)
{
  int v8; // eax
  HWND WindowLongPtrW; // rax
  HWND LastActivePopup; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 129 )
  {
    SetWindowLongPtrW(hWnd, 0, *a4);
    v8 = CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail(hWnd);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCF2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
  }
  else if ( a2 == 6 )
  {
    if ( a3 )
      PostMessageW(hWnd, 0x401u, 0LL, 0LL);
  }
  else if ( a2 == 1025 && GetForegroundWindow() == hWnd )
  {
    WindowLongPtrW = (HWND)GetWindowLongPtrW(hWnd, 0);
    LastActivePopup = GetLastActivePopup(WindowLongPtrW);
    SetForegroundWindow(LastActivePopup);
  }
  return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
}
