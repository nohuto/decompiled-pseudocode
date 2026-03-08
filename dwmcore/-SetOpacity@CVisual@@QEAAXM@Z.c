/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800388A0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180098440 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x18012DC84 (-ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180038938 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x180038994 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180097D40 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  float OpacityInternal; // xmm7_4

  OpacityInternal = CVisual::GetOpacityInternal(this);
  if ( OpacityInternal != a2 )
  {
    CVisual::SetOpacityInternal(this, a2);
    CVisual::PropagateFlags(
      this,
      ((COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929) ^ (unsigned int)(COERCE_FLOAT(LODWORD(OpacityInternal) & _xmm) < 0.0000011920929))
    + 4);
    CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x19u, a2);
    CResource::InvalidateAnimationSources(this, 0x19u);
  }
}
