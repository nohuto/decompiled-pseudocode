/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x1801AFC00
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$6 @ 0x1800E7B4E (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$7 @ 0x1800E7B61 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$7.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$11 @ 0x1800E7BAD (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$11.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E82C4 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener_::_1_::dtor$4 @ 0x1802A8410 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--AppViewListener_--_1_--dtor$4.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer_::_1_::dtor$0 @ 0x1802BDBB9 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--DisconnectFromPresentationLayer.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer_::_1_::dtor$1 @ 0x1802BDBC5 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--DisconnectFromPres_ea_1802BDBC5.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$13 @ 0x1802D93FB (_TabViewManager--TabViewManager_--_1_--dtor$13.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$14 @ 0x1802D940E (_TabViewManager--TabViewManager_--_1_--dtor$14.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$15 @ 0x1802D9421 (_TabViewManager--TabViewManager_--_1_--dtor$15.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$16 @ 0x1802D9434 (_TabViewManager--TabViewManager_--_1_--dtor$16.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$17 @ 0x1802D9447 (_TabViewManager--TabViewManager_--_1_--dtor$17.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$18 @ 0x1802D945A (_TabViewManager--TabViewManager_--_1_--dtor$18.c)
 *     _TitleBarController::RegisterForShellHooks_::_1_::dtor$2 @ 0x1802F7BBE (_TitleBarController--RegisterForShellHooks_--_1_--dtor$2.c)
 *     _TitleBarController::UnregisterFromShellHooks_::_1_::dtor$0 @ 0x1802F84E0 (_TitleBarController--UnregisterFromShellHooks_--_1_--dtor$0.c)
 *     _ViewGroupManager::ViewGroupManager_::_1_::dtor$6 @ 0x1802FAF11 (_ViewGroupManager--ViewGroupManager_--_1_--dtor$6.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$17 @ 0x1803B6D3B (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$17.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$4 @ 0x1803E37CD (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$4.c)
 *     ??1TabletModePositionerManager@@UEAA@XZ @ 0x180461494 (--1TabletModePositionerManager@@UEAA@XZ.c)
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x180473D20 (--_EScreenManager@@UEAAPEAXI@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18047C104 (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??1JointResize@@UEAA@XZ @ 0x18048C000 (--1JointResize@@UEAA@XZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B13F0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall SmartCookie::~SmartCookie(SmartCookie *this)
{
  SmartCookie::Unregister(this);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this);
}
