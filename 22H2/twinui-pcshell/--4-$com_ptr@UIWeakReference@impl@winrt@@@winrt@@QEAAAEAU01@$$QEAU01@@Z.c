/*
 * XREFs of ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18008A204
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180071F9C (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x1800721E4 (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$exchange@U?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@U12@@std@@YA?AU?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180119BA4 (--$exchange@U-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@U12@@std@@YA-AU.c)
 *     ??$swap@U?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@X@std@@YAXAEAU?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@0@Z @ 0x180119E2C (--$swap@U-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@X@std@@YAXAEAU-$wea.c)
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801291D0 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804BAF78 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 *     ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x1804BB728 (-revoke@-$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 *__fastcall winrt::com_ptr<winrt::impl::IWeakReference>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
