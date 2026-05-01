/*
 * XREFs of ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1804642F4
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180464880 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040B9E4 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::CancelMoveSizeOperationForOperableView(TabletModePositioner *this)
{
  __int64 v2; // rbx
  int v3; // eax
  struct IApplicationView *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  TabletModePositionerHelpers *v9[2]; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 2) != 0 )
  {
    v9[0] = 0LL;
    v2 = *((_QWORD *)this + 42);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
    v3 = (*(__int64 (__fastcall **)(__int64, HWND, TabletModePositionerHelpers **))(*(_QWORD *)v2 + 48LL))(
           v2,
           pgui.hwndMoveSize,
           v9);
    v5 = v3;
    if ( v3 >= 0 )
    {
      if ( TabletModePositionerHelpers::IsControlledView(v9[0], v4) )
      {
        SendNotifyMessageW(pgui.hwndMoveSize, 0x1Fu, 0LL, 0LL);
        v5 = 0;
        goto LABEL_9;
      }
      v5 = -2147019873;
      v6 = 2147947423LL;
      v7 = 3066LL;
    }
    else
    {
      v6 = (unsigned int)v3;
      v7 = 3063LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
    return v5;
  }
  return 2147947423LL;
}
