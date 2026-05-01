/*
 * XREFs of ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x18049E848
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$19 @ 0x1800E7C82 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$19.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::WindowTabHost_::CreateInstance_::_1_::dtor$1 @ 0x1800E8D1D (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--implementation--WindowTa_ea_1800E8D1D.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$0 @ 0x1801025FA (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeed.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$1 @ 0x180102606 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementati_ea_180102606.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor$0 @ 0x180106B25 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--perform_delaye.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::AppBackupListener_::CreateInstance_::_1_::dtor$1 @ 0x180120B7D (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--implementation--AppBacku_ea_180120B7D.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::PinManager_::CreateInstance_::_1_::dtor$1 @ 0x18013894D (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--implementation--PinManag_ea_18013894D.c)
 *     __anonymous_namespace_::GetWicBitmapFromStreamReference_::_1_::dtor$5 @ 0x180149F3B (__anonymous_namespace_--GetWicBitmapFromStreamReference_--_1_--dtor$5.c)
 *     __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$0 @ 0x18049E94B (__anonymous_namespace_--CreateGraphicsCaptureItem_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1804BB306 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::TabAdded_::_1_::dtor$4 @ 0x1804BB4DF (_VirtualDesktopGroupedViewsEventListener--TabAdded_--_1_--dtor$4.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::dtor$0 @ 0x1804D1E71 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--Dr.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::dtor$1 @ 0x1804D1E7D (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--DragDropSimulator--imple_ea_1804D1E7D.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$1 @ 0x1804D3A34 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$1.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$5 @ 0x1804D3A58 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$5.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$0 @ 0x1804D40D5 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$0.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$2 @ 0x1804D40E1 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EC5C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(a1);
  return result;
}
