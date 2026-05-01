/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A142C
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027034 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18007D7D0 (-_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x18008C2C0 (-Hide@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV?$optional@W4FullActivationTestSource@@@std@@@Z @ 0x1800A28B8 (-CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV-$optional@W4FullActivationTestS.c)
 *     ?OnFullActivationTestTimeoutTimer@SearchAppExperienceManager@@AEAAXXZ @ 0x1800A80F0 (-OnFullActivationTestTimeoutTimer@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D38 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?_OnViewUncloaked@SearchAppExperienceManager@@AEAAJXZ @ 0x1800AB360 (-_OnViewUncloaked@SearchAppExperienceManager@@AEAAJXZ.c)
 *     _SearchAppExperienceManager::Show_::_1_::dtor$4 @ 0x18017681B (_SearchAppExperienceManager--Show_--_1_--dtor$4.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x180266474 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x180266678 (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC118 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800ADF6C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returnco.c)
 */

__int64 __fastcall tip::test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(
        void **a1)
{
  char *v2; // rcx

  v2 = (char *)*a1;
  if ( v2 )
  {
    tip::details::shared_data<1,0,0>::end_update(v2 + 8);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(a1);
}
