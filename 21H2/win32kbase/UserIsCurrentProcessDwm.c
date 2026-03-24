/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C00478C0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002160 (NtUpdateInputSinkTransforms.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00140B4 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C001B8B0 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0020778 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplayDevices @ 0x1C0027520 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00297C0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0046170 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C0047660 (GreSfmGetNotificationTokens.c)
 *     NtDuplicateCompositionInputSink @ 0x1C004AAC0 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSink @ 0x1C005A310 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C005CAF0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C005CFD0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00944D4 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C009D310 (NtDCompositionSetMaterialProperty.c)
 *     GreSfmOpenTokenEvent @ 0x1C00A85F0 (GreSfmOpenTokenEvent.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00AA6BC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00AFC60 (NtDCompositionCreateDwmChannel.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0149F60 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01D2180 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01D23F0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C01D2B70 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C01FB1E0 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}
