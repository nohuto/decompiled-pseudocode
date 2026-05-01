/*
 * XREFs of ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x1804AF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

VirtualDesktopAnimationSyncNotificationInstance *__fastcall VirtualDesktopAnimationSyncNotificationInstance::`scalar deleting destructor'(
        VirtualDesktopAnimationSyncNotificationInstance *this,
        char a2)
{
  RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rcx

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
