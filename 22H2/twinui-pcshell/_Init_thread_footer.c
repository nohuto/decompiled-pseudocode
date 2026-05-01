/*
 * XREFs of _Init_thread_footer @ 0x1800910C8
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8A0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x180054CA0 (-NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180085BAC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800DC7E4 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801225B0 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1801C02A0 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1801CA6C4 (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x1801CA778 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1801CE9D0 (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180261BC0 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x180263B64 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1802A89D4 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x1802CF6E4 (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1802E2708 (-OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x180315A74 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x18032827C (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180393390 (--$_Callback_once@V-$tuple@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@AEAVexception_ptr@st.c)
 *     _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x1803BA59C (_anonymous_namespace_--GetRelaunchPolicyFromActivationResult.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x1803BA6DC (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x18043501C (-RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180490598 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_18064F5F8);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_18064F5F8);
  return Init_thread_notify();
}
