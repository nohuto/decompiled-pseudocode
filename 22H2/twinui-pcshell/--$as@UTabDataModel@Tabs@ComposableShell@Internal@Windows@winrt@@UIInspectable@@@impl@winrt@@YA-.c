/*
 * XREFs of ??$as@UTabDataModel@Tabs@ComposableShell@Internal@Windows@winrt@@UIInspectable@@@impl@winrt@@YA?AUTabDataModel@Tabs@ComposableShell@Internal@Windows@1@PEAUIInspectable@@@Z @ 0x1804BA3E8
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804BAF78 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::ComposableShell::Tabs::TabDataModel,IInspectable>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, void *, __int64 *); // rax
  signed int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    v6 = 0LL;
    v4 = (*v3)(
           a2,
           &winrt::impl::guid_storage<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModel>::value,
           &v6);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
