/*
 * XREFs of ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1804A9890
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1804A9800 (-GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCountInternal(CVirtualDesktopManager *this, unsigned int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
  return 0LL;
}
