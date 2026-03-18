/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180098CB0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180098630 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x180131E0A (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180098D98 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180098E5C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098F64 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800991C8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

void __fastcall CVisual::SetOffset(CVisual *this, float a2, float a3, float a4)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((float *)this + 28) != a2 || *((float *)this + 29) != a3 || *((float *)this + 30) != a4 )
  {
    *((float *)this + 28) = a2;
    *((float *)this + 29) = a3;
    *((float *)this + 30) = a4;
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    *(float *)v5 = a2;
    *(float *)&v5[1] = a3;
    *(float *)&v5[2] = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Bu, (const struct D2DVector3 *)v5);
    CResource::InvalidateAnimationSources(this, 0x1Bu);
  }
}
