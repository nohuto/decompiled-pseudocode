/*
 * XREFs of ?IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180010278
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801D2CA4 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 */

char __fastcall CComposition::IsTextureMemoryHeatMapEnabled(CComposition *this)
{
  _DWORD *v1; // rcx
  char v2; // r9

  v1 = (_DWORD *)((char *)this + 1112);
  v2 = 0;
  if ( *v1 )
    return *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v1) == 2;
  return v2;
}
