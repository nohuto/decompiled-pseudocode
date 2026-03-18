/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00908E0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0006AA0 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C0090700 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C0211480 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C0211E50 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0212060 (NtDCompositionSetChildRootVisual.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0212E40 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C009090C (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, v3, a2);
}
