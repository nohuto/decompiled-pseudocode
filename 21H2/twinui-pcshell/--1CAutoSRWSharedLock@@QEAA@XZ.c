/*
 * XREFs of ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1801B7550
 * Callers:
 *     _CImmersiveApp::GetUniqueId_::_1_::dtor$0 @ 0x1801748B4 (_CImmersiveApp--GetUniqueId_--_1_--dtor$0.c)
 *     _CApplicationManager::_AnalyzeShellNotification_::_1_::dtor$1 @ 0x180174D00 (_CApplicationManager--_AnalyzeShellNotification_--_1_--dtor$1.c)
 *     _CApplicationViewManager::ApplicationChanged_::_1_::dtor$2 @ 0x180174D40 (_CApplicationViewManager--ApplicationChanged_--_1_--dtor$2.c)
 *     _CApplicationViewManager::GetViewForApplication_::_1_::dtor$0 @ 0x180174DA0 (_CApplicationViewManager--GetViewForApplication_--_1_--dtor$0.c)
 *     _CApplicationViewManager::WindowOccludedChanged_::_1_::dtor$0 @ 0x180174DE0 (_CApplicationViewManager--WindowOccludedChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplicationByWindow_::_1_::dtor$0 @ 0x180174F7D (_CApplicationManager--GetApplicationByWindow_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$2 @ 0x1801759CF (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$2.c)
 *     _CImmersiveApp::GetPersistingStateName_::_1_::dtor$0 @ 0x180176971 (_CImmersiveApp--GetPersistingStateName_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180176CCE (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleSelectTargetViewForNavigationRequest_::_1_::dtor$3 @ 0x180176FDE (_CApplicationManager--_HandleSelectTargetViewForNavigationRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::GetAllApplicationsByAppID_::_1_::dtor$0 @ 0x1801BA575 (_CApplicationManager--GetAllApplicationsByAppID_--_1_--dtor$0.c)
 *     _CApplicationManager::GetForegroundApplication_::_1_::dtor$0 @ 0x1801BB689 (_CApplicationManager--GetForegroundApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetImmersiveApplicationArray_::_1_::dtor$0 @ 0x1801BB886 (_CApplicationManager--GetImmersiveApplicationArray_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$0 @ 0x1801BC024 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$0.c)
 *     _CApplicationManager::GetSizeConstraintOverrides_::_1_::dtor$0 @ 0x1801BC22B (_CApplicationManager--GetSizeConstraintOverrides_--_1_--dtor$0.c)
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$2 @ 0x1801BCA0A (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$2.c)
 *     _CApplicationManager::QueryObjectForWindow_::_1_::dtor$0 @ 0x1801BEEF9 (_CApplicationManager--QueryObjectForWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::IsApplicationWindowPresented_::_1_::dtor$0 @ 0x1801EE8D8 (_CImmersiveApp--IsApplicationWindowPresented_--_1_--dtor$0.c)
 *     _CImmersiveApp::ShouldShowBackButton_::_1_::dtor$0 @ 0x1801F1872 (_CImmersiveApp--ShouldShowBackButton_--_1_--dtor$0.c)
 *     __lambda_0d2ae2ebb58457bb6356c5e49aa852a2_::operator()_::_1_::dtor$0 @ 0x1801FD5A2 (__lambda_0d2ae2ebb58457bb6356c5e49aa852a2_--operator()_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetApplicationViewsById_::_1_::dtor$1 @ 0x1801FE2BB (_CApplicationViewManager--GetApplicationViewsById_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$0 @ 0x1801FE5C7 (_CApplicationViewManager--GetViewForAppUserModelId_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViews_::_1_::dtor$1 @ 0x1801FE738 (_CApplicationViewManager--GetViews_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewsByZOrder_::_1_::dtor$1 @ 0x1801FE892 (_CApplicationViewManager--GetViewsByZOrder_--_1_--dtor$1.c)
 *     _CApplicationViewManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x1801FEA10 (_CApplicationViewManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CApplicationViewManager::ProcessEntepriseIdChanged_::_1_::dtor$0 @ 0x1801FED2F (_CApplicationViewManager--ProcessEntepriseIdChanged_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd_::_1_::dtor$0 @ 0x180200B69 (_ApplicationViewManagerVisibilityDebouncer--GetViewForHwnd_--_1_--dtor$0.c)
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
