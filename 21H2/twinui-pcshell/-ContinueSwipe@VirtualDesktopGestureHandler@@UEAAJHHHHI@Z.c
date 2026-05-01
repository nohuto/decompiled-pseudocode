/*
 * XREFs of ?ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x1804B2A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x1804B4F5C (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::ContinueSwipe(
        VirtualDesktopGestureHandler *this,
        int a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rdx
  VirtualDesktopGestureContext *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 4) )
  {
    v4 = 752LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  v6 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 8);
  if ( !v6 )
  {
    v4 = 753LL;
    goto LABEL_3;
  }
  VirtualDesktopGestureContext::UpdateOffset(v6, a2, a4);
  return 0LL;
}
