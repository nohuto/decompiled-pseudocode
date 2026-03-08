/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C00919E0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0009AC0 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C000D4F0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0091508 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C02488B0 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0091A70 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 */

PVOID __fastcall UserReferenceDwmApiPort(__int64 a1)
{
  int v1; // edi
  struct _ERESOURCE *v2; // rbx
  PVOID DeviceContext; // rbx

  v1 = 0;
  v2 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 72LL);
  if ( !ExIsResourceAcquiredExclusiveLite(v2) && !ExIsResourceAcquiredSharedLite(v2) )
  {
    GreLockDwmState();
    v1 = 1;
  }
  DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    ObfReferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  if ( v1 )
    GreUnlockDwmState();
  return DeviceContext;
}
