/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801B6D7C
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18003A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8A0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     _UserHelpers::GetUserTokenHandle_::_1_::dtor$0 @ 0x1800A6E43 (_UserHelpers--GetUserTokenHandle_--_1_--dtor$0.c)
 *     ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x1800A7C54 (-IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z.c)
 *     _UserHelpers::IsUserAnAdmin_::_1_::dtor$0 @ 0x1800A7DC0 (_UserHelpers--IsUserAnAdmin_--_1_--dtor$0.c)
 *     _UserHelpers::IsUserAnAdmin_::_1_::dtor$1 @ 0x1800A7DCC (_UserHelpers--IsUserAnAdmin_--_1_--dtor$1.c)
 *     _lambda_394656eb2278d455fd4307dad9bf4072_::operator() @ 0x1800CC9B8 (_lambda_394656eb2278d455fd4307dad9bf4072_--operator().c)
 *     ??1folder_change_reader_state@details@wil@@QEAA@XZ @ 0x18011B64C (--1folder_change_reader_state@details@wil@@QEAA@XZ.c)
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x180149450 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 *     _CClassicWindow::GetApplicationId_::_1_::dtor$0 @ 0x1801742A0 (_CClassicWindow--GetApplicationId_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x180174660 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _Win32ApplicationViewHelpers::GetWindowImageName_::_1_::dtor$1 @ 0x180175A0D (_Win32ApplicationViewHelpers--GetWindowImageName_--_1_--dtor$1.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x1801C400A (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x180243642 (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x18028A138 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x18029025D (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _TabViewManager::CreateDwmSharedThumbnailVisual_::_1_::dtor$2 @ 0x1802DCC36 (_TabViewManager--CreateDwmSharedThumbnailVisual_--_1_--dtor$2.c)
 *     _TitleBarController::ConnectTitleBarToSharedVisual_::_1_::dtor$0 @ 0x1802F66DD (_TitleBarController--ConnectTitleBarToSharedVisual_--_1_--dtor$0.c)
 *     _TitleBarController::DisconnectTitleBarFromSharedVisual_::_1_::dtor$0 @ 0x1802F6775 (_TitleBarController--DisconnectTitleBarFromSharedVisual_--_1_--dtor$0.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x18032EF8F (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator()_::_1_::dtor$2 @ 0x18033A0F9 (__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator()_--_1_--dtor$2.c)
 *     __lambda_1c848fc40f8d66460ef5049a4e343f17_::operator()_::_1_::dtor$2 @ 0x18034AEAE (__lambda_1c848fc40f8d66460ef5049a4e343f17_--operator()_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::GetForegroundAppId_::_1_::dtor$1 @ 0x1803BA262 (_TouchKeyboardExperienceManager--GetForegroundAppId_--_1_--dtor$1.c)
 *     _TryGetProcessExePathAndAppId_::_1_::dtor$2 @ 0x1804CECEC (_TryGetProcessExePathAndAppId_--_1_--dtor$2.c)
 *     _TryGetProcessCommandLine_::_1_::dtor$0 @ 0x1804CF3C4 (_TryGetProcessCommandLine_--_1_--dtor$0.c)
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
