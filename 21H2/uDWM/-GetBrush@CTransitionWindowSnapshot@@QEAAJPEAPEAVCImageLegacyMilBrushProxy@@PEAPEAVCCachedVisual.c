/*
 * XREFs of ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x1800083A0
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000E478 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180033E24 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::GetBrush(
        CTransitionWindowSnapshot *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        float *a4)
{
  unsigned int v4; // ebx
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rax

  v4 = 0;
  if ( a2 && a3 && (v9 = (volatile signed __int32 *)*((_QWORD *)this + 37)) != 0LL && *((_QWORD *)this + 36) )
  {
    if ( *a2 )
    {
      CBaseObject::Release(*a2);
      v9 = (volatile signed __int32 *)*((_QWORD *)this + 37);
    }
    *a2 = (struct CImageLegacyMilBrushProxy *)v9;
    if ( v9 )
      _InterlockedIncrement(v9 + 2);
    if ( *a3 )
      CBaseObject::Release(*a3);
    v10 = (volatile signed __int32 *)*((_QWORD *)this + 36);
    *a3 = (struct CCachedVisualImageProxy *)v10;
    if ( v10 )
      _InterlockedIncrement(v10 + 2);
    *a4 = *((float *)this + 88);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
