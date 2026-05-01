/*
 * XREFs of ?has_ever_started@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD0E8
 * Callers:
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D58 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA658 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 *     ?config_set_identity@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAXIPEBD@Z @ 0x1800ABD8C (-config_set_identity@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AU_GUID@@XZ @ 0x1800C1338 (-start@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@2@XZ @ 0x180146454 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 * Callees:
 *     <none>
 */

char __fastcall tip::details::shared_data<0,0,0>::has_ever_started(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 232) || (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    return 1;
  return result;
}
