/*
 * XREFs of ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68
 * Callers:
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x180019170 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 *     ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x180023EB0 (--0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800AEA04 (--0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800B5F34 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B7EB8 (--0CEffectBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B81D8 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800B8370 (--0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B86E0 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x1800B88D0 (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CMaskBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B8BC4 (--0CMaskBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B8C7C (--0CColorBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x1800B8E0C (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B8E38 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800F7E20 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800FD87C (--0CBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800FFF88 (--0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x180100188 (--0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x1801BDCBC (--0CInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSnapshot@@IEAA@PEAVCComposition@@@Z @ 0x1801BE1E8 (--0CSnapshot@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1801BE490 (--0CVisualBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z @ 0x1801BE57C (--0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CClipBrush@@IEAA@PEAVCComposition@@@Z @ 0x18021D8F0 (--0CClipBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z @ 0x180221C1C (--0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x18022B0A0 (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x18023E220 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18024542C (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x1802516B4 (--0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18026000C (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     <none>
 */

CContent *__fastcall CContent::CContent(CContent *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CContent *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CContent::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CContent::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 16;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 32;
  return result;
}
