/*
 * XREFs of ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1888
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027034 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800741EC (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18007D7D0 (-_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x18008C2C0 (-Hide@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@SearchAppExperienceManager@@UEAAJXZ @ 0x18008CB80 (-Uncloak@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV?$optional@W4FullActivationTestSource@@@std@@@Z @ 0x1800A28D8 (-CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV-$optional@W4FullActivationTestS.c)
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D58 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?_OnViewUncloaked@SearchAppExperienceManager@@AEAAJXZ @ 0x1800AB380 (-_OnViewUncloaked@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C025C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0944 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x180266624 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x180266828 (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD108 (-is_running@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 */

__int64 __fastcall tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( v1 )
    return tip::details::shared_data<1,0,0>::is_running(v1 + 8);
  return result;
}
