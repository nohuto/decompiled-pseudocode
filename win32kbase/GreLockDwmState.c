/*
 * XREFs of GreLockDwmState @ 0x1C0091A70
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0009AC0 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C000D4F0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0091508 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00916C0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0091914 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C00919E0 (UserReferenceDwmApiPort.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C02488B0 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C0261BD0 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockDwmState(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rcx

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = *(struct _ERESOURCE **)(v2 + 72);
  if ( v3 )
  {
    PsEnterPriorityRegion(v1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  v4 = *(_QWORD *)(v2 + 72);
  result = SGDGetSessionState(v1);
  v8 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v8 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v8, v6, v7, v4, 7, (__int64)L"GreBaseGlobals.hsemDwmState");
  }
  return result;
}
