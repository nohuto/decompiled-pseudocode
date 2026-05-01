/*
 * XREFs of ?DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1804A7450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x1804A7520 (-GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopForegroundPolicy::DesktopChanged(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktop *a2)
{
  int NewForegroundViewForDesktopSwitch; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v9; // [rsp+40h] [rbp+18h] BYREF
  struct IApplicationView *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  NewForegroundViewForDesktopSwitch = CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch(
                                        this,
                                        a2,
                                        &v10,
                                        &v9);
  v5 = NewForegroundViewForDesktopSwitch;
  if ( NewForegroundViewForDesktopSwitch < 0 )
  {
    v6 = 43LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)NewForegroundViewForDesktopSwitch);
    goto LABEL_11;
  }
  if ( !v9 )
  {
    v5 = 0;
    goto LABEL_11;
  }
  if ( v10 )
  {
    NewForegroundViewForDesktopSwitch = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 48LL))(v10);
    v5 = NewForegroundViewForDesktopSwitch;
    if ( NewForegroundViewForDesktopSwitch < 0 )
    {
      v6 = 49LL;
      goto LABEL_9;
    }
  }
  else
  {
    NewForegroundViewForDesktopSwitch = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 24LL))(*((_QWORD *)this + 4));
    v5 = NewForegroundViewForDesktopSwitch;
    if ( NewForegroundViewForDesktopSwitch < 0 )
    {
      v6 = 53LL;
      goto LABEL_9;
    }
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v5;
}
