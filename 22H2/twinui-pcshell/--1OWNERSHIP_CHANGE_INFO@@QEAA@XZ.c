/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x1801B6920
 * Callers:
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x180176E7C (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x180176ECA (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x1801BBE8C (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x1801C6E44 (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x1801CEC09 (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$2 @ 0x1802DFB9D (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$2.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$3 @ 0x1802DFBA9 (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$3.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$2 @ 0x1802EFCD6 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$2.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$3 @ 0x1802EFCE2 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$3.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x18032276A (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x180322776 (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8____::_1_::dtor$0 @ 0x180364706 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$9 @ 0x1803AD59E (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$9.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$10 @ 0x1803AD5AA (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$10.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$12 @ 0x1803AD5C2 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$12.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$13 @ 0x1803AD5CE (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$13.c)
 *     _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::dtor$4 @ 0x18045B41D (_CDesktopPositioner--EnsureViewIsInViewGroupForTabGroup_--_1_--dtor$4.c)
 *     _CDesktopPositioner::UnsubscribeFromServices_::_1_::dtor$1 @ 0x18045DFE3 (_CDesktopPositioner--UnsubscribeFromServices_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
