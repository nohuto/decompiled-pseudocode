/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18025693C
 * Callers:
 *     ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x18009B9BC (--4hstring@winrt@@QEAAAEAU01@QEBG@Z.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800AEFD8 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1800BEB1C (-IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x1800EAF40 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 *     ?GetRuntimeClassName@?$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x1800EB240 (-GetRuntimeClassName@-$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@w.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800F4EDC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180106970 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2 @ 0x18011D320 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180120538 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120FCC (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRuntimeClassName@?$AppBackupListener_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x180122250 (-GetRuntimeClassName@-$AppBackupListener_base@UAppBackupListener@implementation@Shell@Internal@W.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1801222C0 (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x1801223A0 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801225B0 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x180122940 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180124FD4 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ?GetRuntimeClassName@?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x18013A2B0 (-GetRuntimeClassName@-$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180262754 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x1800914F5 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2)
{
  __int64 v2; // rax
  HRESULT v4; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = (HSTRING)this;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  string = 0LL;
  v4 = WINRT_WindowsCreateString(a2, v2, &string);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *(_QWORD *)this = string;
  return this;
}
