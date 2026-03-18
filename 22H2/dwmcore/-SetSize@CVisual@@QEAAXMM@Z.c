/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x180097BF4
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180098630 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x180131EA0 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180097E78 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180098E5C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098F64 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800991C8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  float v4; // [rsp+50h] [rbp+8h] BYREF
  float v5; // [rsp+54h] [rbp+Ch]

  if ( *((float *)this + 33) != a2 || *((float *)this + 34) != a3 )
  {
    *((float *)this + 33) = a2;
    *((float *)this + 34) = a3;
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v4 = a2;
    v5 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Cu, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 0x1Cu);
  }
}
