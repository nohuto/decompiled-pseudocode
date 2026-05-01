/*
 * XREFs of ?IsViewPinnedInternal@VirtualPinnedAppsHandler@@UEAAHPEAUIApplicationView@@@Z @ 0x1804B5730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::IsViewPinnedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  return (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD))(**((_QWORD **)this + 8) + 120LL))(
           *((_QWORD *)this + 8),
           a2,
           0LL);
}
