/*
 * XREFs of ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800E6CF8
 * Callers:
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1800E6CB0 (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SE.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180247240 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800E6D4C (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CNineGridBrush::SetInsetProperty(CNineGridBrush *this, unsigned int a2, float a3)
{
  float *InsetFieldPointer; // rax
  CResource *v5; // rcx
  int v6; // r8d

  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( a3 != *InsetFieldPointer )
  {
    *InsetFieldPointer = a3;
    CResource::InvalidateAnimationSources(v5, v6);
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 72LL))(this, 6LL, this);
  }
}
