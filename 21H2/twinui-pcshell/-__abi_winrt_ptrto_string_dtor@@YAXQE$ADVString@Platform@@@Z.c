/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x18035C190
 * Callers:
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$0 @ 0x18035B9FD (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$0.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$1 @ 0x18035BA09 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$1.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$3 @ 0x18035BA36 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$3.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x18035BB53 (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x18035BF60 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$1 @ 0x180361872 (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_180361872.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$0 @ 0x18036187E (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_18036187E.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0 @ 0x1803892DF (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$8 @ 0x180389A1A (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$8.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x180389A44 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$14 @ 0x180389A86 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$14.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$20 @ 0x180389AE0 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$20.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x18038A5B6 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x18038A5C2 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x18038A78E (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x18038A9BE (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x18038E023 (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
