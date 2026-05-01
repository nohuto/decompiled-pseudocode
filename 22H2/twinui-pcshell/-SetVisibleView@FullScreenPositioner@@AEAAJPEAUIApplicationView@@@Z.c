/*
 * XREFs of ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180216C98
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180069A30 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x180069C64 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180214C20 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x180214E00 (-ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802151A8 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180215AA0 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z @ 0x180215254 (-FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z.c)
 *     ?PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z @ 0x1802164C0 (-PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::SetVisibleView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  char v4; // bp
  __int64 *v5; // rbx
  struct IApplicationView *v6; // rdx
  char v7; // r14
  int v8; // eax
  __int64 v9; // rax
  void (*v10)(void); // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = a2 != 0LL;
  v5 = (__int64 *)((char *)this + 240);
  v6 = (struct IApplicationView *)*((_QWORD *)this + 30);
  v7 = v6 != 0LL;
  if ( a2 != v6 )
  {
    v8 = FullScreenPositioner::PrivateVisibleFullScreenViewChangedEvent((IUnknown **)this, v6, a2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F7,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v5, (__int64)a2);
  if ( v4 != v7 )
  {
    v9 = **((_QWORD **)this + 34);
    if ( a2 )
      v10 = *(void (**)(void))(v9 + 24);
    else
      v10 = *(void (**)(void))(v9 + 32);
    v10();
    FullScreenPositioner::FullScreenVisibilityChangedEvent(this, v4);
  }
  if ( *v5 )
  {
    v11 = *((_QWORD *)this + 36);
    if ( v11 )
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v12 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v11 + 64LL))(
              v11,
              a2,
              &GUID_f264283f_b510_4555_80ed_4c7216018854,
              &v16);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 1049LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        return v13;
      }
      if ( v16 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 48LL))(v16, v17);
        v13 = v12;
        if ( v12 < 0 )
        {
          v14 = 1053LL;
          goto LABEL_18;
        }
        v12 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _BYTE *))(**((_QWORD **)this + 36) + 96LL))(
                *((_QWORD *)this + 36),
                a2,
                v17);
        v13 = v12;
        if ( v12 < 0 )
        {
          v14 = 1054LL;
          goto LABEL_18;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
  }
  return 0LL;
}
