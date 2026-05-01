/*
 * XREFs of ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1801B73A0
 * Callers:
 *     _CImmersiveApp::GetUniqueId_::_1_::dtor$0 @ 0x180174704 (_CImmersiveApp--GetUniqueId_--_1_--dtor$0.c)
 *     _CApplicationManager::_AnalyzeShellNotification_::_1_::dtor$1 @ 0x180174B50 (_CApplicationManager--_AnalyzeShellNotification_--_1_--dtor$1.c)
 *     _CApplicationViewManager::ApplicationChanged_::_1_::dtor$2 @ 0x180174B90 (_CApplicationViewManager--ApplicationChanged_--_1_--dtor$2.c)
 *     _CApplicationViewManager::GetViewForApplication_::_1_::dtor$0 @ 0x180174BF0 (_CApplicationViewManager--GetViewForApplication_--_1_--dtor$0.c)
 *     _CApplicationViewManager::WindowOccludedChanged_::_1_::dtor$0 @ 0x180174C30 (_CApplicationViewManager--WindowOccludedChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplicationByWindow_::_1_::dtor$0 @ 0x180174DCD (_CApplicationManager--GetApplicationByWindow_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$2 @ 0x18017581F (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$2.c)
 *     _CImmersiveApp::GetPersistingStateName_::_1_::dtor$0 @ 0x1801767C1 (_CImmersiveApp--GetPersistingStateName_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180176B1E (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleSelectTargetViewForNavigationRequest_::_1_::dtor$3 @ 0x180176E2E (_CApplicationManager--_HandleSelectTargetViewForNavigationRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::GetAllApplicationsByAppID_::_1_::dtor$0 @ 0x1801BA3C5 (_CApplicationManager--GetAllApplicationsByAppID_--_1_--dtor$0.c)
 *     _CApplicationManager::GetForegroundApplication_::_1_::dtor$0 @ 0x1801BB4D9 (_CApplicationManager--GetForegroundApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetImmersiveApplicationArray_::_1_::dtor$0 @ 0x1801BB6D6 (_CApplicationManager--GetImmersiveApplicationArray_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$0 @ 0x1801BBE74 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$0.c)
 *     _CApplicationManager::GetSizeConstraintOverrides_::_1_::dtor$0 @ 0x1801BC07B (_CApplicationManager--GetSizeConstraintOverrides_--_1_--dtor$0.c)
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$2 @ 0x1801BC85A (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$2.c)
 *     _CApplicationManager::QueryObjectForWindow_::_1_::dtor$0 @ 0x1801BED49 (_CApplicationManager--QueryObjectForWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::IsApplicationWindowPresented_::_1_::dtor$0 @ 0x1801EE728 (_CImmersiveApp--IsApplicationWindowPresented_--_1_--dtor$0.c)
 *     _CImmersiveApp::ShouldShowBackButton_::_1_::dtor$0 @ 0x1801F16C2 (_CImmersiveApp--ShouldShowBackButton_--_1_--dtor$0.c)
 *     __lambda_0d2ae2ebb58457bb6356c5e49aa852a2_::operator()_::_1_::dtor$0 @ 0x1801FD3F2 (__lambda_0d2ae2ebb58457bb6356c5e49aa852a2_--operator()_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetApplicationViewsById_::_1_::dtor$1 @ 0x1801FE10B (_CApplicationViewManager--GetApplicationViewsById_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$0 @ 0x1801FE417 (_CApplicationViewManager--GetViewForAppUserModelId_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViews_::_1_::dtor$1 @ 0x1801FE588 (_CApplicationViewManager--GetViews_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewsByZOrder_::_1_::dtor$1 @ 0x1801FE6E2 (_CApplicationViewManager--GetViewsByZOrder_--_1_--dtor$1.c)
 *     _CApplicationViewManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x1801FE860 (_CApplicationViewManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CApplicationViewManager::ProcessEntepriseIdChanged_::_1_::dtor$0 @ 0x1801FEB7F (_CApplicationViewManager--ProcessEntepriseIdChanged_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd_::_1_::dtor$0 @ 0x1802009B9 (_ApplicationViewManagerVisibilityDebouncer--GetViewForHwnd_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoSRWSharedLock::~CAutoSRWSharedLock(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *this;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
