/*
 * XREFs of ?IsViewPinned@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804B5A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::IsViewPinned(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        int *a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), &SRWLock);
  *a3 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
          this,
          a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
