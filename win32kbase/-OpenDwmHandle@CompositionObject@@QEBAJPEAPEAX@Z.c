/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0091610
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0009AC0 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C000D4F0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0091508 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C00915A0 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C02480B0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C02488B0 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, v3, a2);
}
