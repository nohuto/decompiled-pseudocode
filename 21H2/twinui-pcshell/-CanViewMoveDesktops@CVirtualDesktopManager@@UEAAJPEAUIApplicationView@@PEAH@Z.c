/*
 * XREFs of ?CanViewMoveDesktops@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804A92B0
 * Callers:
 *     ?CanViewMoveDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAH@Z @ 0x180171060 (-CanViewMoveDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CanViewMoveDesktops(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        int *a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), &SRWLock);
  *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 12) + 48LL))(
          *((_QWORD *)this + 12),
          a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
