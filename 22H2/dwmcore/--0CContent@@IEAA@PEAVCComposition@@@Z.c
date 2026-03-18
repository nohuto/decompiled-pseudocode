/*
 * XREFs of ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B9448
 * Callers:
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x180019260 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 *     ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x180023FA0 (--0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800AF164 (--0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800B6414 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B8398 (--0CEffectBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B86B8 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800B8850 (--0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B8BC0 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x1800B8DB0 (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CMaskBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B90A4 (--0CMaskBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B915C (--0CColorBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x1800B92EC (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B9318 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800F8A60 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800FE4BC (--0CBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x180100BC8 (--0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x180100DC8 (--0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x1801C0EEC (--0CInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSnapshot@@IEAA@PEAVCComposition@@@Z @ 0x1801C1418 (--0CSnapshot@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1801C16C0 (--0CVisualBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z @ 0x1801C17AC (--0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CClipBrush@@IEAA@PEAVCComposition@@@Z @ 0x180220E50 (--0CClipBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z @ 0x18022517C (--0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x18022E6E0 (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x180241900 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x180248B0C (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x180254D74 (--0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x1802636CC (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
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
