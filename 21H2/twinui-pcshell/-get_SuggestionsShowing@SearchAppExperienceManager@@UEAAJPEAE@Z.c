/*
 * XREFs of ?get_SuggestionsShowing@SearchAppExperienceManager@@UEAAJPEAE@Z @ 0x180267580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::get_SuggestionsShowing(
        SearchAppExperienceManager *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 40LL))(*((_QWORD *)this + 54));
}
