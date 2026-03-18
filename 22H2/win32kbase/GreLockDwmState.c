/*
 * XREFs of GreLockDwmState @ 0x1C0087030
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C000AF70 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C000EF50 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0084BF8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0086004 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0086AC8 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C0086C80 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0086ED4 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C0086FA0 (UserReferenceDwmApiPort.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0209C10 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C02232B0 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BC08 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockDwmState(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rcx

  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v4 = *(struct _ERESOURCE **)(v3 + 72);
  if ( v4 )
  {
    PsEnterPriorityRegion(v2, v1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  v5 = *(_QWORD *)(v3 + 72);
  result = SGDGetSessionState(v2);
  v9 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v9 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v9, v7, v8, v5, 7, (__int64)L"GreBaseGlobals.hsemDwmState");
  }
  return result;
}
