/*
 * XREFs of ?CreateRecoveredDesktopInternal@CVirtualDesktopManager@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x1804A91C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::CreateRecoveredDesktopInternal(
        CVirtualDesktopManager *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 10)
                                                                                          + 48LL))(
         *((_QWORD *)this + 10),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
