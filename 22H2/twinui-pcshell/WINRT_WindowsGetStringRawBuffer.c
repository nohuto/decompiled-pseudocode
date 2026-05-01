/*
 * XREFs of WINRT_WindowsGetStringRawBuffer @ 0x180090D1A
 * Callers:
 *     ?IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z @ 0x18004D258 (-IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _lambda_172a7185b1276b4a19f8c519689fb59f_::operator() @ 0x18009C2F0 (_lambda_172a7185b1276b4a19f8c519689fb59f_--operator().c)
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A19E4 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2248 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1800AD924 (-on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FA0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0924 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0AA0 (-StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1800D1F9C (-LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Inter.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800F4EDC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800F64A0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800F6CEC (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800F7FD4 (-SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhs.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800FE638 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109BC4 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011B9A4 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120CBC (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent_::_1_::catch$23 @ 0x180122564 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageI_ea_180122564.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::catch$59 @ 0x1801228F4 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_1801228F4.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent_::_1_::catch$23 @ 0x180122B04 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_180122B04.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::catch$28 @ 0x1801252C3 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegistryWatche_ea_1801252C3.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138320 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B238 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FA44 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256C24 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180256EF0 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180257718 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180261BC0 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x180263010 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x180263B64 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x18026434C (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x180267C04 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18035B65C (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18035B7F0 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x1803BA6DC (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BAFB4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?IsCortanaApp@@YA_NPEAUIApplicationView@@@Z @ 0x180450B7C (-IsCortanaApp@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PCWSTR __stdcall WINRT_WindowsGetStringRawBuffer(HSTRING string, UINT32 *length)
{
  return WindowsGetStringRawBuffer(string, length);
}
