/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C0014970
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C000A980 (NtDCompositionCreateDwmChannel.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0014810 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00171BC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C0057A50 (NtDCompositionSetMaterialProperty.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C0058084 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C006CDD0 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0070D14 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplayDevices @ 0x1C00721C0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     NtQueryCompositionInputSink @ 0x1C00959D0 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0095C00 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtUpdateInputSinkTransforms @ 0x1C0095E60 (NtUpdateInputSinkTransforms.c)
 *     GreSfmOpenTokenEvent @ 0x1C009B710 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C009B840 (GreSfmGetNotificationTokens.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BEC88 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00DD2FC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0176230 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C02112B0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C02115B0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C02121D0 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C023CF30 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PsGetCurrentProcess(a1, a2, a3, a4) == (_QWORD)g_pepDwm;
}
