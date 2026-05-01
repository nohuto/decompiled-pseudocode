/*
 * XREFs of ?data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@2@XZ @ 0x1800C0EE8
 * Callers:
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C025C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB8D0 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800C0F88 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV-$c.c)
 */

__int64 *__fastcall tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::data(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  v3 = (__int64 *)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::ensure_data(a1);
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 288));
    v4 = *a2;
  }
  tip::details::shared_data<1,0,0>::begin_update(v4 + 8);
  return a2;
}
