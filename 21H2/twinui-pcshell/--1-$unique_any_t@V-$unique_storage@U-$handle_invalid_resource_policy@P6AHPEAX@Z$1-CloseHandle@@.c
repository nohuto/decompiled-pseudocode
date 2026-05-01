/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801B6F2C
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18003A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8A0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     _UserHelpers::GetUserTokenHandle_::_1_::dtor$0 @ 0x1800A6E63 (_UserHelpers--GetUserTokenHandle_--_1_--dtor$0.c)
 *     ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x1800A7C74 (-IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z.c)
 *     _UserHelpers::IsUserAnAdmin_::_1_::dtor$0 @ 0x1800A7DE0 (_UserHelpers--IsUserAnAdmin_--_1_--dtor$0.c)
 *     _UserHelpers::IsUserAnAdmin_::_1_::dtor$1 @ 0x1800A7DEC (_UserHelpers--IsUserAnAdmin_--_1_--dtor$1.c)
 *     _lambda_394656eb2278d455fd4307dad9bf4072_::operator() @ 0x1800CC9D8 (_lambda_394656eb2278d455fd4307dad9bf4072_--operator().c)
 *     ??1folder_change_reader_state@details@wil@@QEAA@XZ @ 0x18011B7BC (--1folder_change_reader_state@details@wil@@QEAA@XZ.c)
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1801495C0 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 *     _CClassicWindow::GetApplicationId_::_1_::dtor$0 @ 0x180174450 (_CClassicWindow--GetApplicationId_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x180174810 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _Win32ApplicationViewHelpers::GetWindowImageName_::_1_::dtor$1 @ 0x180175BBD (_Win32ApplicationViewHelpers--GetWindowImageName_--_1_--dtor$1.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x1801C41BA (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x1802437F2 (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x18028A2E8 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x18029040D (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _TabViewManager::CreateDwmSharedThumbnailVisual_::_1_::dtor$2 @ 0x1802DCEA6 (_TabViewManager--CreateDwmSharedThumbnailVisual_--_1_--dtor$2.c)
 *     _TitleBarController::ConnectTitleBarToSharedVisual_::_1_::dtor$0 @ 0x1802F694D (_TitleBarController--ConnectTitleBarToSharedVisual_--_1_--dtor$0.c)
 *     _TitleBarController::DisconnectTitleBarFromSharedVisual_::_1_::dtor$0 @ 0x1802F69E5 (_TitleBarController--DisconnectTitleBarFromSharedVisual_--_1_--dtor$0.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x18032F1FF (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator()_::_1_::dtor$2 @ 0x18033A369 (__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator()_--_1_--dtor$2.c)
 *     __lambda_1c848fc40f8d66460ef5049a4e343f17_::operator()_::_1_::dtor$2 @ 0x18034B17E (__lambda_1c848fc40f8d66460ef5049a4e343f17_--operator()_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::GetForegroundAppId_::_1_::dtor$1 @ 0x1803BA532 (_TouchKeyboardExperienceManager--GetForegroundAppId_--_1_--dtor$1.c)
 *     _TryGetProcessExePathAndAppId_::_1_::dtor$2 @ 0x1804CF07C (_TryGetProcessExePathAndAppId_--_1_--dtor$2.c)
 *     _TryGetProcessCommandLine_::_1_::dtor$0 @ 0x1804CF754 (_TryGetProcessCommandLine_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
