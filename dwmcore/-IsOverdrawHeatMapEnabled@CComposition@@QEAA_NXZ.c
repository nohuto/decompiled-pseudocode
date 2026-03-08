/*
 * XREFs of ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180010254
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18000F1BC (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800101E4 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18022796C (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801D2CA4 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 */

char __fastcall CComposition::IsOverdrawHeatMapEnabled(CComposition *this)
{
  _DWORD *v1; // rcx
  char v2; // cl
  _DWORD *TopByReference; // rax

  v1 = (_DWORD *)((char *)this + 1112);
  if ( !*v1 )
    return 0;
  TopByReference = (_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v1);
  v2 = 1;
  if ( *TopByReference != 1 )
    return 0;
  return v2;
}
