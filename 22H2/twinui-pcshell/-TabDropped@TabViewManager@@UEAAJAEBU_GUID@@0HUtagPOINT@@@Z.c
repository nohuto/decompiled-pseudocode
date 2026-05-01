/*
 * XREFs of ?TabDropped@TabViewManager@@UEAAJAEBU_GUID@@0HUtagPOINT@@@Z @ 0x1802EC1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::TabDropped(TabViewManager *this, const struct _GUID *a2, const struct _GUID *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, const struct _GUID *))(**((_QWORD **)this + 155) + 56LL))(
           *((_QWORD *)this + 155),
           a2,
           a3);
}
