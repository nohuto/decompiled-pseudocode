/*
 * XREFs of GreUnlockDwmState @ 0x1C00870B0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C000AF70 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C000EF50 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0084BF8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0086004 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0086AC8 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C0086C80 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C0086D6C (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C0086FA0 (UserReferenceDwmApiPort.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D5730 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0209C10 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C02232B0 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022687C (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0227118 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
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
    return PsLeavePriorityRegion();
  }
  return result;
}
