/*
 * XREFs of ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x180017C70
 * Callers:
 *     ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x180017B10 (-OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PE.c)
 *     ?MoveViewToDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1804A3750 (-MoveViewToDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskt.c)
 *     ?OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z @ 0x1804A3840 (-OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z @ 0x180017EC0 (-CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::MoveViewToDesktopIfAllowed(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        bool *a4)
{
  int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // rdx
  int v12[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a4 )
    *a4 = 1;
  if ( CVirtualDesktopVisibilityPolicy::CanViewMoveDesktops(this, a2) )
  {
    *(GUID *)v12 = GUID_NULL;
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, int *))(*(_QWORD *)a3 + 32LL))(a3, v12);
      if ( v8 < 0 )
      {
        v11 = 123LL;
        goto LABEL_19;
      }
      v9 = *(_QWORD *)v12 - 0x4658059A45DB96FFLL;
      if ( *(_QWORD *)v12 == 0x4658059A45DB96FFLL )
        v9 = *(_QWORD *)&v12[2] - 0x1012647F7CCD4687LL;
      if ( !v9 )
      {
        v8 = -2147024809;
        v11 = 127LL;
        goto LABEL_19;
      }
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 208LL))(a2, v12);
    if ( v8 < 0 )
    {
      v11 = 131LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 56LL))(
             *((_QWORD *)this + 2),
             a2);
      if ( v8 >= 0 )
        return (unsigned int)v8;
      v11 = 132LL;
    }
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8,
      v12[0]);
    return (unsigned int)v8;
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
