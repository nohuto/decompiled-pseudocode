/*
 * XREFs of ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1804D1598
 * Callers:
 *     ??1?$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E7D18 (--1-$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_s.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E82C4 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??_G?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAPEAXI@Z @ 0x1800E87F4 (--_G-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabH.c)
 *     ??1?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAA@XZ @ 0x180102390 (--1-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimm.c)
 *     ??1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18010240C (--1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$AppBackupListener_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18011ADA0 (--1-$AppBackupListener_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uimm.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18011B368 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180135AA8 (--1-$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerIntero.c)
 *     ??1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18013619C (--1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x1804D13D8 (--1-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1804D1518 (--1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1804D183C (--_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UE.c)
 *     ??_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z @ 0x1804D1884 (--_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1804D4CC0 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 */

void __fastcall winrt::immersive_shell_component::~immersive_shell_component(winrt::immersive_shell_component *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 9);
  std::vector<winrt::immersive_shell_component::service_description>::_Tidy((char *)this + 48);
  winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::~root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>();
}
