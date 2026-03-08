/*
 * XREFs of _guard_xfg_dispatch_icall_nop @ 0x140007200
 * Callers:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x140001380 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x14000191C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x1400020DC (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x14000210C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002400 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x140002A24 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x140002C20 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x140002EA0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?QueryInterface@CDwmAppHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140004F90 (-QueryInterface@CDwmAppHost@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __scrt_common_main_seh @ 0x140005350 (__scrt_common_main_seh.c)
 *     _RTC_Initialize @ 0x140005D44 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x140005DA0 (_RTC_Terminate.c)
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x1400069F0 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x140006DC0 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x140006E38 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x140006ECC (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x140006F70 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z @ 0x140007010 (-OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140008410 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x140008FC0 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140009164 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x140009A08 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x14000A0B0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x14000A3E0 (-WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000A458 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x14000A51C (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14000A5E0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwn.c)
 *     ??0HotKeyCallback@@QEAA@XZ @ 0x14000A76C (--0HotKeyCallback@@QEAA@XZ.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x14000A7E4 (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??1?$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000A8CC (--1-$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000ACF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000AE00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHot_ea_14000AE00.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000AEA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x14000AF90 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x14000B26C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationChange@.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x14000B638 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14000C0B4 (-InternalRelease@-$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKX.c)
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000C0EC (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 *     ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x14000C300 (-WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x14000D838 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     _tlgEnableCallback @ 0x14000DAE0 (_tlgEnableCallback.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000DF68 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x14000E264 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_xfg_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
