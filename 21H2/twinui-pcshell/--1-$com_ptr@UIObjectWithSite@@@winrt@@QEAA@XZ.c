/*
 * XREFs of ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x18049EBD8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$19 @ 0x1800E7DF2 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$19.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::WindowTabHost_::CreateInstance_::_1_::dtor$1 @ 0x1800E8E8D (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--implementation--WindowTa_ea_1800E8E8D.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$0 @ 0x18010276A (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeed.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$1 @ 0x180102776 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementati_ea_180102776.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor$0 @ 0x180106C95 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--perform_delaye.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::AppBackupListener_::CreateInstance_::_1_::dtor$1 @ 0x180120CED (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--implementation--AppBacku_ea_180120CED.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::PinManager_::CreateInstance_::_1_::dtor$1 @ 0x180138ABD (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--implementation--PinManag_ea_180138ABD.c)
 *     __anonymous_namespace_::GetWicBitmapFromStreamReference_::_1_::dtor$5 @ 0x18014A0AB (__anonymous_namespace_--GetWicBitmapFromStreamReference_--_1_--dtor$5.c)
 *     __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$0 @ 0x18049ECDB (__anonymous_namespace_--CreateGraphicsCaptureItem_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1804BB696 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::TabAdded_::_1_::dtor$4 @ 0x1804BB86F (_VirtualDesktopGroupedViewsEventListener--TabAdded_--_1_--dtor$4.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::dtor$0 @ 0x1804D2201 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--Dr.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::dtor$1 @ 0x1804D220D (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--DragDropSimulator--imple_ea_1804D220D.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$1 @ 0x1804D3DC4 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$1.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$5 @ 0x1804D3DE8 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$5.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$0 @ 0x1804D4465 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$0.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$2 @ 0x1804D4471 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EFEC (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(a1);
  return result;
}
