/*
 * XREFs of ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x1804BB728
 * Callers:
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x1804BA7D0 (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804BAF78 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18008A204 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?get@?$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA?AUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@2@XZ @ 0x1804BB638 (-get@-$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA-.c)
 */

__int64 __fastcall winrt::event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::revoke(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  v6 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)a1, &v4);
  result = (__int64)winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::get(
                      &v6,
                      &v5);
  if ( v2 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  if ( v4 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 8))(v5, *(_QWORD *)(a1 + 16));
    if ( v5 )
      return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  }
  return result;
}
