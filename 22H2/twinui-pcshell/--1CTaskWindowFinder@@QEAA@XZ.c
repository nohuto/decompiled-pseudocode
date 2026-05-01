/*
 * XREFs of ??1CTaskWindowFinder@@QEAA@XZ @ 0x1801B68C4
 * Callers:
 *     _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$9 @ 0x1801733AB (_CApplicationManager--_HandleViewPropertyChanged_--_1_--dtor$9.c)
 *     _CImmersiveApp::GetWindowsInternal_::_1_::dtor$3 @ 0x1801733C0 (_CImmersiveApp--GetWindowsInternal_--_1_--dtor$3.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::_FindWindow_::_1_::dtor$0 @ 0x180174230 (_CImmersiveApp--CImmersiveWindowCollection--_FindWindow_--_1_--dtor$0.c)
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$15 @ 0x180174B10 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$15.c)
 *     _CApplicationManager::OnMessage_::_1_::dtor$6 @ 0x180174BD0 (_CApplicationManager--OnMessage_--_1_--dtor$6.c)
 *     _CApplicationManager::_UpdatePerApplicationDataIfNeeded_::_1_::dtor$3 @ 0x180174C50 (_CApplicationManager--_UpdatePerApplicationDataIfNeeded_--_1_--dtor$3.c)
 *     _CApplicationManager::OnTitleBarHitTestVisualUpdated_::_1_::dtor$7 @ 0x180174DF2 (_CApplicationManager--OnTitleBarHitTestVisualUpdated_--_1_--dtor$7.c)
 *     _CImmersiveApp::OnTitleUpdated_::_1_::dtor$0 @ 0x180174F22 (_CImmersiveApp--OnTitleUpdated_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$17 @ 0x180175080 (_CApplicationManager--_HandleActivation2_--_1_--dtor$17.c)
 *     _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$1 @ 0x180175711 (_CApplicationManager--_HandleViewNavigationRequested_--_1_--dtor$1.c)
 *     _CApplicationManager::_HandleViewEvent_::_1_::dtor$13 @ 0x180175735 (_CApplicationManager--_HandleViewEvent_--_1_--dtor$13.c)
 *     _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$2 @ 0x18017577A (_CApplicationManager--_HandleViewNavigationRequested_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$4 @ 0x18017691A (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$4.c)
 *     _CApplicationManager::CreateNewGlom_::_1_::dtor$5 @ 0x1801B979B (_CApplicationManager--CreateNewGlom_--_1_--dtor$5.c)
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x1801BF061 (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TransferAllWindowsBetweenGloms_::_1_::dtor$1 @ 0x1801C3B55 (_CApplicationManager--TransferAllWindowsBetweenGloms_--_1_--dtor$1.c)
 *     _CApplicationManager::TransferWindowBetweenGloms_::_1_::dtor$0 @ 0x1801C3BB7 (_CApplicationManager--TransferWindowBetweenGloms_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleTaskWindowDestruction_::_1_::dtor$2 @ 0x1801C661C (_CApplicationManager--_HandleTaskWindowDestruction_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleTaskWindowDestruction_::_1_::dtor$3 @ 0x1801C6628 (_CApplicationManager--_HandleTaskWindowDestruction_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall CTaskWindowFinder::~CTaskWindowFinder(CTaskWindowFinder *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 1);
}
