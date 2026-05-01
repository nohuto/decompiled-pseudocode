/*
 * XREFs of ?TakeKeyboardFocus@SearchAppExperienceManager@@UEAAJXZ @ 0x18008CAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::TakeKeyboardFocus(SearchAppExperienceManager *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 112LL))(*((_QWORD *)this + 54));
}
