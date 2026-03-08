/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00A7DB4
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0009AC0 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C000D4F0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C006A0C0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x1C00913F0 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A13E8 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A1588 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     CreateSharedResourceObject @ 0x1C00A19E4 (CreateSharedResourceObject.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C00BE150 (NtDCompositionSetMaterialProperty.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C02488B0 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C00A7DF8 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct DirectComposition::ResourceObject **a4)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 1LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
