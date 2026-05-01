/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A1484
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     _InstallWebSearchPackage_::_1_::dtor$6 @ 0x1800A794A (_InstallWebSearchPackage_--_1_--dtor$6.c)
 *     _InstallWebSearchPackage_::_1_::dtor$10 @ 0x1800A797A (_InstallWebSearchPackage_--_1_--dtor$10.c)
 *     _InstallWebSearchPackage_::_1_::dtor$20 @ 0x1800A79DA (_InstallWebSearchPackage_--_1_--dtor$20.c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA658 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 *     _SearchAppExperienceManager::TryInstallDefaultWebSearchProvider_::_1_::dtor$3 @ 0x1800AAA78 (_SearchAppExperienceManager--TryInstallDefaultWebSearchProvider_--_1_--dtor$3.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC294 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800ADFB0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_retu.c)
 */

__int64 __fastcall tip::test_data_control<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::~test_data_control<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
        void **a1)
{
  char *v2; // rcx

  v2 = (char *)*a1;
  if ( v2 )
  {
    tip::details::shared_data<0,0,0>::end_update(v2 + 8);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>(a1);
}
