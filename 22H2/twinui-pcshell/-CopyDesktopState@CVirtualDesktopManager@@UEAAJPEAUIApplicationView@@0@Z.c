/*
 * XREFs of ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x1800DAF60
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800144F8 (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CopyDesktopState(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 16) + 32LL))(*((_QWORD *)this + 16), &v11);
  updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *))(**((_QWORD **)this + 10) + 96LL))(
              *((_QWORD *)this + 10),
              a2,
              a3);
  v7 = updated;
  if ( updated >= 0 )
  {
    updated = CVirtualDesktopManager::_UpdateViewVisibility(
                (CVirtualDesktopManager *)((char *)this - 24),
                a2,
                *((struct IVirtualDesktop **)this + 17));
    v7 = updated;
    if ( updated >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 411LL;
  }
  else
  {
    v8 = 410LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_7:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  return v7;
}
