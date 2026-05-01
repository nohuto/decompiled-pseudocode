/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC3D4
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@1@XZ @ 0x1800A188C (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA-AV-$tes.c)
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D38 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?config_set_identity@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAXIPEBD@Z @ 0x1800ABD6C (-config_set_identity@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@2@XZ @ 0x1800AF140 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@Q.c)
 * Callees:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@$$V@details@tip@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800A06C0 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@$$V@d.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A1354 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_p.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A1724 (--4-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_p.c)
 */

void **__fastcall tip::tip_test<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(
        void **a1)
{
  void **v2; // rax
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = (void **)tip::details::tip_make_shared_nothrow<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,>(&v4);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::operator=(
      a1,
      v2);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(&v4);
  }
  return a1;
}
