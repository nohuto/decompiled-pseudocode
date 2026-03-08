/*
 * XREFs of __security_check_cookie @ 0x140005510
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x14000149C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x140001F8C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140003610 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000394C (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140003BA4 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140004228 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140004594 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1400047B8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     __GSHandlerCheckCommon @ 0x1400070E4 (__GSHandlerCheckCommon.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1400086E0 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140008794 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140008ADC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140008D10 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140009164 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x140009594 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000AF0C (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14000B0CC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x14000BB54 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     ?GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z @ 0x14000BDA8 (-GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z.c)
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000C0EC (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 *     ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x14000C300 (-WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x14000C390 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000C764 (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000C890 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000CE78 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D484 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000D5D8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000D6A8 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x14000DA0C (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000DE60 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000E02C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
