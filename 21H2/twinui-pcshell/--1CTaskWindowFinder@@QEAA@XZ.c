/*
 * XREFs of ??1CTaskWindowFinder@@QEAA@XZ @ 0x1801B6A74
 * Callers:
 *     _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$9 @ 0x18017355B (_CApplicationManager--_HandleViewPropertyChanged_--_1_--dtor$9.c)
 *     _CImmersiveApp::GetWindowsInternal_::_1_::dtor$3 @ 0x180173570 (_CImmersiveApp--GetWindowsInternal_--_1_--dtor$3.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::_FindWindow_::_1_::dtor$0 @ 0x1801743E0 (_CImmersiveApp--CImmersiveWindowCollection--_FindWindow_--_1_--dtor$0.c)
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$15 @ 0x180174CC0 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$15.c)
 *     _CApplicationManager::OnMessage_::_1_::dtor$6 @ 0x180174D80 (_CApplicationManager--OnMessage_--_1_--dtor$6.c)
 *     _CApplicationManager::_UpdatePerApplicationDataIfNeeded_::_1_::dtor$3 @ 0x180174E00 (_CApplicationManager--_UpdatePerApplicationDataIfNeeded_--_1_--dtor$3.c)
 *     _CApplicationManager::OnTitleBarHitTestVisualUpdated_::_1_::dtor$7 @ 0x180174FA2 (_CApplicationManager--OnTitleBarHitTestVisualUpdated_--_1_--dtor$7.c)
 *     _CImmersiveApp::OnTitleUpdated_::_1_::dtor$0 @ 0x1801750D2 (_CImmersiveApp--OnTitleUpdated_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$17 @ 0x180175230 (_CApplicationManager--_HandleActivation2_--_1_--dtor$17.c)
 *     _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$1 @ 0x1801758C1 (_CApplicationManager--_HandleViewNavigationRequested_--_1_--dtor$1.c)
 *     _CApplicationManager::_HandleViewEvent_::_1_::dtor$13 @ 0x1801758E5 (_CApplicationManager--_HandleViewEvent_--_1_--dtor$13.c)
 *     _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$2 @ 0x18017592A (_CApplicationManager--_HandleViewNavigationRequested_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$4 @ 0x180176ACA (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$4.c)
 *     _CApplicationManager::CreateNewGlom_::_1_::dtor$5 @ 0x1801B994B (_CApplicationManager--CreateNewGlom_--_1_--dtor$5.c)
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x1801BF211 (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TransferAllWindowsBetweenGloms_::_1_::dtor$1 @ 0x1801C3D05 (_CApplicationManager--TransferAllWindowsBetweenGloms_--_1_--dtor$1.c)
 *     _CApplicationManager::TransferWindowBetweenGloms_::_1_::dtor$0 @ 0x1801C3D67 (_CApplicationManager--TransferWindowBetweenGloms_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleTaskWindowDestruction_::_1_::dtor$2 @ 0x1801C67CC (_CApplicationManager--_HandleTaskWindowDestruction_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleTaskWindowDestruction_::_1_::dtor$3 @ 0x1801C67D8 (_CApplicationManager--_HandleTaskWindowDestruction_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall CTaskWindowFinder::~CTaskWindowFinder(CTaskWindowFinder *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 1);
}
