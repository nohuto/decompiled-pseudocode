/*
 * XREFs of ?HandleSwitchToView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18045B9E0
 * Callers:
 *     ?HandleSwitchToView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x180170200 (-HandleSwitchToView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@@Z @ 0x180170210 (-HandleSwitchToView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::HandleSwitchToView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
