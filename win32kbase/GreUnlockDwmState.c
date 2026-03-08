/*
 * XREFs of GreUnlockDwmState @ 0x1C0091AF0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0009AC0 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C000D4F0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0091508 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00916C0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C00919E0 (UserReferenceDwmApiPort.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0248570 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C02488B0 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C0261BD0 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02651FC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265A98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreUnlockDwmState(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v2 = *(_QWORD *)(v1 + 72);
  result = SGDGetSessionState(v3);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v6,
               (unsigned int)&LockRelease,
               v5,
               v2,
               (__int64)L"GreBaseGlobals.hsemDwmState");
  v7 = *(struct _ERESOURCE **)(v1 + 72);
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    return PsLeavePriorityRegion(v9, v8);
  }
  return result;
}
