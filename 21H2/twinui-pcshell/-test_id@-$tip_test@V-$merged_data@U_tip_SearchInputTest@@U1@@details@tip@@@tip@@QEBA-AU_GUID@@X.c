/*
 * XREFs of ?test_id@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA?AU_GUID@@XZ @ 0x1800C1394
 * Callers:
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C025C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0944 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0AC0 (-StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

_OWORD *__fastcall tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::test_id(
        __int64 a1,
        _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // [rsp+0h] [rbp-28h]

  if ( *(_QWORD *)a1 )
    v3 = *(_OWORD *)(*(_QWORD *)a1 + 152LL);
  else
    v3 = 0LL;
  result = a2;
  *a2 = v3;
  return result;
}
