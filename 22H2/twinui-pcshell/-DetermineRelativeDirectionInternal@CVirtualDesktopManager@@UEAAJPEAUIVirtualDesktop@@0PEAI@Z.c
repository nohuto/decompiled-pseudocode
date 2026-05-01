/*
 * XREFs of ?DetermineRelativeDirectionInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z @ 0x1804A92A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::DetermineRelativeDirectionInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3,
        unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, struct IVirtualDesktop *, unsigned int *))(**((_QWORD **)this + 10) + 80LL))(
         *((_QWORD *)this + 10),
         a2,
         a3,
         a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EB,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
