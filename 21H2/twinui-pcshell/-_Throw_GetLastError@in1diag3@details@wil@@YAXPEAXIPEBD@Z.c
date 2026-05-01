/*
 * XREFs of ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020B078
 * Callers:
 *     ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x1800A7C74 (-IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z.c)
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D58 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ @ 0x1800CC0D8 (-PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ.c)
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800D6708 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800F0CFC (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180121DB4 (-GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180124648 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 *     ?CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$pair@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEFBU_ITEMIDLIST@@@Z @ 0x180138020 (-CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$pair@V-$unique_pt.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x180148CB4 (_anonymous_namespace_--CreateTemporaryFile.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18020AC4C (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x180286720 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 *     _lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator() @ 0x1802DAD3C (_lambda_ad1c2e3ff12b6fb3c427626c13364f68_--operator().c)
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802EB6F0 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x180303C10 (--0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z.c)
 *     ?RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z @ 0x180304990 (-RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x18036070C (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 *     ?SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z @ 0x180376804 (-SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z.c)
 *     _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x1803EBADC (_anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases.c)
 *     ?GetExplorerProcessId@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAI@Z @ 0x1804C43C0 (-GetExplorerProcessId@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAI@Z.c)
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CFAD0 (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 *     ?GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@UtagRECT@@PEAUHWND__@@@std@@XZ @ 0x1804D2B38 (-GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x1804D2C40 (-GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1801AB9DC (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(this, a2, a3, a4, v4, retaddr, 0);
}
