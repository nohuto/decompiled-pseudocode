/*
 * XREFs of ReferenceDwmProcess @ 0x1C00918D0
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00916C0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 *     UserReferenceDwmProcess @ 0x1C00918B0 (UserReferenceDwmProcess.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0248570 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C0261BD0 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02651FC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265A98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 ReferenceDwmProcess()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    ObReferenceObjectByPointer(
      *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
      0x1FFFFFu,
      (POBJECT_TYPE)PsProcessType,
      0);
  return v0;
}
