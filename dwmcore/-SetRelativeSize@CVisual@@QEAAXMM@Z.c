/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180039D40
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180098440 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z @ 0x18012DCCC (-ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@.c)
 * Callees:
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x180039DEC (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180039E44 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180097C88 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180098C6C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeSize(CVisual *this, double a2, double a3)
{
  float v4; // [rsp+68h] [rbp+20h] BYREF
  float v5; // [rsp+6Ch] [rbp+24h]

  CVisual::GetRelativeLayoutSizeInternal(this);
  if ( v4 != *(float *)&a2 || v5 != *(float *)&a3 )
  {
    CVisual::SetRelativeLayoutSizeInternal(
      this,
      (struct D2D_SIZE_F)*(_OWORD *)&_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3));
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v4 = *(float *)&a2;
    v5 = *(float *)&a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Eu, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 0x1Eu);
  }
}
