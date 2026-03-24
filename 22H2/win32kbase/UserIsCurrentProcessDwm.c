/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C0048F20
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002160 (NtUpdateInputSinkTransforms.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015524 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C001CD20 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0021BE8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplayDevices @ 0x1C0028990 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C002AC30 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00475E0 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C0048CC0 (GreSfmGetNotificationTokens.c)
 *     NtDuplicateCompositionInputSink @ 0x1C004C120 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSink @ 0x1C005B310 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C005DAF0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C005DFD0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C0095294 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C009E0D0 (NtDCompositionSetMaterialProperty.c)
 *     GreSfmOpenTokenEvent @ 0x1C00A8AF0 (GreSfmOpenTokenEvent.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00AABBC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00AFFA0 (NtDCompositionCreateDwmChannel.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C014A2B0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01D20B0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01D2320 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C01D2AA0 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C01FB110 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}
