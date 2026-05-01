/*
 * XREFs of ?OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z @ 0x1804A3BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x180017C70 (-MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVir.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::OnViewRemoved(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVirtualDesktopVisibilityPolicy::MoveViewToDesktopIfAllowed(this, a2, 0LL, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB3,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
