/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EFEC
 * Callers:
 *     ?CreateInstance@?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E8DC0 (-CreateInstance@-$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?CreateInstance@?$wrl_class_factory@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180102680 (-CreateInstance@-$wrl_class_factory@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180106AE0 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ?CreateInstance@?$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180120C20 (-CreateInstance@-$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Windows@win.c)
 *     ?CreateInstance@?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801389F0 (-CreateInstance@-$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wi.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x180149E1C (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Graphics::Capture::GraphicsCaptureItem_IGraphicsCaptureItemInterop_::call__lambda_2c048fadf96b8b63389f9249f9153b42__&_ @ 0x18049E928 (winrt--impl--factory_cache_entry_winrt--Windows--Graphics--Capture--GraphicsCaptureItem_IGraphic.c)
 *     ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x18049EBD8 (--1-$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ.c)
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18049EC70 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804BB308 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x1804BB720 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1804D05D0 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ??1service_description@immersive_shell_component@winrt@@QEAA@XZ @ 0x1804D1960 (--1service_description@immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804D1990 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?CreateInstance@?$wrl_class_factory@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D2140 (-CreateInstance@-$wrl_class_factory@UDragDropSimulatorComponent@implementation@DragDropSimulator.c)
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1804D3B60 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804D4280 (-QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x1804D47D0 (-ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
