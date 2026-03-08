/*
 * XREFs of ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800B5F34
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180223760 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(
        CCompositionSurfaceBitmap *this,
        struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vbtable'{for `CContent'};
  *((_QWORD *)this + 10) = &CCompositionSurfaceBitmap::`vbtable';
  *((_QWORD *)this + 29) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 28) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 29) + 4LL) + 232) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 72) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 4LL) + v2 + 80) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)v2 = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *(_QWORD *)(v2 + 72) = &CCompositionSurfaceBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(v2 + 88) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *(_QWORD *)(v2 + 96) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 4LL) + v2 + 64) = &CCompositionSurfaceBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CCompositionSurfaceBitmap::`vftable'{for `IContent'};
  v3 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v3 + v2 + 60) = v3 - 144;
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 160;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 120) = v2 + 128;
  *(_DWORD *)(v2 + 128) = 0;
  return (CCompositionSurfaceBitmap *)v2;
}
