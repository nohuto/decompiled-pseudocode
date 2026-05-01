/*
 * XREFs of ?complete@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAAXXZ @ 0x1800ABB84
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA638 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x180129DC8 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x180129F08 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation.c)
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18012A060 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@S.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013BF90 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1803FC250 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 *     ?v_DismissView@CAltTabViewHost@@MEAAXXZ @ 0x1803FCBC0 (-v_DismissView@CAltTabViewHost@@MEAAXXZ.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1803FE110 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?v_DismissView@CSnapAssistViewHost@@MEAAXXZ @ 0x1803FE640 (-v_DismissView@CSnapAssistViewHost@@MEAAXXZ.c)
 * Callees:
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800ABD1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 */

__int64 __fastcall tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::complete(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip::details::shared_data<0,0,0>::complete_without_lock(v1 + 8);
  return result;
}
