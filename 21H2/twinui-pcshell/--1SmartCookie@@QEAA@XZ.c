/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x1801AFDB0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$6 @ 0x1800E7CBE (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$7 @ 0x1800E7CD1 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$7.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$11 @ 0x1800E7D1D (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$11.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E8434 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener_::_1_::dtor$4 @ 0x1802A8680 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--AppViewListener_--_1_--dtor$4.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer_::_1_::dtor$0 @ 0x1802BDE29 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--DisconnectFromPresentationLayer.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer_::_1_::dtor$1 @ 0x1802BDE35 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--DisconnectFromPres_ea_1802BDE35.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$13 @ 0x1802D966B (_TabViewManager--TabViewManager_--_1_--dtor$13.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$14 @ 0x1802D967E (_TabViewManager--TabViewManager_--_1_--dtor$14.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$15 @ 0x1802D9691 (_TabViewManager--TabViewManager_--_1_--dtor$15.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$16 @ 0x1802D96A4 (_TabViewManager--TabViewManager_--_1_--dtor$16.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$17 @ 0x1802D96B7 (_TabViewManager--TabViewManager_--_1_--dtor$17.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$18 @ 0x1802D96CA (_TabViewManager--TabViewManager_--_1_--dtor$18.c)
 *     _TitleBarController::RegisterForShellHooks_::_1_::dtor$2 @ 0x1802F7E2E (_TitleBarController--RegisterForShellHooks_--_1_--dtor$2.c)
 *     _TitleBarController::UnregisterFromShellHooks_::_1_::dtor$0 @ 0x1802F8750 (_TitleBarController--UnregisterFromShellHooks_--_1_--dtor$0.c)
 *     _ViewGroupManager::ViewGroupManager_::_1_::dtor$6 @ 0x1802FB181 (_ViewGroupManager--ViewGroupManager_--_1_--dtor$6.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$17 @ 0x1803B700B (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$17.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$4 @ 0x1803E3A9D (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$4.c)
 *     ??1TabletModePositionerManager@@UEAA@XZ @ 0x180461824 (--1TabletModePositionerManager@@UEAA@XZ.c)
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x1804740B0 (--_EScreenManager@@UEAAPEAXI@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18047C494 (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??1JointResize@@UEAA@XZ @ 0x18048C390 (--1JointResize@@UEAA@XZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B15A0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall SmartCookie::~SmartCookie(SmartCookie *this)
{
  SmartCookie::Unregister(this);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this);
}
