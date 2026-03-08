/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C00191C0
 * Callers:
 *     GreSfmOpenTokenEvent @ 0x1C0019080 (GreSfmOpenTokenEvent.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001F480 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C0020F50 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C005CC10 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C006A0C0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtUpdateInputSinkTransforms @ 0x1C006A230 (NtUpdateInputSinkTransforms.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C006AB50 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C006B308 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C006CAF8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplayDevices @ 0x1C0071810 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0075884 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0090F08 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00B1118 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtQueryCompositionInputSink @ 0x1C00B8EF0 (NtQueryCompositionInputSink.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C00BE150 (NtDCompositionSetMaterialProperty.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00C9F90 (NtDCompositionCreateDwmChannel.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CC86C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00D8060 (GreSfmGetNotificationTokens.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C0247F70 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C02481F0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C02489A0 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C0270A40 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PsGetCurrentProcess(a1, a2, a3, a4) == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
}
