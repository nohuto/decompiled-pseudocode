/*
 * XREFs of ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800DA81C
 * Callers:
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180481CBC (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800D5184 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800D525C (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040BDE8 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

HWND __fastcall AppResizeView::GetEvictedMeetingWindow(AppResizeView *this, struct IApplicationView *a2)
{
  HWND v3; // rdi
  DWORD WindowThreadProcessId; // eax
  DWORD v5; // esi
  DWORD v6; // edi
  struct IApplicationView *v7; // rdx
  HWND v9; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  v9 = (HWND)this;
  hWnd = 0LL;
  EnumWindows((WNDENUMPROC)lambda_0a88880240d5c42b853753778932cae4_::_lambda_invoker_cdecl_, (LPARAM)&hWnd);
  if ( a2
    && (v3 = hWnd) != 0LL
    && !PPISideBarHelpers::IsSideBarView(a2)
    && (WindowThreadProcessId = GetWindowThreadProcessId(v3, 0LL),
        v9 = 0LL,
        v5 = WindowThreadProcessId,
        PPISideBarHelpers::GetWindowfromView(a2, &v9),
        v9)
    && (v6 = GetWindowThreadProcessId(v9, 0LL), TabletModePositionerHelpers::IsOperableView(a2, v7))
    && v5 == v6 )
  {
    return v9;
  }
  else
  {
    return 0LL;
  }
}
